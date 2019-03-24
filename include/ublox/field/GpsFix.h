/// @file
/// @brief Contains definition of <b>"gpsFix"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::GpsFix field.
enum class GpsFixVal : std::uint8_t
{
    NoFix = 0x00U, ///< value <b>no fix</b>.
    DeadReckon = 0x01U, ///< value <b>dead reckoning</b>.
    Fix2D = 0x02U, ///< value <b>2D fix</b>.
    Fix3D = 0x03U, ///< value <b>3D fix</b>.
    GpsAndDeadReckon = 0x04U, ///< value <b>GPS + dead reckoning</b>.
    TimeOnlyFix = 0x05U, ///< value <b>time only fix</b>.
    
};

/// @brief Definition of <b>"gpsFix"</b> field.
/// @see @ref ublox::field::GpsFixVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct GpsFix : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GpsFixVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 5>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "gpsFix";
    }
    
};

} // namespace field

} // namespace ublox


