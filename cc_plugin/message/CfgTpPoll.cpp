#include "CfgTpPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTpPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgTpPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTpPoll<ublox::cc_plugin::Message>,
        CfgTpPollImpl
    >
{
public:
    CfgTpPollImpl() = default;
    CfgTpPollImpl(const CfgTpPollImpl&) = delete;
    CfgTpPollImpl(CfgTpPollImpl&&) = delete;
    virtual ~CfgTpPollImpl() = default;
    CfgTpPollImpl& operator=(const CfgTpPollImpl&) = default;
    CfgTpPollImpl& operator=(CfgTpPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTpPoll::CfgTpPoll() : m_pImpl(new CfgTpPollImpl) {}
CfgTpPoll::~CfgTpPoll() = default;

CfgTpPoll& CfgTpPoll::operator=(const CfgTpPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTpPoll& CfgTpPoll::operator=(CfgTpPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTpPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTpPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTpPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTpPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTpPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTpPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTpPoll::MsgIdParamType CfgTpPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTpPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTpPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTpPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTpPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTpPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


