#include "CfgDatUser.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDatUser.h"
#include "cc_plugin/field/CfgDatD.h"
#include "cc_plugin/field/CfgDatFlat.h"
#include "cc_plugin/field/CfgDatMajA.h"
#include "cc_plugin/field/CfgDatRot.h"
#include "cc_plugin/field/CfgDatScale.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_majA()
{
    using Field = ublox::message::CfgDatUserFields<>::MajA;
    return cc_plugin::field::createProps_cfgDatMajA(Field::name());
    
}

static QVariantMap createProps_flat()
{
    using Field = ublox::message::CfgDatUserFields<>::Flat;
    return cc_plugin::field::createProps_cfgDatFlat(Field::name());
    
}

static QVariantMap createProps_dX()
{
    using Field = ublox::message::CfgDatUserFields<>::DX;
    return cc_plugin::field::createProps_cfgDatD(Field::name());
    
}

static QVariantMap createProps_dY()
{
    using Field = ublox::message::CfgDatUserFields<>::DY;
    return cc_plugin::field::createProps_cfgDatD(Field::name());
    
}

static QVariantMap createProps_dZ()
{
    using Field = ublox::message::CfgDatUserFields<>::DZ;
    return cc_plugin::field::createProps_cfgDatD(Field::name());
    
}

static QVariantMap createProps_rotX()
{
    using Field = ublox::message::CfgDatUserFields<>::RotX;
    return cc_plugin::field::createProps_cfgDatRot(Field::name());
    
}

static QVariantMap createProps_rotY()
{
    using Field = ublox::message::CfgDatUserFields<>::RotY;
    return cc_plugin::field::createProps_cfgDatRot(Field::name());
    
}

static QVariantMap createProps_rotZ()
{
    using Field = ublox::message::CfgDatUserFields<>::RotZ;
    return cc_plugin::field::createProps_cfgDatRot(Field::name());
    
}

static QVariantMap createProps_scale()
{
    using Field = ublox::message::CfgDatUserFields<>::Scale;
    return cc_plugin::field::createProps_cfgDatScale(Field::name());
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_majA());
    props.append(createProps_flat());
    props.append(createProps_dX());
    props.append(createProps_dY());
    props.append(createProps_dZ());
    props.append(createProps_rotX());
    props.append(createProps_rotY());
    props.append(createProps_rotZ());
    props.append(createProps_scale());
    return props;
}

} // namespace

class CfgDatUserImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDatUser<ublox::cc_plugin::Message>,
        CfgDatUserImpl
    >
{
public:
    CfgDatUserImpl() = default;
    CfgDatUserImpl(const CfgDatUserImpl&) = delete;
    CfgDatUserImpl(CfgDatUserImpl&&) = delete;
    virtual ~CfgDatUserImpl() = default;
    CfgDatUserImpl& operator=(const CfgDatUserImpl&) = default;
    CfgDatUserImpl& operator=(CfgDatUserImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDatUser::CfgDatUser() : m_pImpl(new CfgDatUserImpl) {}
CfgDatUser::~CfgDatUser() = default;

CfgDatUser& CfgDatUser::operator=(const CfgDatUser& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDatUser& CfgDatUser::operator=(CfgDatUser&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDatUser::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDatUser::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDatUser::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDatUser::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDatUser::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDatUser*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDatUser::MsgIdParamType CfgDatUser::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDatUser::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDatUser::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDatUser::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDatUser::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDatUser::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


