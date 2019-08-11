#include "NavTimeglo.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/NavTimeglo.h"
#include "cc_plugin/field/Itow.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_itow()
{
    using Field = ublox::message::NavTimegloFields<>::Itow;
    auto props = cc_plugin::field::createProps_itow(Field::name());
    return props;
    
}

static QVariantMap createProps_tOD()
{
    using Field = ublox::message::NavTimegloFields<>::TOD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_fTOD()
{
    using Field = ublox::message::NavTimegloFields<>::FTOD;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_nt()
{
    using Field = ublox::message::NavTimegloFields<>::Nt;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_n4()
{
    using Field = ublox::message::NavTimegloFields<>::N4;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_valid()
{
    using Field = ublox::message::NavTimegloFields<>::Valid;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(0U, "todValid")
            .add(1U, "dateValid")
            .asMap();
    
}

static QVariantMap createProps_tAcc()
{
    using Field = ublox::message::NavTimegloFields<>::TAcc;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_itow());
    props.append(createProps_tOD());
    props.append(createProps_fTOD());
    props.append(createProps_nt());
    props.append(createProps_n4());
    props.append(createProps_valid());
    props.append(createProps_tAcc());
    return props;
}

} // namespace

class NavTimegloImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::NavTimeglo<ublox::cc_plugin::Message>,
        NavTimegloImpl
    >
{
public:
    NavTimegloImpl() = default;
    NavTimegloImpl(const NavTimegloImpl&) = delete;
    NavTimegloImpl(NavTimegloImpl&&) = delete;
    virtual ~NavTimegloImpl() = default;
    NavTimegloImpl& operator=(const NavTimegloImpl&) = default;
    NavTimegloImpl& operator=(NavTimegloImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

NavTimeglo::NavTimeglo() : m_pImpl(new NavTimegloImpl) {}
NavTimeglo::~NavTimeglo() = default;

NavTimeglo& NavTimeglo::operator=(const NavTimeglo& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

NavTimeglo& NavTimeglo::operator=(NavTimeglo&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* NavTimeglo::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& NavTimeglo::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void NavTimeglo::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void NavTimeglo::resetImpl()
{
    m_pImpl->reset();
}

bool NavTimeglo::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const NavTimeglo*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

NavTimeglo::MsgIdParamType NavTimeglo::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus NavTimeglo::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus NavTimeglo::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool NavTimeglo::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t NavTimeglo::lengthImpl() const
{
    return m_pImpl->length();
}

bool NavTimeglo::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


