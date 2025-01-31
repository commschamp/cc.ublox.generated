// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"ecefVY"</b> field.

#pragma once

#include <cstdint>
#include "cc_ublox/field/EcefVYCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"ecefVY"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class EcefVY : public
    comms::field::IntValue<
        cc_ublox::field::FieldBase<>,
        std::int32_t,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::UnitsCentimetersPerSecond
    >
{
    using Base =
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::UnitsCentimetersPerSecond
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_ublox::field::EcefVYCommon::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::EcefVYCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
