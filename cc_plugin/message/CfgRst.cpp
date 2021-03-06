// Generated by commsdsl2comms v3.6.2

#include "CfgRst.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgRst.h"
#include "cc_plugin/field/Res1.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_navBbrMask()
{
    using Field = ublox::message::CfgRstFields<>::NavBbrMask;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "eph")
            .add(1U, "alm")
            .add(2U, "health")
            .add(3U, "klob")
            .add(4U, "pos")
            .add(5U, "clkd")
            .add(6U, "osc")
            .add(7U, "utc")
            .add(8U, "rtc")
            .add(15U, "aop")
            .asMap();
    
}

static QVariantMap createProps_resetMode()
{
    using Field = ublox::message::CfgRstFields<>::ResetMode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add("Hardware", 0)
            .add("Software", 1)
            .add("Software (GNSS only)", 2)
            .add("Hardware (after shutdown)", 4)
            .add("GNSS stop", 8)
            .add("GNSS start", 9)
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgRstFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_navBbrMask());
    props.append(createProps_resetMode());
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class CfgRstImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgRst<ublox::cc_plugin::Message>,
        CfgRstImpl
    >
{
public:
    CfgRstImpl() = default;
    CfgRstImpl(const CfgRstImpl&) = delete;
    CfgRstImpl(CfgRstImpl&&) = delete;
    virtual ~CfgRstImpl() = default;
    CfgRstImpl& operator=(const CfgRstImpl&) = default;
    CfgRstImpl& operator=(CfgRstImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRst::CfgRst() : m_pImpl(new CfgRstImpl) {}
CfgRst::~CfgRst() = default;

CfgRst& CfgRst::operator=(const CfgRst& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRst& CfgRst::operator=(CfgRst&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgRst::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRst::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRst::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRst::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRst::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRst*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRst::MsgIdParamType CfgRst::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRst::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRst::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRst::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRst::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRst::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


