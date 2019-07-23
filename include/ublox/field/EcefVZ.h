/// @file
/// @brief Contains definition of <b>"ecefVZ"</b> field.

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

/// @brief Definition of <b>"ecefVZ"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct EcefVZ : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::UnitsCentimetersPerSecond
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "ecefVZ";
    }
    
};

} // namespace field

} // namespace ublox


