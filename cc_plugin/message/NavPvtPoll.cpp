// Generated by commsdsl2comms v3.6.2

#include "NavPvtPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavPvtPoll.h"
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

class NavPvtPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavPvtPoll<ublox::cc_plugin::Message>,
        NavPvtPollImpl
    >
{
public:
    NavPvtPollImpl() = default;
    NavPvtPollImpl(const NavPvtPollImpl&) = delete;
    NavPvtPollImpl(NavPvtPollImpl&&) = delete;
    virtual ~NavPvtPollImpl() = default;
    NavPvtPollImpl& operator=(const NavPvtPollImpl&) = default;
    NavPvtPollImpl& operator=(NavPvtPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavPvtPoll::NavPvtPoll() : m_pImpl(new NavPvtPollImpl) {}
NavPvtPoll::~NavPvtPoll() = default;

NavPvtPoll& NavPvtPoll::operator=(const NavPvtPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavPvtPoll& NavPvtPoll::operator=(NavPvtPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavPvtPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavPvtPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavPvtPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavPvtPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavPvtPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavPvtPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavPvtPoll::MsgIdParamType NavPvtPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavPvtPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavPvtPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavPvtPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavPvtPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavPvtPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


