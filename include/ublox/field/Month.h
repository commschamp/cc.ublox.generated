/// @file
/// @brief Contains definition of <b>"month"</b> field.

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

/// @brief Definition of <b>"month"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct Month : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::DefaultNumValue<1>,
        comms::option::ValidNumValueRange<1, 12>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "month";
    }
    
};

} // namespace field

} // namespace ublox


