/// @file
/// @brief Contains definition of <b>"hMSL"</b> field.

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

/// @brief Definition of <b>"hMSL"</b> field.
/// @details
///     Height avove mean sea level
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct HMSL : public
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
        return "hMSL";
    }
    
};

} // namespace field

} // namespace ublox


