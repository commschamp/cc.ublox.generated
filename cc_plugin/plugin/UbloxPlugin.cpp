#include "UbloxPlugin.h"

#include "UbloxProtocol.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace plugin
{

UbloxPlugin::UbloxPlugin()
{
    pluginProperties()
        .setProtocolCreateFunc(
            []() -> cc::ProtocolPtr
            {
                return cc::ProtocolPtr(new UbloxProtocol());
            });
}

UbloxPlugin::~UbloxPlugin() = default;

} // namespace plugin

} // namespace cc_plugin

} // namespace ublox


