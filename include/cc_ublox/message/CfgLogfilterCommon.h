// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgLogfilter message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgLogfilter message.
/// @see cc_ublox::message::CfgLogfilterFields
struct CfgLogfilterFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgLogfilterFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::Version field.
        static const char* name()
        {
            return "version";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::Flags field.
        static const char* name()
        {
            return "flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::CfgLogfilterFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "recordEnabled",
                "psmOncePerWakupEnabled",
                "applyAllFilterSettings"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::MinInterval field.
    struct MinIntervalCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgLogfilterFields::MinInterval field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::MinInterval field.
        static const char* name()
        {
            return "minInterval";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::TimeThreshold field.
    struct TimeThresholdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgLogfilterFields::TimeThreshold field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::TimeThreshold field.
        static const char* name()
        {
            return "timeThreshold";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::SpeedThreshold field.
    struct SpeedThresholdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgLogfilterFields::SpeedThreshold field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::SpeedThreshold field.
        static const char* name()
        {
            return "speedThreshold";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgLogfilterFields::PositionThres field.
    struct PositionThresCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgLogfilterFields::PositionThres field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::CfgLogfilterFields::PositionThres field.
        static const char* name()
        {
            return "positionThres";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgLogfilter message.
struct CfgLogfilterCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgLogfilter message.
    static const char* name()
    {
        return "CFG-LOGFILTER";
    }
};

} // namespace message

} // namespace cc_ublox