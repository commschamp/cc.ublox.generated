/// @file
/// @brief Contains definition of <b>"cfgNmeaSvNumbering"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::CfgNmeaSvNumbering field.
enum class CfgNmeaSvNumberingVal : std::uint8_t
{
    Strict = 0, ///< value @b Strict
    Extended = 1, ///< value @b Extended
    
};

/// @brief Definition of <b>"cfgNmeaSvNumbering"</b> field.
/// @see @ref ublox::field::CfgNmeaSvNumberingVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaSvNumbering : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaSvNumberingVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaSvNumbering";
    }
    
};

} // namespace field

} // namespace ublox


