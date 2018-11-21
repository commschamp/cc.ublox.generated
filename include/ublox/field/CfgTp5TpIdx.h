/// @file
/// @brief Contains definition of <b>"tpIdx"</b> field.

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

/// @brief Values enumerator for @ref CfgTp5TpIdx field.
enum class CfgTp5TpIdxVal : std::uint8_t
{
    TIMEPULSE = 0, ///< value @b TIMEPULSE
    TIMEPULSE2 = 1, ///< value @b TIMEPULSE2
    
};

/// @brief Definition of <b>"tpIdx"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgTp5TpIdx : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgTp5TpIdxVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "tpIdx";
    }
    
};

} // namespace field

} // namespace ublox


