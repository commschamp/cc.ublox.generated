#include "MgaGpsAlm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGpsAlm.h"
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
    using Field = ublox::message::MgaGpsAlmFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svHealth()
{
    using Field = ublox::message::MgaGpsAlmFields<>::SvHealth;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_e()
{
    using Field = ublox::message::MgaGpsAlmFields<>::E;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_almWNa()
{
    using Field = ublox::message::MgaGpsAlmFields<>::AlmWNa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_toa()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Toa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaI()
{
    using Field = ublox::message::MgaGpsAlmFields<>::DeltaI;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omegaDot()
{
    using Field = ublox::message::MgaGpsAlmFields<>::OmegaDot;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_sqrtA()
{
    using Field = ublox::message::MgaGpsAlmFields<>::SqrtA;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega0()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Omega0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Omega;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m0()
{
    using Field = ublox::message::MgaGpsAlmFields<>::M0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af0()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Af0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af1()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Af1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGpsAlmFields<>::Reserved1;
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
    props.append(createProps_reserved1());
    return props;
}

} // namespace

class MgaGpsAlmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGpsAlm<ublox::cc_plugin::Message>,
        MgaGpsAlmImpl
    >
{
public:
    MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl(const MgaGpsAlmImpl&) = delete;
    MgaGpsAlmImpl(MgaGpsAlmImpl&&) = delete;
    virtual ~MgaGpsAlmImpl() = default;
    MgaGpsAlmImpl& operator=(const MgaGpsAlmImpl&) = default;
    MgaGpsAlmImpl& operator=(MgaGpsAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGpsAlm::MgaGpsAlm() : m_pImpl(new MgaGpsAlmImpl) {}
MgaGpsAlm::~MgaGpsAlm() = default;

MgaGpsAlm& MgaGpsAlm::operator=(const MgaGpsAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGpsAlm& MgaGpsAlm::operator=(MgaGpsAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGpsAlm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGpsAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGpsAlm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGpsAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGpsAlm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGpsAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGpsAlm::MsgIdParamType MgaGpsAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGpsAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGpsAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGpsAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGpsAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGpsAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


