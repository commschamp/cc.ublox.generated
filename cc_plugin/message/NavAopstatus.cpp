#include "NavAopstatus.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavAopstatus.h"
#include "cc_plugin/field/Itow.h"
#include "cc_plugin/field/Res1.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavAopstatusFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_aopCfg()
{
    using Field = ublox::message::NavAopstatusFields<>::AopCfg;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "useAOP")
            .asMap();
    
}

static QVariantMap createProps_status()
{
    using Field = ublox::message::NavAopstatusFields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved0()
{
    using Field = ublox::message::NavAopstatusFields<>::Reserved0;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavAopstatusFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_availGPS()
{
    using Field = ublox::message::NavAopstatusFields<>::AvailGPS;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::NavAopstatusFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::NavAopstatusFields<>::Reserved3;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_aopCfg());
    props.append(createProps_status());
    props.append(createProps_reserved0());
    props.append(createProps_reserved1());
    props.append(createProps_availGPS());
    props.append(createProps_reserved2());
    props.append(createProps_reserved3());
    return props;
}

} // namespace

class NavAopstatusImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavAopstatus<ublox::cc_plugin::Message>,
        NavAopstatusImpl
    >
{
public:
    NavAopstatusImpl() = default;
    NavAopstatusImpl(const NavAopstatusImpl&) = delete;
    NavAopstatusImpl(NavAopstatusImpl&&) = delete;
    virtual ~NavAopstatusImpl() = default;
    NavAopstatusImpl& operator=(const NavAopstatusImpl&) = default;
    NavAopstatusImpl& operator=(NavAopstatusImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavAopstatus::NavAopstatus() : m_pImpl(new NavAopstatusImpl) {}
NavAopstatus::~NavAopstatus() = default;

NavAopstatus& NavAopstatus::operator=(const NavAopstatus& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavAopstatus& NavAopstatus::operator=(NavAopstatus&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavAopstatus::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavAopstatus::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavAopstatus::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavAopstatus::resetImpl()
{
    m_pImpl->reset();
}

bool NavAopstatus::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavAopstatus*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavAopstatus::MsgIdParamType NavAopstatus::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavAopstatus::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavAopstatus::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavAopstatus::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavAopstatus::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavAopstatus::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


