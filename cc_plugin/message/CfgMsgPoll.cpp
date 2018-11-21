#include "CfgMsgPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgMsgPoll.h"
#include "cc_plugin/field/MsgId.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_msgId()
{
    using Field = ublox::message::CfgMsgPollFields<>::MsgId;
    return cc_plugin::field::createProps_msgId(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_msgId());
    return props;
}

} // namespace

class CfgMsgPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgMsgPoll<ublox::cc_plugin::Message>,
        CfgMsgPollImpl
    >
{
public:
    CfgMsgPollImpl() = default;
    CfgMsgPollImpl(const CfgMsgPollImpl&) = delete;
    CfgMsgPollImpl(CfgMsgPollImpl&&) = delete;
    virtual ~CfgMsgPollImpl() = default;
    CfgMsgPollImpl& operator=(const CfgMsgPollImpl&) = default;
    CfgMsgPollImpl& operator=(CfgMsgPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgMsgPoll::CfgMsgPoll() : m_pImpl(new CfgMsgPollImpl) {}
CfgMsgPoll::~CfgMsgPoll() = default;

CfgMsgPoll& CfgMsgPoll::operator=(const CfgMsgPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgMsgPoll& CfgMsgPoll::operator=(CfgMsgPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgMsgPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgMsgPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgMsgPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgMsgPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgMsgPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgMsgPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgMsgPoll::MsgIdParamType CfgMsgPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgMsgPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgMsgPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgMsgPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgMsgPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgMsgPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


