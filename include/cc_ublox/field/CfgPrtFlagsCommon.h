// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::CfgPrtFlags field.

#pragma once

#include <type_traits>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::CfgPrtFlags field.
struct CfgPrtFlagsCommon
{
    /// @brief Name of the @ref cc_ublox::field::CfgPrtFlags field.
    static const char* name()
    {
        return "cfgPrtFlags";
    }

    /// @brief Retrieve name of the bit of
    ///     @ref cc_ublox::field::CfgPrtFlags field.
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            nullptr,
            "extendedTxTimeout"
        };

        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }

        return Map[idx];
    }
};

} // namespace field

} // namespace cc_ublox
