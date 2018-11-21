/// @file
/// @brief Contains definition of <b>"cfgMainTalkerId"</b> field.

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

/// @brief Values enumerator for @ref CfgMainTalkerId field.
enum class CfgMainTalkerIdVal : std::uint8_t
{
    NotOverridden = 0, ///< value <b>Not overridden</b>.
    GP = 1, ///< value @b GP
    GL = 2, ///< value @b GL
    GN = 3, ///< value @b GN
    GA = 4, ///< value @b GA
    GB = 5, ///< value @b GB
    
};

/// @brief Definition of <b>"cfgMainTalkerId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgMainTalkerId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgMainTalkerIdVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 5>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgMainTalkerId";
    }
    
};

} // namespace field

} // namespace ublox


