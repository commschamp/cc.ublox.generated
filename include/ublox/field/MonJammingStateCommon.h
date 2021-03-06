// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::field::MonJammingState field.

#pragma once

#include <cstdint>
#include <type_traits>

namespace ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref ublox::field::MonJammingState field.
struct MonJammingStateCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::field::MonJammingState field.
    enum class ValueType : std::uint8_t
    {
        Unknown = 0, ///< value @b Unknown.
        Ok = 1, ///< value @b Ok.
        Warning = 2, ///< value @b Warning.
        Critical = 3, ///< value @b Critical.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 3, ///< Last defined value.
        ValuesLimit = 4, ///< Upper limit for defined values.
        
    };
    
    /// @brief Name of the @ref ublox::field::MonJammingState field.
    static const char* name()
    {
        return "MonJammingState";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(ValueType val)
    {
        static const char* Map[] = {
            "Unknown",
            "Ok",
            "Warning",
            "Critical"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Values enumerator for
///     @ref ublox::field::MonJammingState field.
using MonJammingStateVal = MonJammingStateCommon::ValueType;

} // namespace field

} // namespace ublox


