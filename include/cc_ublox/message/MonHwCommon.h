// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MonHw message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "cc_ublox/field/MonAntPowerCommon.h"
#include "cc_ublox/field/MonAntStatusCommon.h"
#include "cc_ublox/field/MonJammingStateCommon.h"
#include "cc_ublox/field/Res1Common.h"
#include "cc_ublox/field/Res2Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MonHw message.
/// @see cc_ublox::message::MonHwFields
struct MonHwFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PinSel field.
    struct PinSelCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PinSel field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PinSel field.
        static const char* name()
        {
            return "pinSel";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PinBank field.
    struct PinBankCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PinBank field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PinBank field.
        static const char* name()
        {
            return "pinBank";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PinDir field.
    struct PinDirCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PinDir field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PinDir field.
        static const char* name()
        {
            return "pinDir";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PinVal field.
    struct PinValCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PinVal field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PinVal field.
        static const char* name()
        {
            return "pinVal";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::NoisePerMS field.
    struct NoisePerMSCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::NoisePerMS field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::NoisePerMS field.
        static const char* name()
        {
            return "noisePerMS";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::AgcCnt field.
    struct AgcCntCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::AgcCnt field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::AgcCnt field.
        static const char* name()
        {
            return "agcCnt";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::AStatus field.
    struct AStatusCommon : public cc_ublox::field::MonAntStatusCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::AStatus field.
        static const char* name()
        {
            return "aStatus";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::APower field.
    struct APowerCommon : public cc_ublox::field::MonAntPowerCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::APower field.
        static const char* name()
        {
            return "aPower";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::MonHwFields::Flags field.
    struct FlagsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Name of the @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsLow field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsLow field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "rtcCalib",
                    "safeBoot"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::MonHwFields::FlagsMembers::JammingState field.
        struct JammingStateCommon : public cc_ublox::field::MonJammingStateCommon
        {
            /// @brief Name of the @ref cc_ublox::message::MonHwFields::FlagsMembers::JammingState field.
            static const char* name()
            {
                return "jammingState";
            }
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Name of the @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsHigh field.
            static const char* name()
            {
                return "";
            }

            /// @brief Retrieve name of the bit of
            ///     @ref cc_ublox::message::MonHwFields::FlagsMembers::BitsHigh field.
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "xtalAbsent"
                };

                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }

                return Map[idx];
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::Flags field.
        static const char* name()
        {
            return "flags";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::UsedMask field.
    struct UsedMaskCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::UsedMask field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::UsedMask field.
        static const char* name()
        {
            return "usedMask";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::VP field.
    struct VPCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::VP field.
        static const char* name()
        {
            return "VP";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::JamInd field.
    struct JamIndCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::JamInd field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::JamInd field.
        static const char* name()
        {
            return "jamInd";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::MonHwFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PinIrq field.
    struct PinIrqCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PinIrq field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PinIrq field.
        static const char* name()
        {
            return "pinIrq";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PullH field.
    struct PullHCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PullH field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PullH field.
        static const char* name()
        {
            return "pullH";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHwFields::PullL field.
    struct PullLCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHwFields::PullL field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::MonHwFields::PullL field.
        static const char* name()
        {
            return "pullL";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MonHw message.
struct MonHwCommon
{
    /// @brief Name of the @ref cc_ublox::message::MonHw message.
    static const char* name()
    {
        return "MON-HW";
    }
};

} // namespace message

} // namespace cc_ublox