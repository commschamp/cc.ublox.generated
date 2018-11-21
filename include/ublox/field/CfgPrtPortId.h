/// @file
/// @brief Contains definition of <b>"cfgPrtPortId"</b> field.

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

/// @brief Values enumerator for @ref CfgPrtPortId field.
enum class CfgPrtPortIdVal : std::uint8_t
{
    DDC = 0, ///< value @b DDC
    UART = 1, ///< value @b UART
    USB = 3, ///< value @b USB
    SPI = 4, ///< value @b SPI
    
};

/// @brief Definition of <b>"cfgPrtPortId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgPrtPortId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgPrtPortIdVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 1>,
        comms::option::ValidNumValueRange<3, 4>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgPrtPortId";
    }
    
};

} // namespace field

} // namespace ublox


