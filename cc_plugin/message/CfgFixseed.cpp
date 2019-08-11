#include "CfgFixseed.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgFixseed.h"
#include "cc_plugin/field/MsgId.h"
#include "cc_plugin/field/Res2.h"

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
    using Field = ublox::message::CfgFixseedFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_length()
{
    using Field = ublox::message::CfgFixseedFields<>::Length;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::CfgFixseedFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

static QVariantMap createProps_seedHi()
{
    using Field = ublox::message::CfgFixseedFields<>::SeedHi;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_seedLo()
{
    using Field = ublox::message::CfgFixseedFields<>::SeedLo;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_list()
{
    using Field = ublox::message::CfgFixseedFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(cc_plugin::field::createProps_msgId(Field::ValueType::value_type::name()))
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version());
    props.append(createProps_length());
    props.append(createProps_reserved1());
    props.append(createProps_seedHi());
    props.append(createProps_seedLo());
    props.append(createProps_list());
    return props;
}

} // namespace

class CfgFixseedImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgFixseed<ublox::cc_plugin::Message>,
        CfgFixseedImpl
    >
{
public:
    CfgFixseedImpl() = default;
    CfgFixseedImpl(const CfgFixseedImpl&) = delete;
    CfgFixseedImpl(CfgFixseedImpl&&) = delete;
    virtual ~CfgFixseedImpl() = default;
    CfgFixseedImpl& operator=(const CfgFixseedImpl&) = default;
    CfgFixseedImpl& operator=(CfgFixseedImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgFixseed::CfgFixseed() : m_pImpl(new CfgFixseedImpl) {}
CfgFixseed::~CfgFixseed() = default;

CfgFixseed& CfgFixseed::operator=(const CfgFixseed& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgFixseed& CfgFixseed::operator=(CfgFixseed&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgFixseed::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgFixseed::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgFixseed::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgFixseed::resetImpl()
{
    m_pImpl->reset();
}

bool CfgFixseed::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgFixseed*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgFixseed::MsgIdParamType CfgFixseed::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgFixseed::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgFixseed::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgFixseed::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgFixseed::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgFixseed::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


