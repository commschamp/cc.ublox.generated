// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgNavx5 message and its fields.

#pragma once

#include <cstdint>
#include "cc_ublox/field/CfgNavx5AopCfgCommon.h"
#include "cc_ublox/field/CfgNavx5AopOrbMaxErrCommon.h"
#include "cc_ublox/field/CfgNavx5Mask1Common.h"
#include "cc_ublox/field/CfgNavx5Mask2Common.h"
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res2Common.h"
#include "cc_ublox/field/Res3Common.h"
#include "cc_ublox/field/Res4Common.h"
#include "cc_ublox/field/Res6Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgNavx5 message.
/// @see cc_ublox::message::CfgNavx5Fields
struct CfgNavx5FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::Version field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Version field.
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
    ///     @ref cc_ublox::message::CfgNavx5Fields::Mask1 field.
    using Mask1Common = cc_ublox::field::CfgNavx5Mask1Common;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Mask2 field.
    using Mask2Common = cc_ublox::field::CfgNavx5Mask2Common;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::MinSVs field.
    struct MinSVsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::MinSVs field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::MinSVs field.
        static const char* name()
        {
            return "minSVs";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::MaxSVs field.
    struct MaxSVsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::MaxSVs field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::MaxSVs field.
        static const char* name()
        {
            return "maxSVs";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::MinCNO field.
    struct MinCNOCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::MinCNO field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::MinCNO field.
        static const char* name()
        {
            return "minCNO";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::IniFix3D field.
    struct IniFix3DCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::IniFix3D field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::IniFix3D field.
        static const char* name()
        {
            return "iniFix3D";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved3 field.
    struct Reserved3Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved3 field.
        static const char* name()
        {
            return "reserved3";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::AckAiding field.
    struct AckAidingCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::AckAiding field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::AckAiding field.
        static const char* name()
        {
            return "ackAiding";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::WknRollover field.
    struct WknRolloverCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::WknRollover field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::WknRollover field.
        static const char* name()
        {
            return "wknRollover";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved4 field.
    struct Reserved4Common : public cc_ublox::field::Res6Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved4 field.
        static const char* name()
        {
            return "reserved4";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::UsePPP field.
    struct UsePPPCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::UsePPP field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::UsePPP field.
        static const char* name()
        {
            return "usePPP";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::AopCfg field.
    using AopCfgCommon = cc_ublox::field::CfgNavx5AopCfgCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved5 field.
    struct Reserved5Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved5 field.
        static const char* name()
        {
            return "reserved5";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::AopOrbMaxErr field.
    using AopOrbMaxErrCommon = cc_ublox::field::CfgNavx5AopOrbMaxErrCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved6 field.
    struct Reserved6Common : public cc_ublox::field::Res4Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved6 field.
        static const char* name()
        {
            return "reserved6";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::Reserved7 field.
    struct Reserved7Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::Reserved7 field.
        static const char* name()
        {
            return "reserved7";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNavx5Fields::UseAdr field.
    struct UseAdrCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNavx5Fields::UseAdr field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNavx5Fields::UseAdr field.
        static const char* name()
        {
            return "useAdr";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgNavx5 message.
struct CfgNavx5Common
{
    /// @brief Name of the @ref cc_ublox::message::CfgNavx5 message.
    static const char* name()
    {
        return "CFG-NAVX5";
    }
};

} // namespace message

} // namespace cc_ublox
