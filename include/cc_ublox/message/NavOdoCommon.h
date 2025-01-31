// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::NavOdo message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/ItowCommon.h"
#include "cc_ublox/field/Res3Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::NavOdo message.
/// @see cc_ublox::message::NavOdoFields
struct NavOdoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavOdoFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavOdoFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavOdoFields::Version field.
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
    ///     @ref cc_ublox::message::NavOdoFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::NavOdoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavOdoFields::Itow field.
    using ItowCommon = cc_ublox::field::ItowCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavOdoFields::Distance field.
    struct DistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavOdoFields::Distance field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::NavOdoFields::Distance field.
        static const char* name()
        {
            return "distance";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavOdoFields::TotalDistance field.
    struct TotalDistanceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavOdoFields::TotalDistance field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::NavOdoFields::TotalDistance field.
        static const char* name()
        {
            return "totalDistance";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavOdoFields::DistanceStd field.
    struct DistanceStdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavOdoFields::DistanceStd field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::NavOdoFields::DistanceStd field.
        static const char* name()
        {
            return "distanceStd";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::NavOdo message.
struct NavOdoCommon
{
    /// @brief Name of the @ref cc_ublox::message::NavOdo message.
    static const char* name()
    {
        return "NAV-ODO";
    }
};

} // namespace message

} // namespace cc_ublox
