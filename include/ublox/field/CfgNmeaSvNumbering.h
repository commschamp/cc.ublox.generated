/// @file
/// @brief Contains definition of <b>"cfgNmeaSvNumbering"</b> field.

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
///     @ref ublox::field::CfgNmeaSvNumbering field.
enum class CfgNmeaSvNumberingVal : std::uint8_t
{
    Strict = 0, ///< value @b Strict
    Extended = 1, ///< value @b Extended
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 1, ///< Last defined value.
    ValuesLimit = 2, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgNmeaSvNumbering field.
struct CfgNmeaSvNumberingCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaSvNumberingVal val)
    {
        static const char* Map[] = {
            "Strict",
            "Extended"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"cfgNmeaSvNumbering"</b> field.
/// @see @ref ublox::field::CfgNmeaSvNumberingVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaSvNumbering : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaSvNumberingVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaSvNumbering";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaSvNumberingVal val)
    {
        return ublox::field::CfgNmeaSvNumberingCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


