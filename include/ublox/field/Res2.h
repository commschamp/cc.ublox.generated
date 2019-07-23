/// @file
/// @brief Contains definition of <b>"res2"</b> field.

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

/// @brief Definition of <b>"res2"</b> field.
/// @details
///     Reserved field with 2 bytes length
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Res2 : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::ValidNumValue<0>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "res2";
    }
    
};

} // namespace field

} // namespace ublox


