/// @file
/// @brief Contains definition of <b>"hour"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"hour"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Hour : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::def::UnitsHours,
        comms::option::def::ValidNumValueRange<0, 23>
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


