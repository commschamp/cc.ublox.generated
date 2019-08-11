#include "NavOdo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavOdo.h"
#include "cc_plugin/field/Itow.h"
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
    using Field = ublox::message::NavOdoFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::NavOdoFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res3(Field::name());
    return props;
    
}

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavOdoFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_distance()
{
    using Field = ublox::message::NavOdoFields<>::Distance;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_totalDistance()
{
    using Field = ublox::message::NavOdoFields<>::TotalDistance;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_distanceStd()
{
    using Field = ublox::message::NavOdoFields<>::DistanceStd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_itow());
    props.append(createProps_distance());
    props.append(createProps_totalDistance());
    props.append(createProps_distanceStd());
    return props;
}

} // namespace

class NavOdoImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavOdo<ublox::cc_plugin::Message>,
        NavOdoImpl
    >
{
public:
    NavOdoImpl() = default;
    NavOdoImpl(const NavOdoImpl&) = delete;
    NavOdoImpl(NavOdoImpl&&) = delete;
    virtual ~NavOdoImpl() = default;
    NavOdoImpl& operator=(const NavOdoImpl&) = default;
    NavOdoImpl& operator=(NavOdoImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavOdo::NavOdo() : m_pImpl(new NavOdoImpl) {}
NavOdo::~NavOdo() = default;

NavOdo& NavOdo::operator=(const NavOdo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOdo& NavOdo::operator=(NavOdo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavOdo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavOdo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavOdo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavOdo::resetImpl()
{
    m_pImpl->reset();
}

bool NavOdo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavOdo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavOdo::MsgIdParamType NavOdo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavOdo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavOdo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavOdo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavOdo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavOdo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


