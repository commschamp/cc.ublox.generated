// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"dop"</b> field.

#pragma once

#include <cstdint>
#include "cc_ublox/field/DopCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"dop"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class Dop : public
    comms::field::IntValue<
        cc_ublox::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::ScalingRatio<1, 100>
    >
{
    using Base =
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::ScalingRatio<1, 100>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_ublox::field::DopCommon::hasSpecials();
    }

    /// @brief Requested number of digits after decimal point when value
    ///     is displayed.
    static constexpr unsigned displayDecimals()
    {
        return 2U;
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::DopCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox