#include "MgaQzssAlm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaQzssAlm.h"
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

static QVariantMap createProps_type()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svHealth()
{
    using Field = ublox::message::MgaQzssAlmFields<>::SvHealth;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_e()
{
    using Field = ublox::message::MgaQzssAlmFields<>::E;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_almWNa()
{
    using Field = ublox::message::MgaQzssAlmFields<>::AlmWNa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_toa()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Toa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaI()
{
    using Field = ublox::message::MgaQzssAlmFields<>::DeltaI;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omegaDot()
{
    using Field = ublox::message::MgaQzssAlmFields<>::OmegaDot;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_sqrtA()
{
    using Field = ublox::message::MgaQzssAlmFields<>::SqrtA;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega0()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Omega0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Omega;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m0()
{
    using Field = ublox::message::MgaQzssAlmFields<>::M0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af0()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Af0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af1()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Af1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserve1()
{
    using Field = ublox::message::MgaQzssAlmFields<>::Reserve1;
    auto props = cc_plugin::field::createProps_res4(Field::name());
    return props;
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_svid());
    props.append(createProps_svHealth());
    props.append(createProps_e());
    props.append(createProps_almWNa());
    props.append(createProps_toa());
    props.append(createProps_deltaI());
    props.append(createProps_omegaDot());
    props.append(createProps_sqrtA());
    props.append(createProps_omega0());
    props.append(createProps_omega());
    props.append(createProps_m0());
    props.append(createProps_af0());
    props.append(createProps_af1());
    props.append(createProps_reserve1());
    return props;
}

} // namespace

class MgaQzssAlmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaQzssAlm<ublox::cc_plugin::Message>,
        MgaQzssAlmImpl
    >
{
public:
    MgaQzssAlmImpl() = default;
    MgaQzssAlmImpl(const MgaQzssAlmImpl&) = delete;
    MgaQzssAlmImpl(MgaQzssAlmImpl&&) = delete;
    virtual ~MgaQzssAlmImpl() = default;
    MgaQzssAlmImpl& operator=(const MgaQzssAlmImpl&) = default;
    MgaQzssAlmImpl& operator=(MgaQzssAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaQzssAlm::MgaQzssAlm() : m_pImpl(new MgaQzssAlmImpl) {}
MgaQzssAlm::~MgaQzssAlm() = default;

MgaQzssAlm& MgaQzssAlm::operator=(const MgaQzssAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaQzssAlm& MgaQzssAlm::operator=(MgaQzssAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaQzssAlm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaQzssAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaQzssAlm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaQzssAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaQzssAlm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaQzssAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaQzssAlm::MsgIdParamType MgaQzssAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaQzssAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaQzssAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaQzssAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaQzssAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaQzssAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


