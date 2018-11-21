/// @file
/// @brief Contains definition of <b>"cfgDatDatumNum"</b> field.

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

/// @brief Values enumerator for @ref CfgDatDatumNum field.
enum class CfgDatDatumNumVal : std::uint16_t
{
    WGS84 = 0, ///< value @b WGS84
    User = 65535L, ///< value @b User
    
};

/// @brief Definition of <b>"cfgDatDatumNum"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgDatDatumNum : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgDatDatumNumVal,
        TExtraOpts...,
        comms::option::ValidNumValue<0>,
        comms::option::ValidNumValue<65535L>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgDatDatumNum";
    }
    
};

} // namespace field

} // namespace ublox


