// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaGalEph message and its fields.

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
///     @ref cc_ublox::message::MgaGalEph message.
/// @see cc_ublox::message::MgaGalEphFields
struct MgaGalEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Type field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Version field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Svid field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Svid field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::IodNav field.
    struct IodNavCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::IodNav field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::IodNav field.
        static const char* name()
        {
            return "iodNav";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::DeltaN field.
    struct DeltaNCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::DeltaN field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::DeltaN field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::M0 field.
    struct M0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::M0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::M0 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::E field.
    struct ECommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::E field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::E field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::SqrtA field.
    struct SqrtACommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::SqrtA field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::SqrtA field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Omega0 field.
    struct Omega0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Omega0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Omega0 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::I0 field.
    struct I0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::I0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::I0 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Omega field.
    struct OmegaCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Omega field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Omega field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::OmegaDot field.
    struct OmegaDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::OmegaDot field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::OmegaDot field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::IDot field.
    struct IDotCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::IDot field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::IDot field.
        static const char* name()
        {
            return "iDot";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::Cuc field.
    struct CucCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Cuc field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Cuc field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Cus field.
    struct CusCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Cus field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Cus field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Crc field.
    struct CrcCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Crc field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Crc field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Crs field.
    struct CrsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Crs field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Crs field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Cic field.
    struct CicCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Cic field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Cic field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Cis field.
    struct CisCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Cis field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Cis field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Toe field.
    struct ToeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Toe field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Toe field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Af0 field.
    struct Af0Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Af0 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Af0 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Af1 field.
    struct Af1Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Af1 field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Af1 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::Af2 field.
    struct Af2Common
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Af2 field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Af2 field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::SisaIndexE1E5b field.
    struct SisaIndexE1E5bCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::SisaIndexE1E5b field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::SisaIndexE1E5b field.
        static const char* name()
        {
            return "sisaIndexE1E5b";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::Toc field.
    struct TocCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::Toc field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Toc field.
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
    ///     @ref cc_ublox::message::MgaGalEphFields::BgdE1E5b field.
    struct BgdE1E5bCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::BgdE1E5b field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::BgdE1E5b field.
        static const char* name()
        {
            return "bgdE1E5b";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::HealthE1B field.
    struct HealthE1BCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::HealthE1B field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::HealthE1B field.
        static const char* name()
        {
            return "healthE1B";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::DataValidityE1B field.
    struct DataValidityE1BCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::DataValidityE1B field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::DataValidityE1B field.
        static const char* name()
        {
            return "dataValidityE1B";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::HealthE5b field.
    struct HealthE5bCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::HealthE5b field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::HealthE5b field.
        static const char* name()
        {
            return "healthE5b";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::DataValidityE5b field.
    struct DataValidityE5bCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaGalEphFields::DataValidityE5b field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::DataValidityE5b field.
        static const char* name()
        {
            return "dataValidityE5b";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaGalEphFields::Reserved3 field.
    struct Reserved3Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::MgaGalEphFields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaGalEph message.
struct MgaGalEphCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaGalEph message.
    static const char* name()
    {
        return "MGA-GAL-EPH";
    }
};

} // namespace message

} // namespace cc_ublox