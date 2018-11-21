#include "MonGnssPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MonGnssPoll.h"
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

class MonGnssPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MonGnssPoll<ublox::cc_plugin::Message>,
        MonGnssPollImpl
    >
{
public:
    MonGnssPollImpl() = default;
    MonGnssPollImpl(const MonGnssPollImpl&) = delete;
    MonGnssPollImpl(MonGnssPollImpl&&) = delete;
    virtual ~MonGnssPollImpl() = default;
    MonGnssPollImpl& operator=(const MonGnssPollImpl&) = default;
    MonGnssPollImpl& operator=(MonGnssPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MonGnssPoll::MonGnssPoll() : m_pImpl(new MonGnssPollImpl) {}
MonGnssPoll::~MonGnssPoll() = default;

MonGnssPoll& MonGnssPoll::operator=(const MonGnssPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MonGnssPoll& MonGnssPoll::operator=(MonGnssPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MonGnssPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MonGnssPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MonGnssPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MonGnssPoll::resetImpl()
{
    m_pImpl->reset();
}

bool MonGnssPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MonGnssPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MonGnssPoll::MsgIdParamType MonGnssPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MonGnssPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MonGnssPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MonGnssPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MonGnssPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool MonGnssPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


