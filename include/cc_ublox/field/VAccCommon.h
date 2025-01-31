// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::VAcc field.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::VAcc field.
struct VAccCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_ublox::field::VAcc field.
    using ValueType = std::uint32_t;

    /// @brief Name of the @ref cc_ublox::field::VAcc field.
    static const char* name()
    {
        return "vAcc";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_ublox
