// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::RxmRlmLong message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res3Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::RxmRlmLong message.
/// @see cc_ublox::message::RxmRlmLongFields
struct RxmRlmLongFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmRlmLongFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmRlmLongFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Version field.
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
    ///     @ref cc_ublox::message::RxmRlmLongFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmRlmLongFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Type field.
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
    ///     @ref cc_ublox::message::RxmRlmLongFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmRlmLongFields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Svid field.
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
    ///     @ref cc_ublox::message::RxmRlmLongFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmRlmLongFields::Beacon field.
    struct BeaconCommon
    {
        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Beacon field.
        static const char* name()
        {
            return "beacon";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmRlmLongFields::Message field.
    struct MessageCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmRlmLongFields::Message field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Message field.
        static const char* name()
        {
            return "message";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmRlmLongFields::Params field.
    struct ParamsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Params field.
        static const char* name()
        {
            return "params";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmRlmLongFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::RxmRlmLongFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::RxmRlmLong message.
struct RxmRlmLongCommon
{
    /// @brief Name of the @ref cc_ublox::message::RxmRlmLong message.
    static const char* name()
    {
        return "RXM-RLM (Long)";
    }
};

} // namespace message

} // namespace cc_ublox
