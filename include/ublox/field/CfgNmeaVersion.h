/// @file
/// @brief Contains definition of <b>"cfgNmeaVersion"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for @ref ublox::field::CfgNmeaVersion field.
enum class CfgNmeaVersionVal : std::uint8_t
{
    V21 = 33, ///< value <b>v2.1</b>.
    V23 = 35, ///< value <b>v2.3</b>.
    V40 = 64, ///< value <b>v4.0</b>.
    V41 = 65, ///< value <b>v4.1</b>.
    
};

/// @brief Definition of <b>"cfgNmeaVersion"</b> field.
/// @see @ref ublox::field::CfgNmeaVersionVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaVersion : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaVersionVal,
        TExtraOpts...,
        comms::option::ValidNumValue<33>,
        comms::option::ValidNumValue<35>,
        comms::option::ValidNumValueRange<64, 65>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaVersion";
    }
    
};

} // namespace field

} // namespace ublox


