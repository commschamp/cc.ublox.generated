/// @file
/// @brief Contains definition of <b>"cfgNmeaVersion"</b> field.

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
///     @ref ublox::field::CfgNmeaVersion field.
enum class CfgNmeaVersionVal : std::uint8_t
{
    V21 = 33, ///< value <b>v2.1</b>.
    V23 = 35, ///< value <b>v2.3</b>.
    V40 = 64, ///< value <b>v4.0</b>.
    V41 = 65, ///< value <b>v4.1</b>.
    
    // --- Extra values generated for convenience ---
    FirstValue = 33, ///< First defined value.
    LastValue = 65, ///< Last defined value.
    ValuesLimit = 66, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgNmeaVersion field.
struct CfgNmeaVersionCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaVersionVal val)
    {
        using NameInfo = std::pair<CfgNmeaVersionVal, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(CfgNmeaVersionVal::V21, "v2.1"),
            std::make_pair(CfgNmeaVersionVal::V23, "v2.3"),
            std::make_pair(CfgNmeaVersionVal::V40, "v4.0"),
            std::make_pair(CfgNmeaVersionVal::V41, "v4.1")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, CfgNmeaVersionVal v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Definition of <b>"cfgNmeaVersion"</b> field.
/// @see @ref ublox::field::CfgNmeaVersionVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaVersion : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaVersionVal,
        TExtraOpts...,
        comms::option::def::ValidNumValue<33>,
        comms::option::def::ValidNumValue<35>,
        comms::option::def::ValidNumValueRange<64, 65>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaVersion";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaVersionVal val)
    {
        return ublox::field::CfgNmeaVersionCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


