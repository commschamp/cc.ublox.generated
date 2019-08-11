#include "CfgEsrc.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgEsrc.h"
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

static QVariantMap createProps_version()
{
    using Field = ublox::message::CfgEsrcFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_numSources()
{
    using Field = ublox::message::CfgEsrcFields<>::NumSources;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgEsrcFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_extInt()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::ExtInt;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add("EXTINT0", 0)
                    .add("EXTINT1", 1)
                    .asMap();
            
        }
        
        static QVariantMap createProps_sourceType()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::SourceType;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add("None", 0)
                    .add("Frequency", 1)
                    .add("Time", 2)
                    .add("ExternalOsc", 3)
                    .asMap();
            
        }
        
        static QVariantMap createProps_flags()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::Flags;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(0U, "polarity")
                    .add(1U, "gnssUtc")
                    .asMap();
            
        }
        
        static QVariantMap createProps_freq()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::Freq;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(2U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved2()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_plugin::field::createProps_res4(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_withTemp()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::WithTemp;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(8U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_withAge()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::WithAge;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(8U)
                    .asMap();
            
        }
        
        static QVariantMap createProps_timeToTemp()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::TimeToTemp;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_maxDevLifeTime()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::MaxDevLifeTime;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_offset()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::Offset;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_offsetUncertainty()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::OffsetUncertainty;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_jitter()
        {
            using Field = ublox::message::CfgEsrcFields<>::ListMembers::ElementMembers::Jitter;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::CfgEsrcFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_extInt())
                .add(ElementMembers::createProps_sourceType())
                .add(ElementMembers::createProps_flags())
                .add(ElementMembers::createProps_freq())
                .add(ElementMembers::createProps_reserved2())
                .add(ElementMembers::createProps_withTemp())
                .add(ElementMembers::createProps_withAge())
                .add(ElementMembers::createProps_timeToTemp())
                .add(ElementMembers::createProps_maxDevLifeTime())
                .add(ElementMembers::createProps_offset())
                .add(ElementMembers::createProps_offsetUncertainty())
                .add(ElementMembers::createProps_jitter())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::CfgEsrcFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_numSources());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class CfgEsrcImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgEsrc<ublox::cc_plugin::Message>,
        CfgEsrcImpl
    >
{
public:
    CfgEsrcImpl() = default;
    CfgEsrcImpl(const CfgEsrcImpl&) = delete;
    CfgEsrcImpl(CfgEsrcImpl&&) = delete;
    virtual ~CfgEsrcImpl() = default;
    CfgEsrcImpl& operator=(const CfgEsrcImpl&) = default;
    CfgEsrcImpl& operator=(CfgEsrcImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgEsrc::CfgEsrc() : m_pImpl(new CfgEsrcImpl) {}
CfgEsrc::~CfgEsrc() = default;

CfgEsrc& CfgEsrc::operator=(const CfgEsrc& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgEsrc& CfgEsrc::operator=(CfgEsrc&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgEsrc::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgEsrc::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgEsrc::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgEsrc::resetImpl()
{
    m_pImpl->reset();
}

bool CfgEsrc::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgEsrc*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgEsrc::MsgIdParamType CfgEsrc::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgEsrc::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgEsrc::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgEsrc::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgEsrc::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgEsrc::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


