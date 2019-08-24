/// @file
/// @brief Contains definition of <b>"tpIdx"</b> field.

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
///     @ref ublox::field::CfgTp5TpIdx field.
enum class CfgTp5TpIdxVal : std::uint8_t
{
    TIMEPULSE = 0, ///< value @b TIMEPULSE
    TIMEPULSE2 = 1, ///< value @b TIMEPULSE2
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 1, ///< Last defined value.
    ValuesLimit = 2, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgTp5TpIdx field.
struct CfgTp5TpIdxCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgTp5TpIdxVal val)
    {
        static const char* Map[] = {
            "TIMEPULSE",
            "TIMEPULSE2"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"tpIdx"</b> field.
/// @see @ref ublox::field::CfgTp5TpIdxVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgTp5TpIdx : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgTp5TpIdxVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "tpIdx";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgTp5TpIdxVal val)
    {
        return ublox::field::CfgTp5TpIdxCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


