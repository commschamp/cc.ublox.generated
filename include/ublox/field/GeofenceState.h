/// @file
/// @brief Contains definition of <b>"GeofenceState"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::GeofenceState field.
enum class GeofenceStateVal : std::uint8_t
{
    Unknown = 0, ///< value @b Unknown
    Inside = 1, ///< value @b Inside
    Outside = 2, ///< value @b Outside
    
};

/// @brief Definition of <b>"GeofenceState"</b> field.
/// @see @ref ublox::field::GeofenceStateVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct GeofenceState : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GeofenceStateVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 2>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "GeofenceState";
    }
    
};

} // namespace field

} // namespace ublox


