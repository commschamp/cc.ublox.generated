/// @file
/// @brief Contains definition of <b>"height"</b> field.

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

/// @brief Definition of <b>"height"</b> field.
/// @details
///     Height avove ellipsoid
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Height : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::UnitsMillimeters
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "height";
    }
    
};

} // namespace field

} // namespace ublox


