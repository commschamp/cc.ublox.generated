/// @file
/// @brief Contains definition of <b>"cfgDatDatumNum"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for
///     @ref ublox::field::CfgDatDatumNum field.
enum class CfgDatDatumNumVal : std::uint16_t
{
    WGS84 = 0, ///< value @b WGS84
    User = 65535L, ///< value @b User
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 65535L, ///< Last defined value.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgDatDatumNum field.
struct CfgDatDatumNumCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgDatDatumNumVal val)
    {
        using NameInfo = std::pair<CfgDatDatumNumVal, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(CfgDatDatumNumVal::WGS84, "WGS84"),
            std::make_pair(CfgDatDatumNumVal::User, "User")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, CfgDatDatumNumVal v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Definition of <b>"cfgDatDatumNum"</b> field.
/// @see @ref ublox::field::CfgDatDatumNumVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgDatDatumNum : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgDatDatumNumVal,
        TExtraOpts...,
        comms::option::def::ValidNumValue<0>,
        comms::option::def::ValidNumValue<65535L>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgDatDatumNum";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgDatDatumNumVal val)
    {
        return ublox::field::CfgDatDatumNumCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


