// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::EcefY field.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::EcefY field.
struct EcefYCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_ublox::field::EcefY field.
    using ValueType = std::int32_t;

    /// @brief Name of the @ref cc_ublox::field::EcefY field.
    static const char* name()
    {
        return "ecefY";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_ublox