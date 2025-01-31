// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaGpsAlm message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/Res4Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MgaGpsAlm message.
/// @see cc_ublox::message::MgaGpsAlmFields
struct MgaGpsAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Type field.
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
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Version field.
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
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Svid field.
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
    ///     @ref cc_ublox::message::MgaGpsAlmFields::SvHealth field.
    struct SvHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::SvHealth field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::SvHealth field.
        static const char* name()
        {
            return "svHealth";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::E field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::E field.
        static const char* name()
        {
            return "e";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::AlmWNa field.
    struct AlmWNaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::AlmWNa field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::AlmWNa field.
        static const char* name()
        {
            return "almWNa";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Toa field.
    struct ToaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Toa field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Toa field.
        static const char* name()
        {
            return "toa";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::DeltaI field.
    struct DeltaICommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::DeltaI field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::DeltaI field.
        static const char* name()
        {
            return "deltaI";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::OmegaDot field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::OmegaDot field.
        static const char* name()
        {
            return "omegaDot";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::SqrtA field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::SqrtA field.
        static const char* name()
        {
            return "sqrtA";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Omega0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Omega0 field.
        static const char* name()
        {
            return "omega0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Omega field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Omega field.
        static const char* name()
        {
            return "omega";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::M0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::M0 field.
        static const char* name()
        {
            return "m0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Af0 field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Af0 field.
        static const char* name()
        {
            return "af0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsAlmFields::Af1 field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Af1 field.
        static const char* name()
        {
            return "af1";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsAlmFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGpsAlmFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaGpsAlm message.
struct MgaGpsAlmCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaGpsAlm message.
    static const char* name()
    {
        return "MGA-GPS-ALM";
    }
};

} // namespace message

} // namespace cc_ublox
