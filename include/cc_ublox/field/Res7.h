// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"res7"</b> field.

#pragma once

#include <cstdint>
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res7Common.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"res7"</b> field.
/// @details
///     Reserved field with 7 bytes length
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class Res7 : public
    comms::field::IntValue<
        cc_ublox::field::FieldBase<>,
        std::uint64_t,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::FixedLength<7U>,
        comms::option::def::ValidNumValue<0>
    >
{
    using Base =
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint64_t,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::FixedLength<7U>,
            comms::option::def::ValidNumValue<0>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_ublox::field::Res7Common::hasSpecials();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::Res7Common::name();
    }
};

} // namespace field

} // namespace cc_ublox
