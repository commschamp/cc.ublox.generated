// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgNmeaV1 message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/CfgMainTalkerIdCommon.h"
#include "cc_ublox/field/CfgNmeaFilterCommon.h"
#include "cc_ublox/field/CfgNmeaFlagsCommon.h"
#include "cc_ublox/field/CfgNmeaGnssToFilterCommon.h"
#include "cc_ublox/field/CfgNmeaGsvTalkerIdCommon.h"
#include "cc_ublox/field/CfgNmeaNumSVCommon.h"
#include "cc_ublox/field/CfgNmeaSvNumberingCommon.h"
#include "cc_ublox/field/NmeaVersionCommon.h"
#include "cc_ublox/field/Res6Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgNmeaV1 message.
/// @see cc_ublox::message::CfgNmeaV1Fields
struct CfgNmeaV1FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::Filter field.
    struct FilterCommon : public cc_ublox::field::CfgNmeaFilterCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::Filter field.
        static const char* name()
        {
            return "filter";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::NmeaVersion field.
    struct NmeaVersionCommon : public cc_ublox::field::NmeaVersionCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::NmeaVersion field.
        static const char* name()
        {
            return "nmeaVersion";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::NumSV field.
    struct NumSVCommon : public cc_ublox::field::CfgNmeaNumSVCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::NumSV field.
        static const char* name()
        {
            return "numSV";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::Flags field.
    struct FlagsCommon : public cc_ublox::field::CfgNmeaFlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::GnssToFilter field.
    struct GnssToFilterCommon : public cc_ublox::field::CfgNmeaGnssToFilterCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::GnssToFilter field.
        static const char* name()
        {
            return "gnssToFilter";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::SvNumbering field.
    struct SvNumberingCommon : public cc_ublox::field::CfgNmeaSvNumberingCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::SvNumbering field.
        static const char* name()
        {
            return "svNumbering";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::MainTalkerId field.
    struct MainTalkerIdCommon : public cc_ublox::field::CfgMainTalkerIdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::MainTalkerId field.
        static const char* name()
        {
            return "mainTalkerId";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::GsvTalkerId field.
    struct GsvTalkerIdCommon : public cc_ublox::field::CfgNmeaGsvTalkerIdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::GsvTalkerId field.
        static const char* name()
        {
            return "gsvTalkerId";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNmeaV1Fields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::Version field.
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
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::BdsTalkerId field.
    struct BdsTalkerIdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::BdsTalkerId field.
        static const char* name()
        {
            return "bdsTalkerId";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNmeaV1Fields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res6Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgNmeaV1 message.
struct CfgNmeaV1Common
{
    /// @brief Name of the @ref cc_ublox::message::CfgNmeaV1 message.
    static const char* name()
    {
        return "CFG-NMEA (V1)";
    }
};

} // namespace message

} // namespace cc_ublox
