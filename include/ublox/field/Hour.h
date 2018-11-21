/// @file
/// @brief Contains definition of <b>"hour"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"hour"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct Hour : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::UnitsHours,
        comms::option::ValidNumValueRange<0, 23>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "hour";
    }
    
};

} // namespace field

} // namespace ublox


