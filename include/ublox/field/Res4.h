/// @file
/// @brief Contains definition of <b>"res4"</b> field.

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

/// @brief Definition of <b>"res4"</b> field.
/// @details
///     Reserved field with 4 bytes length
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Res4 : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint32_t,
        TExtraOpts...,
        comms::option::def::ValidNumValue<0>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "res4";
    }
    
};

} // namespace field

} // namespace ublox


