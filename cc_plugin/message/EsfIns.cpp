#include "EsfIns.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/EsfIns.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

struct Bitfield0Members
{
    static QVariantMap createProps_version()
    {
        using Field = ublox::message::EsfInsFields<>::Bitfield0Members::Version;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::EsfInsFields<>::Bitfield0Members::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "xAngRateValid")
                .add(1U, "yAngRateValid")
                .add(2U, "zAngRateValid")
                .add(3U, "xAccelValid")
                .add(4U, "yAccelValid")
                .add(5U, "zAccelValid")
                .asMap();
        
    }
    
};

static QVariantMap createProps_bitfield0()
{
    using Field = ublox::message::EsfInsFields<>::Bitfield0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(Bitfield0Members::createProps_version())
            .add(Bitfield0Members::createProps_bits())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::EsfInsFields<>::Reserved1;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

static QVariantMap createProps_itow()
{
    using Field = ublox::message::EsfInsFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_xAngRate()
{
    using Field = ublox::message::EsfInsFields<>::XAngRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(3U)
            .asMap();
    
}

static QVariantMap createProps_yAngRate()
{
    using Field = ublox::message::EsfInsFields<>::YAngRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(3U)
            .asMap();
    
}

static QVariantMap createProps_zAngRate()
{
    using Field = ublox::message::EsfInsFields<>::ZAngRate;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(3U)
            .asMap();
    
}

static QVariantMap createProps_xAccel()
{
    using Field = ublox::message::EsfInsFields<>::XAccel;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_yAccel()
{
    using Field = ublox::message::EsfInsFields<>::YAccel;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_zAccel()
{
    using Field = ublox::message::EsfInsFields<>::ZAccel;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_bitfield0());
    props.append(createProps_reserved1());
    props.append(createProps_itow());
    props.append(createProps_xAngRate());
    props.append(createProps_yAngRate());
    props.append(createProps_zAngRate());
    props.append(createProps_xAccel());
    props.append(createProps_yAccel());
    props.append(createProps_zAccel());
    return props;
}

} // namespace

class EsfInsImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::EsfIns<ublox::cc_plugin::Message>,
        EsfInsImpl
    >
{
public:
    EsfInsImpl() = default;
    EsfInsImpl(const EsfInsImpl&) = delete;
    EsfInsImpl(EsfInsImpl&&) = delete;
    virtual ~EsfInsImpl() = default;
    EsfInsImpl& operator=(const EsfInsImpl&) = default;
    EsfInsImpl& operator=(EsfInsImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfIns::EsfIns() : m_pImpl(new EsfInsImpl) {}
EsfIns::~EsfIns() = default;

EsfIns& EsfIns::operator=(const EsfIns& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfIns& EsfIns::operator=(EsfIns&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfIns::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfIns::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfIns::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfIns::resetImpl()
{
    m_pImpl->reset();
}

bool EsfIns::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfIns*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfIns::MsgIdParamType EsfIns::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfIns::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfIns::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfIns::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfIns::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfIns::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


