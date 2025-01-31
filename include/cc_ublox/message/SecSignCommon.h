// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::SecSign message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/MsgIdCommon.h"
#include "cc_ublox/field/Res3Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::SecSign message.
/// @see cc_ublox::message::SecSignFields
struct SecSignFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::SecSignFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::SecSignFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::SecSignFields::Version field.
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
    ///     @ref cc_ublox::message::SecSignFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::SecSignFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::SecSignFields::MsgId field.
    struct MsgIdCommon : public cc_ublox::field::MsgIdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::SecSignFields::MsgId field.
        static const char* name()
        {
            return "msgId";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::SecSignFields::Checksum field.
    struct ChecksumCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::SecSignFields::Checksum field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::SecSignFields::Checksum field.
        static const char* name()
        {
            return "checksum";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::SecSignFields::Hash field.
    struct HashCommon
    {
        /// @brief Name of the @ref cc_ublox::message::SecSignFields::Hash field.
        static const char* name()
        {
            return "hash";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::SecSign message.
struct SecSignCommon
{
    /// @brief Name of the @ref cc_ublox::message::SecSign message.
    static const char* name()
    {
        return "SEC-SIGN";
    }
};

} // namespace message

} // namespace cc_ublox
