// Generated by commsdsl2comms v3.6.2

#include "UbloxProtocol.h"

#include <cassert>
#include "comms_champion/ProtocolBase.h"
#include "cc_plugin/frame/UbloxFrame.h"
#include "cc_plugin/frame/UbloxFrameTransportMessage.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace plugin
{

class UbloxProtocolImpl : public
    cc::ProtocolBase<
        ublox::cc_plugin::frame::UbloxFrame,
        ublox::cc_plugin::frame::UbloxFrameTransportMessage
    >
{
    using Base =
        cc::ProtocolBase<
            ublox::cc_plugin::frame::UbloxFrame,
            ublox::cc_plugin::frame::UbloxFrameTransportMessage
        >;
public:
    friend class ublox::cc_plugin::plugin::UbloxProtocol;

    UbloxProtocolImpl() = default;
    virtual ~UbloxProtocolImpl() = default;

protected:
    virtual const QString& nameImpl() const override
    {
        static const QString Str("ublox");
        return Str;
    }

    using Base::createInvalidMessageImpl;
    using Base::createRawDataMessageImpl;
    using Base::createExtraInfoMessageImpl;

};

UbloxProtocol::UbloxProtocol()
  : m_pImpl(new UbloxProtocolImpl())
{
}

UbloxProtocol::~UbloxProtocol() = default;

const QString& UbloxProtocol::nameImpl() const
{
    return m_pImpl->name();
}

UbloxProtocol::MessagesList UbloxProtocol::readImpl(const cc::DataInfo& dataInfo, bool final)
{
    return m_pImpl->read(dataInfo, final);
}

cc::DataInfoPtr UbloxProtocol::writeImpl(cc::Message& msg)
{
    return m_pImpl->write(msg);
}

UbloxProtocol::MessagesList UbloxProtocol::createAllMessagesImpl()
{
    return m_pImpl->createAllMessages();
}

cc::MessagePtr UbloxProtocol::createMessageImpl(const QString& idAsString, unsigned idx)
{
    return static_cast<cc::Protocol*>(m_pImpl.get())->createMessage(idAsString, idx);
}

UbloxProtocol::UpdateStatus UbloxProtocol::updateMessageImpl(cc::Message& msg)
{
    return m_pImpl->updateMessage(msg);
}

cc::MessagePtr UbloxProtocol::cloneMessageImpl(const cc::Message& msg)
{
    return m_pImpl->cloneMessage(msg);
}

cc::MessagePtr UbloxProtocol::createInvalidMessageImpl()
{
    return m_pImpl->createInvalidMessageImpl();
}

cc::MessagePtr UbloxProtocol::createRawDataMessageImpl()
{
    return m_pImpl->createRawDataMessageImpl();
}

cc::MessagePtr UbloxProtocol::createExtraInfoMessageImpl()
{
    return m_pImpl->createExtraInfoMessageImpl();
}

} // namespace plugin

} // namespace cc_plugin

} // namespace ublox


