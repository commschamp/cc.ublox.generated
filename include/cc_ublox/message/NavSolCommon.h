// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::NavSol message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "cc_ublox/field/DopCommon.h"
#include "cc_ublox/field/EcefVXCommon.h"
#include "cc_ublox/field/EcefVYCommon.h"
#include "cc_ublox/field/EcefVZCommon.h"
#include "cc_ublox/field/EcefXCommon.h"
#include "cc_ublox/field/EcefYCommon.h"
#include "cc_ublox/field/EcefZCommon.h"
#include "cc_ublox/field/FtowCommon.h"
#include "cc_ublox/field/GpsFixCommon.h"
#include "cc_ublox/field/ItowCommon.h"
#include "cc_ublox/field/PAccCommon.h"
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res4Common.h"
#include "cc_ublox/field/SAccCommon.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::NavSol message.
/// @see cc_ublox::message::NavSolFields
struct NavSolFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Itow field.
    using ItowCommon = cc_ublox::field::ItowCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Ftow field.
    using FtowCommon = cc_ublox::field::FtowCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSolFields::Week field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::NavSolFields::Week field.
        static const char* name()
        {
            return "week";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::GpsFix field.
    using GpsFixCommon = cc_ublox::field::GpsFixCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::NavSolFields::Flags field.
        static const char* name()
        {
            return "flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::NavSolFields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSfixOK",
                "DiffSoln",
                "WKNSET",
                "TOWSET"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefX field.
    using EcefXCommon = cc_ublox::field::EcefXCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefY field.
    using EcefYCommon = cc_ublox::field::EcefYCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefZ field.
    using EcefZCommon = cc_ublox::field::EcefZCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::PAcc field.
    using PAccCommon = cc_ublox::field::PAccCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefVX field.
    using EcefVXCommon = cc_ublox::field::EcefVXCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefVY field.
    using EcefVYCommon = cc_ublox::field::EcefVYCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::EcefVZ field.
    using EcefVZCommon = cc_ublox::field::EcefVZCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::SAcc field.
    using SAccCommon = cc_ublox::field::SAccCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::PDOP field.
    struct PDOPCommon : public cc_ublox::field::DopCommon
    {
        /// @brief Name of the @ref cc_ublox::message::NavSolFields::PDOP field.
        static const char* name()
        {
            return "pDOP";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::NavSolFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::NumSV field.
    struct NumSVCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSolFields::NumSV field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavSolFields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSolFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::NavSolFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::NavSol message.
struct NavSolCommon
{
    /// @brief Name of the @ref cc_ublox::message::NavSol message.
    static const char* name()
    {
        return "NAV-SOL";
    }
};

} // namespace message

} // namespace cc_ublox