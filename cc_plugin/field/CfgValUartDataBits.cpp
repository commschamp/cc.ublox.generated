// Generated by commsdsl2comms v3.6.2

#include "CfgValUartDataBits.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgValUartDataBits.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgValUartDataBits(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgValUartDataBits<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("EIGHT", 0)
            .add("SEVEN", 1)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


