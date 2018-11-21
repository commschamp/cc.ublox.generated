#include "LogRetrievepos.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/LogRetrievepos.h"
#include "cc_plugin/field/Day.h"
#include "cc_plugin/field/GpsFix.h"
#include "cc_plugin/field/HAcc.h"
#include "cc_plugin/field/HMSL.h"
#include "cc_plugin/field/Heading.h"
#include "cc_plugin/field/Hour.h"
#include "cc_plugin/field/Lat.h"
#include "cc_plugin/field/Lon.h"
#include "cc_plugin/field/Min.h"
#include "cc_plugin/field/Month.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Sec.h"
#include "cc_plugin/field/Year.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_entryIndex()
{
    using Field = ublox::message::LogRetrieveposFields<>::EntryIndex;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_lon()
{
    using Field = ublox::message::LogRetrieveposFields<>::Lon;
    return cc_plugin::field::createProps_lon(Field::name());
    
}

static QVariantMap createProps_lat()
{
    using Field = ublox::message::LogRetrieveposFields<>::Lat;
    return cc_plugin::field::createProps_lat(Field::name());
    
}

static QVariantMap createProps_hMSL()
{
    using Field = ublox::message::LogRetrieveposFields<>::HMSL;
    return cc_plugin::field::createProps_hMSL(Field::name());
    
}

static QVariantMap createProps_hAcc()
{
    using Field = ublox::message::LogRetrieveposFields<>::HAcc;
    return cc_plugin::field::createProps_hAcc(Field::name());
    
}

static QVariantMap createProps_gSpeed()
{
    using Field = ublox::message::LogRetrieveposFields<>::GSpeed;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_heading()
{
    using Field = ublox::message::LogRetrieveposFields<>::Heading;
    return cc_plugin::field::createProps_heading(Field::name());
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::LogRetrieveposFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fixType()
{
    using Field = ublox::message::LogRetrieveposFields<>::FixType;
    return cc_plugin::field::createProps_gpsFix(Field::name());
    
}

static QVariantMap createProps_year()
{
    using Field = ublox::message::LogRetrieveposFields<>::Year;
    return cc_plugin::field::createProps_year(Field::name());
    
}

static QVariantMap createProps_month()
{
    using Field = ublox::message::LogRetrieveposFields<>::Month;
    return cc_plugin::field::createProps_month(Field::name());
    
}

static QVariantMap createProps_day()
{
    using Field = ublox::message::LogRetrieveposFields<>::Day;
    return cc_plugin::field::createProps_day(Field::name());
    
}

static QVariantMap createProps_hour()
{
    using Field = ublox::message::LogRetrieveposFields<>::Hour;
    return cc_plugin::field::createProps_hour(Field::name());
    
}

static QVariantMap createProps_minute()
{
    using Field = ublox::message::LogRetrieveposFields<>::Minute;
    return cc_plugin::field::createProps_min(Field::name());
    
}

static QVariantMap createProps_second()
{
    using Field = ublox::message::LogRetrieveposFields<>::Second;
    return cc_plugin::field::createProps_sec(Field::name());
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::LogRetrieveposFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_numSV()
{
    using Field = ublox::message::LogRetrieveposFields<>::NumSV;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::LogRetrieveposFields<>::Reserved2;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_entryIndex());
    props.append(createProps_lon());
    props.append(createProps_lat());
    props.append(createProps_hMSL());
    props.append(createProps_hAcc());
    props.append(createProps_gSpeed());
    props.append(createProps_heading());
    props.append(createProps_version());
    props.append(createProps_fixType());
    props.append(createProps_year());
    props.append(createProps_month());
    props.append(createProps_day());
    props.append(createProps_hour());
    props.append(createProps_minute());
    props.append(createProps_second());
    props.append(createProps_reserved1());
    props.append(createProps_numSV());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class LogRetrieveposImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::LogRetrievepos<ublox::cc_plugin::Message>,
        LogRetrieveposImpl
    >
{
public:
    LogRetrieveposImpl() = default;
    LogRetrieveposImpl(const LogRetrieveposImpl&) = delete;
    LogRetrieveposImpl(LogRetrieveposImpl&&) = delete;
    virtual ~LogRetrieveposImpl() = default;
    LogRetrieveposImpl& operator=(const LogRetrieveposImpl&) = default;
    LogRetrieveposImpl& operator=(LogRetrieveposImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

LogRetrievepos::LogRetrievepos() : m_pImpl(new LogRetrieveposImpl) {}
LogRetrievepos::~LogRetrievepos() = default;

LogRetrievepos& LogRetrievepos::operator=(const LogRetrievepos& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

LogRetrievepos& LogRetrievepos::operator=(LogRetrievepos&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* LogRetrievepos::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& LogRetrievepos::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void LogRetrievepos::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void LogRetrievepos::resetImpl()
{
    m_pImpl->reset();
}

bool LogRetrievepos::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const LogRetrievepos*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

LogRetrievepos::MsgIdParamType LogRetrievepos::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus LogRetrievepos::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus LogRetrievepos::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool LogRetrievepos::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t LogRetrievepos::lengthImpl() const
{
    return m_pImpl->length();
}

bool LogRetrievepos::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


