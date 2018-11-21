#include "CfgPrtOutProtoMask.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgPrtOutProtoMask.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgPrtOutProtoMask(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgPrtOutProtoMask<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add(0U, "outUbx")
            .add(1U, "outNmea")
            .add(5U, "outRtcm3")
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


