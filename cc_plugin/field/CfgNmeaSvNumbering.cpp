#include "CfgNmeaSvNumbering.h"

#include "comms_champion/property/field.h"
#include "ublox/field/CfgNmeaSvNumbering.h"


namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace field
{

QVariantMap createProps_cfgNmeaSvNumbering(const char* name, bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ublox::field::CfgNmeaSvNumbering<>;
    return
        cc::property::field::ForField<Field>()
            .name(name)
            .serialisedHidden(serHidden)
            .add("Strict", 0)
            .add("Extended", 1)
            .asMap();
    
}

} // namespace field

} // namespace cc_plugin

} // namespace ublox


