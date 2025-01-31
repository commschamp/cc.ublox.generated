// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaFlashEph message and its fields.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MgaFlashEph message.
/// @see cc_ublox::message::MgaFlashEphFields
struct MgaFlashEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaFlashEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaFlashEphFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaFlashEphFields::Type field.
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
    ///     @ref cc_ublox::message::MgaFlashEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaFlashEphFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaFlashEphFields::Version field.
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
    ///     @ref cc_ublox::message::MgaFlashEphFields::Sequence field.
    struct SequenceCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaFlashEphFields::Sequence field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaFlashEphFields::Sequence field.
        static const char* name()
        {
            return "sequence";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaFlashEphFields::Size field.
    struct SizeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaFlashEphFields::Size field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaFlashEphFields::Size field.
        static const char* name()
        {
            return "size";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaFlashEphFields::Data field.
    struct DataCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MgaFlashEphFields::Data field.
        static const char* name()
        {
            return "data";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaFlashEph message.
struct MgaFlashEphCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaFlashEph message.
    static const char* name()
    {
        return "MGA-FLASH-DATA";
    }
};

} // namespace message

} // namespace cc_ublox
