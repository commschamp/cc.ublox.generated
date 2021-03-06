// Generated by commsdsl2comms v3.6.2

#include "CfgValgetPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgValgetPoll.h"
#include "cc_plugin/field/CfgValKeyId.h"
#include "cc_plugin/field/CfgValLayer.h"

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
    using Field = ublox::message::CfgValgetPollFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_layer()
{
    using Field = ublox::message::CfgValgetPollFields<>::Layer;
    auto props = cc_plugin::field::createProps_cfgValLayer(Field::name());
    return props;
    
}

static QVariantMap createProps_position()
{
    using Field = ublox::message::CfgValgetPollFields<>::Position;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct KeysMembers
{
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgValgetPollFields<>::KeysMembers::Element;
        auto props = cc_plugin::field::createProps_cfgValKeyId(Field::name());
        return props;
        
    }
    
};

static QVariantMap createProps_keys()
{
    using Field = ublox::message::CfgValgetPollFields<>::Keys;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(KeysMembers::createProps_element())
            .serialisedHidden()
            .appendIndexToElementName()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_layer());
    props.append(createProps_position());
    props.append(createProps_keys());
    return props;
}

} // namespace

class CfgValgetPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgValgetPoll<ublox::cc_plugin::Message>,
        CfgValgetPollImpl
    >
{
public:
    CfgValgetPollImpl() = default;
    CfgValgetPollImpl(const CfgValgetPollImpl&) = delete;
    CfgValgetPollImpl(CfgValgetPollImpl&&) = delete;
    virtual ~CfgValgetPollImpl() = default;
    CfgValgetPollImpl& operator=(const CfgValgetPollImpl&) = default;
    CfgValgetPollImpl& operator=(CfgValgetPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgValgetPoll::CfgValgetPoll() : m_pImpl(new CfgValgetPollImpl) {}
CfgValgetPoll::~CfgValgetPoll() = default;

CfgValgetPoll& CfgValgetPoll::operator=(const CfgValgetPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgValgetPoll& CfgValgetPoll::operator=(CfgValgetPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgValgetPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgValgetPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgValgetPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgValgetPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgValgetPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgValgetPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgValgetPoll::MsgIdParamType CfgValgetPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgValgetPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgValgetPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgValgetPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgValgetPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgValgetPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


