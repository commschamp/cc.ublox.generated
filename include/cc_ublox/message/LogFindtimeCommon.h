// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::LogFindtime message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/DayCommon.h"
#include "cc_ublox/field/HourCommon.h"
#include "cc_ublox/field/MinCommon.h"
#include "cc_ublox/field/MonthCommon.h"
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res2Common.h"
#include "cc_ublox/field/SecCommon.h"
#include "cc_ublox/field/YearCommon.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::LogFindtime message.
/// @see cc_ublox::message::LogFindtimeFields
struct LogFindtimeFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::LogFindtimeFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Version field.
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
    ///     @ref cc_ublox::message::LogFindtimeFields::Type field.
    struct TypeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::LogFindtimeFields::Type field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Type field.
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
    ///     @ref cc_ublox::message::LogFindtimeFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Year field.
    using YearCommon = cc_ublox::field::YearCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Month field.
    using MonthCommon = cc_ublox::field::MonthCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Day field.
    using DayCommon = cc_ublox::field::DayCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Hour field.
    using HourCommon = cc_ublox::field::HourCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Minute field.
    struct MinuteCommon : public cc_ublox::field::MinCommon
    {
        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Minute field.
        static const char* name()
        {
            return "minute";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Second field.
    struct SecondCommon : public cc_ublox::field::SecCommon
    {
        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Second field.
        static const char* name()
        {
            return "second";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::LogFindtimeFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::LogFindtimeFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::LogFindtime message.
struct LogFindtimeCommon
{
    /// @brief Name of the @ref cc_ublox::message::LogFindtime message.
    static const char* name()
    {
        return "LOG-FINDTIME";
    }
};

} // namespace message

} // namespace cc_ublox
