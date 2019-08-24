/// @file
/// @brief Contains definition of <b>"gpsFix"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for
///     @ref ublox::field::GpsFix field.
enum class GpsFixVal : std::uint8_t
{
    NoFix = 0x00U, ///< value <b>no fix</b>.
    DeadReckon = 0x01U, ///< value <b>dead reckoning</b>.
    Fix2D = 0x02U, ///< value <b>2D fix</b>.
    Fix3D = 0x03U, ///< value <b>3D fix</b>.
    GpsAndDeadReckon = 0x04U, ///< value <b>GPS + dead reckoning</b>.
    TimeOnlyFix = 0x05U, ///< value <b>time only fix</b>.
    
    // --- Extra values generated for convenience ---
    FirstValue = 0x00U, ///< First defined value.
    LastValue = 0x05U, ///< Last defined value.
    ValuesLimit = 0x06U, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::GpsFix field.
struct GpsFixCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(GpsFixVal val)
    {
        static const char* Map[] = {
            "no fix",
            "dead reckoning",
            "2D fix",
            "3D fix",
            "GPS + dead reckoning",
            "time only fix"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"gpsFix"</b> field.
/// @see @ref ublox::field::GpsFixVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct GpsFix : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GpsFixVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 5>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "gpsFix";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(GpsFixVal val)
    {
        return ublox::field::GpsFixCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


