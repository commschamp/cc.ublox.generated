#include "NavSvinfo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavSvinfo.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res2.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavSvinfoFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_numCh()
{
    using Field = ublox::message::NavSvinfoFields<>::NumCh;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

struct GlobalFlagsMembers
{
    static QVariantMap createProps_chipGen()
    {
        using Field = ublox::message::NavSvinfoFields<>::GlobalFlagsMembers::ChipGen;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("Antaris", 0)
                .add("u-blox 5", 1)
                .add("u-blox 6", 2)
                .add("u-blox 7", 3)
                .add("u-blox 8", 4)
                .asMap();
        
    }
    
    static QVariantMap createProps_reserved()
    {
        using Field = ublox::message::NavSvinfoFields<>::GlobalFlagsMembers::Reserved;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_globalFlags()
{
    using Field = ublox::message::NavSvinfoFields<>::GlobalFlags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(GlobalFlagsMembers::createProps_chipGen())
            .add(GlobalFlagsMembers::createProps_reserved())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavSvinfoFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_chn()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Chn;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_svid()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Svid;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_flags()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(0U, "svUsed")
                    .add(1U, "diffCorr")
                    .add(2U, "orbitAvail")
                    .add(3U, "orbitEph")
                    .add(4U, "unhealthy")
                    .add(5U, "orbitAlm")
                    .add(6U, "orbitAop")
                    .add(7U, "smoothed")
                    .asMap();
            
        }
        
        static QVariantMap createProps_quality()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Quality;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add("no signal", 0)
                    .add("searching signal", 1)
                    .add("signal acquired", 2)
                    .add("signal detected but unusable", 3)
                    .add("code locked", 4)
                    .add("code and carrier locked", 5)
                    .add("code and carrier locked", 6)
                    .add("code and carrier locked", 7)
                    .asMap();
            
        }
        
        static QVariantMap createProps_cno()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Cno;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_elev()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Elev;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_azim()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::Azim;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_prRes()
        {
            using Field = ublox::message::NavSvinfoFields<>::ListMembers::ElementMembers::PrRes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::NavSvinfoFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_chn())
                .add(ElementMembers::createProps_svid())
                .add(ElementMembers::createProps_flags())
                .add(ElementMembers::createProps_quality())
                .add(ElementMembers::createProps_cno())
                .add(ElementMembers::createProps_elev())
                .add(ElementMembers::createProps_azim())
                .add(ElementMembers::createProps_prRes())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::NavSvinfoFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_numCh());
    props.append(createProps_globalFlags());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class NavSvinfoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavSvinfo<ublox::cc_plugin::Message>,
        NavSvinfoImpl
    >
{
public:
    NavSvinfoImpl() = default;
    NavSvinfoImpl(const NavSvinfoImpl&) = delete;
    NavSvinfoImpl(NavSvinfoImpl&&) = delete;
    virtual ~NavSvinfoImpl() = default;
    NavSvinfoImpl& operator=(const NavSvinfoImpl&) = default;
    NavSvinfoImpl& operator=(NavSvinfoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavSvinfo::NavSvinfo() : m_pImpl(new NavSvinfoImpl) {}
NavSvinfo::~NavSvinfo() = default;

NavSvinfo& NavSvinfo::operator=(const NavSvinfo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavSvinfo& NavSvinfo::operator=(NavSvinfo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavSvinfo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavSvinfo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavSvinfo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavSvinfo::resetImpl()
{
    m_pImpl->reset();
}

bool NavSvinfo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavSvinfo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavSvinfo::MsgIdParamType NavSvinfo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavSvinfo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavSvinfo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavSvinfo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavSvinfo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavSvinfo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


