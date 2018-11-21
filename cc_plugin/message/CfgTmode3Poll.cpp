#include "CfgTmode3Poll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgTmode3Poll.h"
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

class CfgTmode3PollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgTmode3Poll<ublox::cc_plugin::Message>,
        CfgTmode3PollImpl
    >
{
public:
    CfgTmode3PollImpl() = default;
    CfgTmode3PollImpl(const CfgTmode3PollImpl&) = delete;
    CfgTmode3PollImpl(CfgTmode3PollImpl&&) = delete;
    virtual ~CfgTmode3PollImpl() = default;
    CfgTmode3PollImpl& operator=(const CfgTmode3PollImpl&) = default;
    CfgTmode3PollImpl& operator=(CfgTmode3PollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgTmode3Poll::CfgTmode3Poll() : m_pImpl(new CfgTmode3PollImpl) {}
CfgTmode3Poll::~CfgTmode3Poll() = default;

CfgTmode3Poll& CfgTmode3Poll::operator=(const CfgTmode3Poll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgTmode3Poll& CfgTmode3Poll::operator=(CfgTmode3Poll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgTmode3Poll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgTmode3Poll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgTmode3Poll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgTmode3Poll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgTmode3Poll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgTmode3Poll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgTmode3Poll::MsgIdParamType CfgTmode3Poll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgTmode3Poll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgTmode3Poll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgTmode3Poll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgTmode3Poll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgTmode3Poll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


