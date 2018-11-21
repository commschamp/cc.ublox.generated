#include "NavOrbPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavOrbPoll.h"
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

class NavOrbPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavOrbPoll<ublox::cc_plugin::Message>,
        NavOrbPollImpl
    >
{
public:
    NavOrbPollImpl() = default;
    NavOrbPollImpl(const NavOrbPollImpl&) = delete;
    NavOrbPollImpl(NavOrbPollImpl&&) = delete;
    virtual ~NavOrbPollImpl() = default;
    NavOrbPollImpl& operator=(const NavOrbPollImpl&) = default;
    NavOrbPollImpl& operator=(NavOrbPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavOrbPoll::NavOrbPoll() : m_pImpl(new NavOrbPollImpl) {}
NavOrbPoll::~NavOrbPoll() = default;

NavOrbPoll& NavOrbPoll::operator=(const NavOrbPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOrbPoll& NavOrbPoll::operator=(NavOrbPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavOrbPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavOrbPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavOrbPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavOrbPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavOrbPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavOrbPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavOrbPoll::MsgIdParamType NavOrbPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavOrbPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavOrbPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavOrbPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavOrbPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavOrbPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


