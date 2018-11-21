/// @file
/// @brief Contains definition of <b>"ecefVX"</b> field.

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

/// @brief Definition of <b>"ecefVX"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct EcefVX : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::UnitsCentimetersPerSecond
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ecefVX";
    }
    
};

} // namespace field

} // namespace ublox


