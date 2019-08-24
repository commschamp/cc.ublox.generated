/// @file
/// @brief Contains definition of <b>"cfgPrtPortId"</b> field.

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
///     @ref ublox::field::CfgPrtPortId field.
enum class CfgPrtPortIdVal : std::uint8_t
{
    DDC = 0, ///< value @b DDC
    UART = 1, ///< value @b UART
    USB = 3, ///< value @b USB
    SPI = 4, ///< value @b SPI
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 4, ///< Last defined value.
    ValuesLimit = 5, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgPrtPortId field.
struct CfgPrtPortIdCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgPrtPortIdVal val)
    {
        static const char* Map[] = {
            "DDC",
            "UART",
            nullptr,
            "USB",
            "SPI"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"cfgPrtPortId"</b> field.
/// @see @ref ublox::field::CfgPrtPortIdVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgPrtPortId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgPrtPortIdVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>,
        comms::option::def::ValidNumValueRange<3, 4>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgPrtPortId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgPrtPortIdVal val)
    {
        return ublox::field::CfgPrtPortIdCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


