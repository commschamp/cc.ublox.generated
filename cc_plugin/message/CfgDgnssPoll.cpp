#include "CfgDgnssPoll.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/CfgDgnssPoll.h"
namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

QVariantList createProps()
{
    QVariantList props;
    return props;
}

} // namespace

class CfgDgnssPollImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::CfgDgnssPoll<ublox::cc_plugin::Message>,
        CfgDgnssPollImpl
    >
{
public:
    CfgDgnssPollImpl() = default;
    CfgDgnssPollImpl(const CfgDgnssPollImpl&) = delete;
    CfgDgnssPollImpl(CfgDgnssPollImpl&&) = delete;
    virtual ~CfgDgnssPollImpl() = default;
    CfgDgnssPollImpl& operator=(const CfgDgnssPollImpl&) = default;
    CfgDgnssPollImpl& operator=(CfgDgnssPollImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDgnssPoll::CfgDgnssPoll() : m_pImpl(new CfgDgnssPollImpl) {}
CfgDgnssPoll::~CfgDgnssPoll() = default;

CfgDgnssPoll& CfgDgnssPoll::operator=(const CfgDgnssPoll& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDgnssPoll& CfgDgnssPoll::operator=(CfgDgnssPoll&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* CfgDgnssPoll::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDgnssPoll::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDgnssPoll::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDgnssPoll::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDgnssPoll::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDgnssPoll*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDgnssPoll::MsgIdParamType CfgDgnssPoll::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDgnssPoll::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDgnssPoll::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDgnssPoll::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDgnssPoll::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDgnssPoll::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


