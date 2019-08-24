/// @file
/// @brief Contains definition of <b>"GeofenceState"</b> field.

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
///     @ref ublox::field::GeofenceState field.
enum class GeofenceStateVal : std::uint8_t
{
    Unknown = 0, ///< value @b Unknown
    Inside = 1, ///< value @b Inside
    Outside = 2, ///< value @b Outside
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 2, ///< Last defined value.
    ValuesLimit = 3, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::GeofenceState field.
struct GeofenceStateCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(GeofenceStateVal val)
    {
        static const char* Map[] = {
            "Unknown",
            "Inside",
            "Outside"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"GeofenceState"</b> field.
/// @see @ref ublox::field::GeofenceStateVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct GeofenceState : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GeofenceStateVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 2>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "GeofenceState";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(GeofenceStateVal val)
    {
        return ublox::field::GeofenceStateCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


