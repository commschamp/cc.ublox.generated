#include "NavTimegloPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimegloPoll.h"
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

class NavTimegloPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimegloPoll<ublox::cc_plugin::Message>,
        NavTimegloPollImpl
    >
{
public:
    NavTimegloPollImpl() = default;
    NavTimegloPollImpl(const NavTimegloPollImpl&) = delete;
    NavTimegloPollImpl(NavTimegloPollImpl&&) = delete;
    virtual ~NavTimegloPollImpl() = default;
    NavTimegloPollImpl& operator=(const NavTimegloPollImpl&) = default;
    NavTimegloPollImpl& operator=(NavTimegloPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimegloPoll::NavTimegloPoll() : m_pImpl(new NavTimegloPollImpl) {}
NavTimegloPoll::~NavTimegloPoll() = default;

NavTimegloPoll& NavTimegloPoll::operator=(const NavTimegloPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimegloPoll& NavTimegloPoll::operator=(NavTimegloPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimegloPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimegloPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimegloPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimegloPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimegloPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimegloPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimegloPoll::MsgIdParamType NavTimegloPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimegloPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimegloPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimegloPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimegloPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimegloPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


