// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaBdsIono message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/Res2Common.h"
#include "cc_ublox/field/Res4Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MgaBdsIono message.
/// @see cc_ublox::message::MgaBdsIonoFields
struct MgaBdsIonoFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Type field.
        static const char* name()
        {
            return "type";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Version field.
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
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Alpha0 field.
    struct Alpha0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Alpha0 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Alpha0 field.
        static const char* name()
        {
            return "alpha0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Alpha1 field.
    struct Alpha1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Alpha1 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Alpha1 field.
        static const char* name()
        {
            return "alpha1";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Alpha2 field.
    struct Alpha2Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Alpha2 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Alpha2 field.
        static const char* name()
        {
            return "alpha2";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Alpha3 field.
    struct Alpha3Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Alpha3 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Alpha3 field.
        static const char* name()
        {
            return "alpha3";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Beta0 field.
    struct Beta0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Beta0 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Beta0 field.
        static const char* name()
        {
            return "beta0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Beta1 field.
    struct Beta1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Beta1 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Beta1 field.
        static const char* name()
        {
            return "beta1";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Beta2 field.
    struct Beta2Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Beta2 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Beta2 field.
        static const char* name()
        {
            return "beta2";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Beta3 field.
    struct Beta3Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaBdsIonoFields::Beta3 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Beta3 field.
        static const char* name()
        {
            return "beta3";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaBdsIonoFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaBdsIonoFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaBdsIono message.
struct MgaBdsIonoCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaBdsIono message.
    static const char* name()
    {
        return "MGA-BDS-IONO";
    }
};

} // namespace message

} // namespace cc_ublox