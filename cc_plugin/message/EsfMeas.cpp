#include "EsfMeas.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/EsfMeas.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_timeTag()
{
    using Field = ublox::message::EsfMeasFields<>::TimeTag;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct FlagsMembers
{
    static QVariantMap createProps_timeMarkSent()
    {
        using Field = ublox::message::EsfMeasFields<>::FlagsMembers::TimeMarkSent;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add("None", 0)
                .add("Ext0", 1)
                .add("Ext1", 2)
                .asMap();
        
    }
    
    static QVariantMap createProps_bits()
    {
        using Field = ublox::message::EsfMeasFields<>::FlagsMembers::Bits;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden()
                .add(0U, "timeMarkEdge")
                .add(1U, "calibTtagValid")
                .asMap();
        
    }
    
};

static QVariantMap createProps_flags()
{
    using Field = ublox::message::EsfMeasFields<>::Flags;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(FlagsMembers::createProps_timeMarkSent())
            .add(FlagsMembers::createProps_bits())
            .asMap();
    
}

static QVariantMap createProps_id()
{
    using Field = ublox::message::EsfMeasFields<>::Id;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_dataField()
        {
            using Field = ublox::message::EsfMeasFields<>::ListMembers::ElementMembers::DataField;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        static QVariantMap createProps_dataType()
        {
            using Field = ublox::message::EsfMeasFields<>::ListMembers::ElementMembers::DataType;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved()
        {
            using Field = ublox::message::EsfMeasFields<>::ListMembers::ElementMembers::Reserved;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .serialisedHidden()
                    .hidden()
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::EsfMeasFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_dataField())
                .add(ElementMembers::createProps_dataType())
                .add(ElementMembers::createProps_reserved())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::EsfMeasFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

struct CalibTtagMembers
{
    static QVariantMap createProps_calibTtag()
    {
        using Field = ublox::message::EsfMeasFields<>::CalibTtagMembers::CalibTtag;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .asMap();
        
    }
    
};

static QVariantMap createProps_calibTtag()
{
    using Field = ublox::message::EsfMeasFields<>::CalibTtag;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .uncheckable()
            .field(CalibTtagMembers::createProps_calibTtag())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_timeTag());
    props.append(createProps_flags());
    props.append(createProps_id());
    props.append(createProps_list());
    props.append(createProps_calibTtag());
    return props;
}

} // namespace

class EsfMeasImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::EsfMeas<ublox::cc_plugin::Message>,
        EsfMeasImpl
    >
{
public:
    EsfMeasImpl() = default;
    EsfMeasImpl(const EsfMeasImpl&) = delete;
    EsfMeasImpl(EsfMeasImpl&&) = delete;
    virtual ~EsfMeasImpl() = default;
    EsfMeasImpl& operator=(const EsfMeasImpl&) = default;
    EsfMeasImpl& operator=(EsfMeasImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

EsfMeas::EsfMeas() : m_pImpl(new EsfMeasImpl) {}
EsfMeas::~EsfMeas() = default;

EsfMeas& EsfMeas::operator=(const EsfMeas& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

EsfMeas& EsfMeas::operator=(EsfMeas&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* EsfMeas::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& EsfMeas::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void EsfMeas::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void EsfMeas::resetImpl()
{
    m_pImpl->reset();
}

bool EsfMeas::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const EsfMeas*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

EsfMeas::MsgIdParamType EsfMeas::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus EsfMeas::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus EsfMeas::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool EsfMeas::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t EsfMeas::lengthImpl() const
{
    return m_pImpl->length();
}

bool EsfMeas::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


