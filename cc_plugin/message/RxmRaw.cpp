#include "RxmRaw.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmRaw.h"
#include "cc_plugin/field/Res1.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_rcvTow()
{
    using Field = ublox::message::RxmRawFields<>::RcvTow;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_week()
{
    using Field = ublox::message::RxmRawFields<>::Week;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::RxmRawFields<>::NumSV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::RxmRawFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_cpMes()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::CpMes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_prMes()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::PrMes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_doMes()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::DoMes;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_sv()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::Sv;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_mesQI()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::MesQI;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_cno()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::Cno;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_lli()
        {
            using Field = ublox::message::RxmRawFields<>::ListMembers::ElementMembers::Lli;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::RxmRawFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_cpMes())
                .add(ElementMembers::createProps_prMes())
                .add(ElementMembers::createProps_doMes())
                .add(ElementMembers::createProps_sv())
                .add(ElementMembers::createProps_mesQI())
                .add(ElementMembers::createProps_cno())
                .add(ElementMembers::createProps_lli())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::RxmRawFields<>::List;
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
    props.append(createProps_rcvTow());
    props.append(createProps_week());
    props.append(createProps_numSV());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class RxmRawImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmRaw<ublox::cc_plugin::Message>,
        RxmRawImpl
    >
{
public:
    RxmRawImpl() = default;
    RxmRawImpl(const RxmRawImpl&) = delete;
    RxmRawImpl(RxmRawImpl&&) = delete;
    virtual ~RxmRawImpl() = default;
    RxmRawImpl& operator=(const RxmRawImpl&) = default;
    RxmRawImpl& operator=(RxmRawImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmRaw::RxmRaw() : m_pImpl(new RxmRawImpl) {}
RxmRaw::~RxmRaw() = default;

RxmRaw& RxmRaw::operator=(const RxmRaw& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmRaw& RxmRaw::operator=(RxmRaw&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmRaw::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmRaw::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmRaw::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmRaw::resetImpl()
{
    m_pImpl->reset();
}

bool RxmRaw::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmRaw*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmRaw::MsgIdParamType RxmRaw::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmRaw::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmRaw::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmRaw::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmRaw::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmRaw::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


