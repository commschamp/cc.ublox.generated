// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::AidAopU8 message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/GnssIdCommon.h"
#include "cc_ublox/field/Res2Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::AidAopU8 message.
/// @see cc_ublox::message::AidAopU8Fields
struct AidAopU8FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAopU8Fields::GnssId field.
    using GnssIdCommon = cc_ublox::field::GnssIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAopU8Fields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidAopU8Fields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::AidAopU8Fields::Svid field.
        static const char* name()
        {
            return "svid";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAopU8Fields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::AidAopU8Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidAopU8Fields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref cc_ublox::message::AidAopU8Fields::Data field.
        static const char* name()
        {
            return "data";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::AidAopU8 message.
struct AidAopU8Common
{
    /// @brief Name of the @ref cc_ublox::message::AidAopU8 message.
    static const char* name()
    {
        return "AID-AOP (ublox-8)";
    }
};

} // namespace message

} // namespace cc_ublox
