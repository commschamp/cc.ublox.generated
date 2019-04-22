/// @file
/// @brief Contains definition of <b>"cfgMainTalkerId"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::CfgMainTalkerId field.
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
/// @see @ref ublox::field::CfgMainTalkerIdVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
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
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgMainTalkerIdVal val)
    {
        static const char* Map[] = {
            "Not overridden",
            "GP",
            "GL",
            "GN",
            "GA",
            "GB"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

} // namespace field

} // namespace ublox


