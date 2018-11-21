#include "UpdSosAck.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/UpdSosAck.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_cmd()
{
    using Field = ublox::message::UpdSosAckFields<>::Cmd;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::UpdSosAckFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_response()
{
    using Field = ublox::message::UpdSosAckFields<>::Response;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("NotAcknowledged", 0)
            .add("Acknowledged", 1)
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::UpdSosAckFields<>::Reserved2;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_cmd());
    props.append(createProps_reserved1());
    props.append(createProps_response());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class UpdSosAckImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::UpdSosAck<ublox::cc_plugin::Message>,
        UpdSosAckImpl
    >
{
public:
    UpdSosAckImpl() = default;
    UpdSosAckImpl(const UpdSosAckImpl&) = delete;
    UpdSosAckImpl(UpdSosAckImpl&&) = delete;
    virtual ~UpdSosAckImpl() = default;
    UpdSosAckImpl& operator=(const UpdSosAckImpl&) = default;
    UpdSosAckImpl& operator=(UpdSosAckImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

UpdSosAck::UpdSosAck() : m_pImpl(new UpdSosAckImpl) {}
UpdSosAck::~UpdSosAck() = default;

UpdSosAck& UpdSosAck::operator=(const UpdSosAck& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

UpdSosAck& UpdSosAck::operator=(UpdSosAck&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* UpdSosAck::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& UpdSosAck::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void UpdSosAck::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void UpdSosAck::resetImpl()
{
    m_pImpl->reset();
}

bool UpdSosAck::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const UpdSosAck*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

UpdSosAck::MsgIdParamType UpdSosAck::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus UpdSosAck::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus UpdSosAck::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool UpdSosAck::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t UpdSosAck::lengthImpl() const
{
    return m_pImpl->length();
}

bool UpdSosAck::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


