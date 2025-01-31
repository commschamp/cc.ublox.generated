// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::AidAlp message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res2Common.h"
#include "cc_ublox/field/Res4Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::AidAlp message.
/// @see cc_ublox::message::AidAlpFields
struct AidAlpFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::PredTow field.
    struct PredTowCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::PredTow field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::PredTow field.
        static const char* name()
        {
            return "predTow";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::PredDur field.
    struct PredDurCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::PredDur field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::PredDur field.
        static const char* name()
        {
            return "predDur";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::Age field.
    struct AgeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::Age field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::Age field.
        static const char* name()
        {
            return "age";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::PredWno field.
    struct PredWnoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::PredWno field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::PredWno field.
        static const char* name()
        {
            return "predWno";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::AlmWno field.
    struct AlmWnoCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::AlmWno field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::AlmWno field.
        static const char* name()
        {
            return "almWno";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::Svs field.
    struct SvsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAlpFields::Svs field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::Svs field.
        static const char* name()
        {
            return "svs";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAlpFields::Reserved3 field.
    struct Reserved3Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::AidAlpFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::AidAlp message.
struct AidAlpCommon
{
    /// @brief Name of the @ref cc_ublox::message::AidAlp message.
    static const char* name()
    {
        return "AID-ALP";
    }
};

} // namespace message

} // namespace cc_ublox
