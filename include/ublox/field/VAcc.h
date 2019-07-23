/// @file
/// @brief Contains definition of <b>"vAcc"</b> field.

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

/// @brief Definition of <b>"vAcc"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct VAcc : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint32_t,
        TExtraOpts...,
        comms::option::def::UnitsMillimeters
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "vAcc";
    }
    
};

} // namespace field

} // namespace ublox


