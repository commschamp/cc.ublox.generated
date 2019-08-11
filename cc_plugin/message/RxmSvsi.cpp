#include "RxmSvsi.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmSvsi.h"
#include "cc_plugin/field/Itow.h"

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
    using Field = ublox::message::RxmSvsiFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::RxmSvsiFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numVis()
{
    using Field = ublox::message::RxmSvsiFields<>::NumVis;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::RxmSvsiFields<>::NumSV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_svid()
        {
            using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::Svid;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        struct SvFlagMembers
        {
            static QVariantMap createProps_ura()
            {
                using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::SvFlagMembers::Ura;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::SvFlagMembers::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "healthy")
                        .add(1U, "ephVal")
                        .add(2U, "almVal")
                        .add(3U, "notAvail")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_svFlag()
        {
            using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::SvFlag;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(SvFlagMembers::createProps_ura())
                    .add(SvFlagMembers::createProps_bits())
                    .asMap();
            
        }
        
        static QVariantMap createProps_azim()
        {
            using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::Azim;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_elev()
        {
            using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::Elev;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        struct AgeMembers
        {
            static QVariantMap createProps_almAge()
            {
                using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::AgeMembers::AlmAge;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_ephAge()
            {
                using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::AgeMembers::EphAge;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_age()
        {
            using Field = ublox::message::RxmSvsiFields<>::ListMembers::ElementMembers::Age;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(AgeMembers::createProps_almAge())
                    .add(AgeMembers::createProps_ephAge())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::RxmSvsiFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_svid())
                .add(ElementMembers::createProps_svFlag())
                .add(ElementMembers::createProps_azim())
                .add(ElementMembers::createProps_elev())
                .add(ElementMembers::createProps_age())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::RxmSvsiFields<>::List;
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
    props.append(createProps_week());
    props.append(createProps_numVis());
    props.append(createProps_numSV());
    props.append(createProps_list());
    return props;
}

} // namespace

class RxmSvsiImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmSvsi<ublox::cc_plugin::Message>,
        RxmSvsiImpl
    >
{
public:
    RxmSvsiImpl() = default;
    RxmSvsiImpl(const RxmSvsiImpl&) = delete;
    RxmSvsiImpl(RxmSvsiImpl&&) = delete;
    virtual ~RxmSvsiImpl() = default;
    RxmSvsiImpl& operator=(const RxmSvsiImpl&) = default;
    RxmSvsiImpl& operator=(RxmSvsiImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmSvsi::RxmSvsi() : m_pImpl(new RxmSvsiImpl) {}
RxmSvsi::~RxmSvsi() = default;

RxmSvsi& RxmSvsi::operator=(const RxmSvsi& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmSvsi& RxmSvsi::operator=(RxmSvsi&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmSvsi::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmSvsi::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmSvsi::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmSvsi::resetImpl()
{
    m_pImpl->reset();
}

bool RxmSvsi::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmSvsi*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmSvsi::MsgIdParamType RxmSvsi::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmSvsi::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmSvsi::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmSvsi::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmSvsi::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmSvsi::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


