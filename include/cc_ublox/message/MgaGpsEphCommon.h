// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaGpsEph message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res2Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MgaGpsEph message.
/// @see cc_ublox::message::MgaGpsEphFields
struct MgaGpsEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Type field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Version field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Svid field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::FitInterval field.
    struct FitIntervalCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::FitInterval field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::FitInterval field.
        static const char* name()
        {
            return "fitInterval";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::UraIndex field.
    struct UraIndexCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::UraIndex field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::UraIndex field.
        static const char* name()
        {
            return "uraIndex";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::SvHealth field.
    struct SvHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::SvHealth field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::SvHealth field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Tgd field.
    struct TgdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Tgd field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Tgd field.
        static const char* name()
        {
            return "tgd";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Iodc field.
    struct IodcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Iodc field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Iodc field.
        static const char* name()
        {
            return "iodc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Toc field.
    struct TocCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Toc field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Toc field.
        static const char* name()
        {
            return "toc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Af2 field.
    struct Af2Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Af2 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Af2 field.
        static const char* name()
        {
            return "af2";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Af1 field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Af1 field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Af0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Af0 field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Crs field.
    struct CrsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Crs field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Crs field.
        static const char* name()
        {
            return "crs";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::DeltaN field.
    struct DeltaNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::DeltaN field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::DeltaN field.
        static const char* name()
        {
            return "deltaN";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::M0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::M0 field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Cuc field.
    struct CucCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Cuc field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Cuc field.
        static const char* name()
        {
            return "cuc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Cus field.
    struct CusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Cus field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Cus field.
        static const char* name()
        {
            return "cus";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::E field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::E field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::SqrtA field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::SqrtA field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Toe field.
    struct ToeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Toe field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Toe field.
        static const char* name()
        {
            return "toe";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Cic field.
    struct CicCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Cic field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Cic field.
        static const char* name()
        {
            return "cic";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Omega0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Omega0 field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Cis field.
    struct CisCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Cis field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Cis field.
        static const char* name()
        {
            return "cis";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Crc field.
    struct CrcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Crc field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Crc field.
        static const char* name()
        {
            return "crc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::I0 field.
    struct I0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::I0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::I0 field.
        static const char* name()
        {
            return "i0";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Omega field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Omega field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::OmegaDot field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::OmegaDot field.
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
    ///     @ref cc_ublox::message::MgaGpsEphFields::Idot field.
    struct IdotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGpsEphFields::Idot field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Idot field.
        static const char* name()
        {
            return "idot";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGpsEphFields::Reserved3 field.
    struct Reserved3Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGpsEphFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaGpsEph message.
struct MgaGpsEphCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaGpsEph message.
    static const char* name()
    {
        return "MGA-GPS-EPH";
    }
};

} // namespace message

} // namespace cc_ublox