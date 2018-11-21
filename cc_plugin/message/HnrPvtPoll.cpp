#include "HnrPvtPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/HnrPvtPoll.h"
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

class HnrPvtPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::HnrPvtPoll<ublox::cc_plugin::Message>,
        HnrPvtPollImpl
    >
{
public:
    HnrPvtPollImpl() = default;
    HnrPvtPollImpl(const HnrPvtPollImpl&) = delete;
    HnrPvtPollImpl(HnrPvtPollImpl&&) = delete;
    virtual ~HnrPvtPollImpl() = default;
    HnrPvtPollImpl& operator=(const HnrPvtPollImpl&) = default;
    HnrPvtPollImpl& operator=(HnrPvtPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

HnrPvtPoll::HnrPvtPoll() : m_pImpl(new HnrPvtPollImpl) {}
HnrPvtPoll::~HnrPvtPoll() = default;

HnrPvtPoll& HnrPvtPoll::operator=(const HnrPvtPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

HnrPvtPoll& HnrPvtPoll::operator=(HnrPvtPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* HnrPvtPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& HnrPvtPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void HnrPvtPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void HnrPvtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool HnrPvtPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const HnrPvtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

HnrPvtPoll::MsgIdParamType HnrPvtPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus HnrPvtPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus HnrPvtPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool HnrPvtPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t HnrPvtPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool HnrPvtPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


