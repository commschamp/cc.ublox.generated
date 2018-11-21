#include "NavOdoPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavOdoPoll.h"
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

class NavOdoPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavOdoPoll<ublox::cc_plugin::Message>,
        NavOdoPollImpl
    >
{
public:
    NavOdoPollImpl() = default;
    NavOdoPollImpl(const NavOdoPollImpl&) = delete;
    NavOdoPollImpl(NavOdoPollImpl&&) = delete;
    virtual ~NavOdoPollImpl() = default;
    NavOdoPollImpl& operator=(const NavOdoPollImpl&) = default;
    NavOdoPollImpl& operator=(NavOdoPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavOdoPoll::NavOdoPoll() : m_pImpl(new NavOdoPollImpl) {}
NavOdoPoll::~NavOdoPoll() = default;

NavOdoPoll& NavOdoPoll::operator=(const NavOdoPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavOdoPoll& NavOdoPoll::operator=(NavOdoPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavOdoPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavOdoPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavOdoPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavOdoPoll::resetImpl()
{
    m_pImpl->reset();
}

bool NavOdoPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavOdoPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavOdoPoll::MsgIdParamType NavOdoPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavOdoPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavOdoPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavOdoPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavOdoPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavOdoPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


