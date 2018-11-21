#include "TimTpPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimTpPoll.h"
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

class TimTpPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimTpPoll<ublox::cc_plugin::Message>,
        TimTpPollImpl
    >
{
public:
    TimTpPollImpl() = default;
    TimTpPollImpl(const TimTpPollImpl&) = delete;
    TimTpPollImpl(TimTpPollImpl&&) = delete;
    virtual ~TimTpPollImpl() = default;
    TimTpPollImpl& operator=(const TimTpPollImpl&) = default;
    TimTpPollImpl& operator=(TimTpPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimTpPoll::TimTpPoll() : m_pImpl(new TimTpPollImpl) {}
TimTpPoll::~TimTpPoll() = default;

TimTpPoll& TimTpPoll::operator=(const TimTpPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimTpPoll& TimTpPoll::operator=(TimTpPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimTpPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimTpPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimTpPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimTpPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimTpPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimTpPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimTpPoll::MsgIdParamType TimTpPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimTpPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimTpPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimTpPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimTpPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimTpPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


