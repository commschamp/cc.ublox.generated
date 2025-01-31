// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::RxmPmreq message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::RxmPmreq message.
/// @see cc_ublox::message::RxmPmreqFields
struct RxmPmreqFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmPmreqFields::Duration field.
    struct DurationCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmPmreqFields::Duration field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::RxmPmreqFields::Duration field.
        static const char* name()
        {
            return "duration";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmPmreqFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::RxmPmreqFields::Flags field.
        static const char* name()
        {
            return "flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::RxmPmreqFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "backup"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::RxmPmreq message.
struct RxmPmreqCommon
{
    /// @brief Name of the @ref cc_ublox::message::RxmPmreq message.
    static const char* name()
    {
        return "RXM-PMREQ";
    }
};

} // namespace message

} // namespace cc_ublox
