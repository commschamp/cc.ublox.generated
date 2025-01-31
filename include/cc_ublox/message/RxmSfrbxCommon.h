// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::RxmSfrbx message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/GnssIdCommon.h"
#include "cc_ublox/field/Res1Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::RxmSfrbx message.
/// @see cc_ublox::message::RxmSfrbxFields
struct RxmSfrbxFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::GnssId field.
    using GnssIdCommon = cc_ublox::field::GnssIdCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmSfrbxFields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Svid field.
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
    ///     @ref cc_ublox::message::RxmSfrbxFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::FreqId field.
    struct FreqIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmSfrbxFields::FreqId field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::FreqId field.
        static const char* name()
        {
            return "freqId";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::NumWords field.
    struct NumWordsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmSfrbxFields::NumWords field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::NumWords field.
        static const char* name()
        {
            return "numWords";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::Chn field.
    struct ChnCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmSfrbxFields::Chn field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Chn field.
        static const char* name()
        {
            return "chn";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmSfrbxFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Version field.
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
    ///     @ref cc_ublox::message::RxmSfrbxFields::Reserved3 field.
    struct Reserved3Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::RxmSfrbxFields::Dwrd field.
    struct DwrdMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
        struct ElementCommon
        {
            /// @brief Re-definition of the value type used by
            ///     cc_ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
            using ValueType = std::uint32_t;

            /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::DwrdMembers::Element field.
            static const char* name()
            {
                return "element";
            }

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return false;
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmSfrbxFields::Dwrd field.
    struct DwrdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::RxmSfrbxFields::Dwrd field.
        static const char* name()
        {
            return "dwrd";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::RxmSfrbx message.
struct RxmSfrbxCommon
{
    /// @brief Name of the @ref cc_ublox::message::RxmSfrbx message.
    static const char* name()
    {
        return "RXM-SFRBX";
    }
};

} // namespace message

} // namespace cc_ublox
