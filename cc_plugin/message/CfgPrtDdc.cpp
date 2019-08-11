#include "CfgPrtDdc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgPrtDdc.h"
#include "cc_plugin/field/CfgPrtFlags.h"
#include "cc_plugin/field/CfgPrtInProtoMask.h"
#include "cc_plugin/field/CfgPrtOutProtoMask.h"
#include "cc_plugin/field/CfgPrtTxReady.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res4.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_portId()
{
    using Field = ublox::message::CfgPrtDdcFields<>::PortId;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgPrtDdcFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res1(Field::name());
    return props;
    
}

static QVariantMap createProps_txReady()
{
    using Field = ublox::message::CfgPrtDdcFields<>::TxReady;
    auto props = cc_plugin::field::createProps_cfgPrtTxReady(Field::name());
    return props;
    
}

struct ModeMembers
{
    static QVariantMap createProps_reservedLow()
    {
        using Field = ublox::message::CfgPrtDdcFields<>::ModeMembers::ReservedLow;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_slaveAddr()
    {
        using Field = ublox::message::CfgPrtDdcFields<>::ModeMembers::SlaveAddr;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .asMap();
        
    }
    
    static QVariantMap createProps_reservedHigh()
    {
        using Field = ublox::message::CfgPrtDdcFields<>::ModeMembers::ReservedHigh;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .hidden()
                .asMap();
        
    }
    
};

static QVariantMap createProps_mode()
{
    using Field = ublox::message::CfgPrtDdcFields<>::Mode;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ModeMembers::createProps_reservedLow())
            .add(ModeMembers::createProps_slaveAddr())
            .add(ModeMembers::createProps_reservedHigh())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::CfgPrtDdcFields<>::Reserved2;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

static QVariantMap createProps_inProtoMask()
{
    using Field = ublox::message::CfgPrtDdcFields<>::InProtoMask;
    auto props = cc_plugin::field::createProps_cfgPrtInProtoMask(Field::name());
    return props;
    
}

static QVariantMap createProps_outProtoMask()
{
    using Field = ublox::message::CfgPrtDdcFields<>::OutProtoMask;
    auto props = cc_plugin::field::createProps_cfgPrtOutProtoMask(Field::name());
    return props;
    
}

static QVariantMap createProps_cfgPrtFlags()
{
    using Field = ublox::message::CfgPrtDdcFields<>::CfgPrtFlags;
    auto props = cc_plugin::field::createProps_cfgPrtFlags(Field::name());
    return props;
    
}

static QVariantMap createProps_reserved3()
{
    using Field = ublox::message::CfgPrtDdcFields<>::Reserved3;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_portId());
    props.append(createProps_reserved1());
    props.append(createProps_txReady());
    props.append(createProps_mode());
    props.append(createProps_reserved2());
    props.append(createProps_inProtoMask());
    props.append(createProps_outProtoMask());
    props.append(createProps_cfgPrtFlags());
    props.append(createProps_reserved3());
    return props;
}

} // namespace

class CfgPrtDdcImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgPrtDdc<ublox::cc_plugin::Message>,
        CfgPrtDdcImpl
    >
{
public:
    CfgPrtDdcImpl() = default;
    CfgPrtDdcImpl(const CfgPrtDdcImpl&) = delete;
    CfgPrtDdcImpl(CfgPrtDdcImpl&&) = delete;
    virtual ~CfgPrtDdcImpl() = default;
    CfgPrtDdcImpl& operator=(const CfgPrtDdcImpl&) = default;
    CfgPrtDdcImpl& operator=(CfgPrtDdcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgPrtDdc::CfgPrtDdc() : m_pImpl(new CfgPrtDdcImpl) {}
CfgPrtDdc::~CfgPrtDdc() = default;

CfgPrtDdc& CfgPrtDdc::operator=(const CfgPrtDdc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgPrtDdc& CfgPrtDdc::operator=(CfgPrtDdc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgPrtDdc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgPrtDdc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgPrtDdc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgPrtDdc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgPrtDdc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgPrtDdc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgPrtDdc::MsgIdParamType CfgPrtDdc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgPrtDdc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgPrtDdc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgPrtDdc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgPrtDdc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgPrtDdc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


