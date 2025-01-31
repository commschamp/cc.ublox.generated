// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::MonMsgppCount field.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::MonMsgppCount field.
struct MonMsgppCountCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_ublox::field::MonMsgppCount field.
    using ValueType = std::uint16_t;

    /// @brief Name of the @ref cc_ublox::field::MonMsgppCount field.
    static const char* name()
    {
        return "";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return false;
    }
};

} // namespace field

} // namespace cc_ublox
