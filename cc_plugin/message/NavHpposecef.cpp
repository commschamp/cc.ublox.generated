#include "NavHpposecef.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavHpposecef.h"
#include "cc_plugin/field/EcefHP.h"
#include "cc_plugin/field/EcefX.h"
#include "cc_plugin/field/EcefY.h"
#include "cc_plugin/field/EcefZ.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavHpposecefFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavHpposecefFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavHpposecefFields<>::Itow;
    return cc_plugin::field::createProps_itow(Field::name());
    
}

static QVariantMap createProps_ecefX()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefX;
    return cc_plugin::field::createProps_ecefX(Field::name());
    
}

static QVariantMap createProps_ecefY()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefY;
    return cc_plugin::field::createProps_ecefY(Field::name());
    
}

static QVariantMap createProps_ecefZ()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefZ;
    return cc_plugin::field::createProps_ecefZ(Field::name());
    
}

static QVariantMap createProps_ecefXHp()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefXHp;
    return cc_plugin::field::createProps_ecefHP(Field::name());
    
}

static QVariantMap createProps_ecefYHp()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefYHp;
    return cc_plugin::field::createProps_ecefHP(Field::name());
    
}

static QVariantMap createProps_ecefZHp()
{
    using Field = ublox::message::NavHpposecefFields<>::EcefZHp;
    return cc_plugin::field::createProps_ecefHP(Field::name());
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavHpposecefFields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_pAcc()
{
    using Field = ublox::message::NavHpposecefFields<>::PAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(1U)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_itow());
    props.append(createProps_ecefX());
    props.append(createProps_ecefY());
    props.append(createProps_ecefZ());
    props.append(createProps_ecefXHp());
    props.append(createProps_ecefYHp());
    props.append(createProps_ecefZHp());
    props.append(createProps_reserved2());
    props.append(createProps_pAcc());
    return props;
}

} // namespace

class NavHpposecefImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavHpposecef<ublox::cc_plugin::Message>,
        NavHpposecefImpl
    >
{
public:
    NavHpposecefImpl() = default;
    NavHpposecefImpl(const NavHpposecefImpl&) = delete;
    NavHpposecefImpl(NavHpposecefImpl&&) = delete;
    virtual ~NavHpposecefImpl() = default;
    NavHpposecefImpl& operator=(const NavHpposecefImpl&) = default;
    NavHpposecefImpl& operator=(NavHpposecefImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavHpposecef::NavHpposecef() : m_pImpl(new NavHpposecefImpl) {}
NavHpposecef::~NavHpposecef() = default;

NavHpposecef& NavHpposecef::operator=(const NavHpposecef& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavHpposecef& NavHpposecef::operator=(NavHpposecef&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavHpposecef::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavHpposecef::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavHpposecef::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavHpposecef::resetImpl()
{
    m_pImpl->reset();
}

bool NavHpposecef::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavHpposecef*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavHpposecef::MsgIdParamType NavHpposecef::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavHpposecef::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavHpposecef::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavHpposecef::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavHpposecef::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavHpposecef::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


