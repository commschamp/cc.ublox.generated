/// @file
/// @brief Contains definition of <b>"day"</b> field.

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

/// @brief Definition of <b>"day"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Day : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...,
        comms::option::UnitsDays,
        comms::option::DefaultNumValue<1>,
        comms::option::ValidNumValueRange<1, 31>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "day";
    }
    
};

} // namespace field

} // namespace ublox


