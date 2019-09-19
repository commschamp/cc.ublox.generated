#include "NavGeofence.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavGeofence.h"
#include "cc_plugin/field/GeofenceState.h"
#include "cc_plugin/field/Itow.h"
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

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavGeofenceFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::NavGeofenceFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_status()
{
    using Field = ublox::message::NavGeofenceFields<>::Status;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Not available", 0)
            .add("Active", 1)
            .asMap();
    
}

static QVariantMap createProps_numFences()
{
    using Field = ublox::message::NavGeofenceFields<>::NumFences;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_combState()
{
    using Field = ublox::message::NavGeofenceFields<>::CombState;
    auto props = cc_plugin::field::createProps_geofenceState(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_state()
        {
            using Field = ublox::message::NavGeofenceFields<>::ListMembers::ElementMembers::State;
            auto props = cc_plugin::field::createProps_geofenceState(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_reserved1()
        {
            using Field = ublox::message::NavGeofenceFields<>::ListMembers::ElementMembers::Reserved1;
            auto props = cc_plugin::field::createProps_res1(Field::name());
            return props;
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::NavGeofenceFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_state())
                .add(ElementMembers::createProps_reserved1())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::NavGeofenceFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_version());
    props.append(createProps_status());
    props.append(createProps_numFences());
    props.append(createProps_combState());
    props.append(createProps_list());
    return props;
}

} // namespace

class NavGeofenceImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavGeofence<ublox::cc_plugin::Message>,
        NavGeofenceImpl
    >
{
public:
    NavGeofenceImpl() = default;
    NavGeofenceImpl(const NavGeofenceImpl&) = delete;
    NavGeofenceImpl(NavGeofenceImpl&&) = delete;
    virtual ~NavGeofenceImpl() = default;
    NavGeofenceImpl& operator=(const NavGeofenceImpl&) = default;
    NavGeofenceImpl& operator=(NavGeofenceImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavGeofence::NavGeofence() : m_pImpl(new NavGeofenceImpl) {}
NavGeofence::~NavGeofence() = default;

NavGeofence& NavGeofence::operator=(const NavGeofence& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavGeofence& NavGeofence::operator=(NavGeofence&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavGeofence::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavGeofence::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavGeofence::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavGeofence::resetImpl()
{
    m_pImpl->reset();
}

bool NavGeofence::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavGeofence*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavGeofence::MsgIdParamType NavGeofence::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavGeofence::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavGeofence::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavGeofence::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavGeofence::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavGeofence::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


