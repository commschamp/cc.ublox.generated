// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::Hour field.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::Hour field.
struct HourCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_ublox::field::Hour field.
    using ValueType = std::uint8_t;

    /// @brief Name of the @ref cc_ublox::field::Hour field.
    static const char* name()
    {
        return "hour";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_ublox
