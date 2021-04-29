// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::MonAntStatus field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::MonAntStatus field.
struct MonAntStatusCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::MonAntStatus field.
    enum class ValueType : std::uint8_t
    {
        INIT = 0, ///< value @b INIT.
        DONTKNOW = 1, ///< value @b DONTKNOW.
        OK = 2, ///< value @b OK.
        SHORT = 3, ///< value @b SHORT.
        OPEN = 4, ///< value @b OPEN.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 4, ///< Last defined value.
        ValuesLimit = 5, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::MonAntStatus field.
    static const char* name()
    {
        return "MonAntStatus";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "INIT",
            "DONTKNOW",
            "OK",
            "SHORT",
            "OPEN"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::MonAntStatus field.
using MonAntStatusVal = MonAntStatusCommon::ValueType;

} // namespace field

} // namespace ublox

