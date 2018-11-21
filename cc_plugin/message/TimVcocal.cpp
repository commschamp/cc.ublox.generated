#include "TimVcocal.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/TimVcocal.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::TimVcocalFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::TimVcocalFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_oscId()
{
    using Field = ublox::message::TimVcocalFields<>::OscId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Internal", 0)
            .add("External", 1)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::TimVcocalFields<>::Reserved1;
    return cc_plugin::field::createProps_res3(Field::name());
    
}

static QVariantMap createProps_gainUncertainty()
{
    using Field = ublox::message::TimVcocalFields<>::GainUncertainty;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(9U)
            .asMap();
    
}

static QVariantMap createProps_gainVco()
{
    using Field = ublox::message::TimVcocalFields<>::GainVco;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .scaledDecimals(9U)
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_oscId());
    props.append(createProps_reserved1());
    props.append(createProps_gainUncertainty());
    props.append(createProps_gainVco());
    return props;
}

} // namespace

class TimVcocalImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::TimVcocal<ublox::cc_plugin::Message>,
        TimVcocalImpl
    >
{
public:
    TimVcocalImpl() = default;
    TimVcocalImpl(const TimVcocalImpl&) = delete;
    TimVcocalImpl(TimVcocalImpl&&) = delete;
    virtual ~TimVcocalImpl() = default;
    TimVcocalImpl& operator=(const TimVcocalImpl&) = default;
    TimVcocalImpl& operator=(TimVcocalImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

TimVcocal::TimVcocal() : m_pImpl(new TimVcocalImpl) {}
TimVcocal::~TimVcocal() = default;

TimVcocal& TimVcocal::operator=(const TimVcocal& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

TimVcocal& TimVcocal::operator=(TimVcocal&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* TimVcocal::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& TimVcocal::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void TimVcocal::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void TimVcocal::resetImpl()
{
    m_pImpl->reset();
}

bool TimVcocal::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const TimVcocal*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

TimVcocal::MsgIdParamType TimVcocal::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus TimVcocal::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus TimVcocal::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool TimVcocal::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t TimVcocal::lengthImpl() const
{
    return m_pImpl->length();
}

bool TimVcocal::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


