#include "TimFchgPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimFchgPoll.h"
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

class TimFchgPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimFchgPoll<ublox::cc_plugin::Message>,
        TimFchgPollImpl
    >
{
public:
    TimFchgPollImpl() = default;
    TimFchgPollImpl(const TimFchgPollImpl&) = delete;
    TimFchgPollImpl(TimFchgPollImpl&&) = delete;
    virtual ~TimFchgPollImpl() = default;
    TimFchgPollImpl& operator=(const TimFchgPollImpl&) = default;
    TimFchgPollImpl& operator=(TimFchgPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimFchgPoll::TimFchgPoll() : m_pImpl(new TimFchgPollImpl) {}
TimFchgPoll::~TimFchgPoll() = default;

TimFchgPoll& TimFchgPoll::operator=(const TimFchgPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimFchgPoll& TimFchgPoll::operator=(TimFchgPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimFchgPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimFchgPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimFchgPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimFchgPoll::resetImpl()
{
    m_pImpl->reset();
}

bool TimFchgPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimFchgPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimFchgPoll::MsgIdParamType TimFchgPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimFchgPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimFchgPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimFchgPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimFchgPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimFchgPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


