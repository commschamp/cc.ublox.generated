#include "MgaGalAlm.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/MgaGalAlm.h"
#include "cc_plugin/field/Res1.h"
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
    using Field = ublox::message::MgaGalAlmFields<>::Type;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::MgaGalAlmFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_svid()
{
    using Field = ublox::message::MgaGalAlmFields<>::Svid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::MgaGalAlmFields<>::Reserved1;
    return cc_plugin::field::createProps_res1(Field::name());
    
}

static QVariantMap createProps_ioda()
{
    using Field = ublox::message::MgaGalAlmFields<>::Ioda;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_almWNa()
{
    using Field = ublox::message::MgaGalAlmFields<>::AlmWNa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_toa()
{
    using Field = ublox::message::MgaGalAlmFields<>::Toa;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaSqrtA()
{
    using Field = ublox::message::MgaGalAlmFields<>::DeltaSqrtA;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_e()
{
    using Field = ublox::message::MgaGalAlmFields<>::E;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_deltaI()
{
    using Field = ublox::message::MgaGalAlmFields<>::DeltaI;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega0()
{
    using Field = ublox::message::MgaGalAlmFields<>::Omega0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omegaDot()
{
    using Field = ublox::message::MgaGalAlmFields<>::OmegaDot;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_omega()
{
    using Field = ublox::message::MgaGalAlmFields<>::Omega;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_m0()
{
    using Field = ublox::message::MgaGalAlmFields<>::M0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af0()
{
    using Field = ublox::message::MgaGalAlmFields<>::Af0;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_af1()
{
    using Field = ublox::message::MgaGalAlmFields<>::Af1;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_healthE1B()
{
    using Field = ublox::message::MgaGalAlmFields<>::HealthE1B;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_healthE5b()
{
    using Field = ublox::message::MgaGalAlmFields<>::HealthE5b;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved2()
{
    using Field = ublox::message::MgaGalAlmFields<>::Reserved2;
    return cc_plugin::field::createProps_res4(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_type());
    props.append(createProps_version());
    props.append(createProps_svid());
    props.append(createProps_reserved1());
    props.append(createProps_ioda());
    props.append(createProps_almWNa());
    props.append(createProps_toa());
    props.append(createProps_deltaSqrtA());
    props.append(createProps_e());
    props.append(createProps_deltaI());
    props.append(createProps_omega0());
    props.append(createProps_omegaDot());
    props.append(createProps_omega());
    props.append(createProps_m0());
    props.append(createProps_af0());
    props.append(createProps_af1());
    props.append(createProps_healthE1B());
    props.append(createProps_healthE5b());
    props.append(createProps_reserved2());
    return props;
}

} // namespace

class MgaGalAlmImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::MgaGalAlm<ublox::cc_plugin::Message>,
        MgaGalAlmImpl
    >
{
public:
    MgaGalAlmImpl() = default;
    MgaGalAlmImpl(const MgaGalAlmImpl&) = delete;
    MgaGalAlmImpl(MgaGalAlmImpl&&) = delete;
    virtual ~MgaGalAlmImpl() = default;
    MgaGalAlmImpl& operator=(const MgaGalAlmImpl&) = default;
    MgaGalAlmImpl& operator=(MgaGalAlmImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

MgaGalAlm::MgaGalAlm() : m_pImpl(new MgaGalAlmImpl) {}
MgaGalAlm::~MgaGalAlm() = default;

MgaGalAlm& MgaGalAlm::operator=(const MgaGalAlm& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

MgaGalAlm& MgaGalAlm::operator=(MgaGalAlm&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* MgaGalAlm::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& MgaGalAlm::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void MgaGalAlm::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void MgaGalAlm::resetImpl()
{
    m_pImpl->reset();
}

bool MgaGalAlm::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const MgaGalAlm*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

MgaGalAlm::MsgIdParamType MgaGalAlm::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus MgaGalAlm::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus MgaGalAlm::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool MgaGalAlm::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t MgaGalAlm::lengthImpl() const
{
    return m_pImpl->length();
}

bool MgaGalAlm::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


