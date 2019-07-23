/// @file
/// @brief Contains definition of <b>"fTOW"</b> field.

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

/// @brief Definition of <b>"fTOW"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct Ftow : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::UnitsNanoseconds,
        comms::option::def::ValidNumValueRange<-500000L, 500000L>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "fTOW";
    }
    
};

} // namespace field

} // namespace ublox


