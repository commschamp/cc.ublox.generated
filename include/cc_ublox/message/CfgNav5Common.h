// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgNav5 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/Res2Common.h"
#include "cc_ublox/field/Res5Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgNav5 message.
/// @see cc_ublox::message::CfgNav5Fields
struct CfgNav5FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::Mask field.
    struct MaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::Mask field.
        static const char* name()
        {
            return "mask";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::CfgNav5Fields::Mask field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "dyn",
                "minEl",
                "posFixMode",
                "drLim",
                "posMask",
                "timeMask",
                "staticHoldMask",
                "dgpsMask",
                "cnoThreshold",
                nullptr,
                "utc"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::DynModel field.
    struct DynModelCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgNav5Fields::DynModel field.
        enum class ValueType : std::uint8_t
        {
            Portable = 0, ///< value @b Portable. 
            Stationary = 2, ///< value @b Stationary. 
            Pedestrian = 3, ///< value @b Pedestrian. 
            Automotive = 4, ///< value @b Automotive. 
            Sea = 5, ///< value @b Sea. 
            Airborne1G = 6, ///< value <b>Airborne <1g accel</b>. 
            Airborne2G = 7, ///< value <b>Airborne <2g accel</b>. 
            Airborne4G = 8, ///< value <b>Airborne <4g accel</b>. 
            WristWatch = 9, ///< value <b>Wrist watch</b>. 
            Bike = 10, ///< value @b Bike. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 10, ///< Last defined value.
            ValuesLimit = 11, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::DynModel field.
        static const char* name()
        {
            return "dynModel";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
                return nullptr;
            }

            return namesMapInfo.first[static_cast<std::size_t>(val)];
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const char* Map[] = {
                "Portable",
                nullptr,
                "Stationary",
                "Pedestrian",
                "Automotive",
                "Sea",
                "Airborne <1g accel",
                "Airborne <2g accel",
                "Airborne <4g accel",
                "Wrist watch",
                "Bike"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgNav5Fields::DynModel field.
    using DynModelVal = DynModelCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::FixMode field.
    struct FixModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgNav5Fields::FixMode field.
        enum class ValueType : std::uint8_t
        {
            Only2D = 1, ///< value <b>2D Only</b>. 
            Only3D = 2, ///< value <b>2D Only</b>. 
            Auto = 3, ///< value <b>Auto 2D/3D</b>. 

            // --- Extra values generated for convenience ---
            FirstValue = 1, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::FixMode field.
        static const char* name()
        {
            return "fixMode";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
                return nullptr;
            }

            return namesMapInfo.first[static_cast<std::size_t>(val)];
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const char* Map[] = {
                nullptr,
                "2D Only",
                "2D Only",
                "Auto 2D/3D"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgNav5Fields::FixMode field.
    using FixModeVal = FixModeCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::FixedAlt field.
    struct FixedAltCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::FixedAlt field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::FixedAlt field.
        static const char* name()
        {
            return "fixedAlt";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::FixedAltVar field.
    struct FixedAltVarCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::FixedAltVar field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::FixedAltVar field.
        static const char* name()
        {
            return "fixedAltVar";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::MinElev field.
    struct MinElevCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::MinElev field.
        using ValueType = std::int8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::MinElev field.
        static const char* name()
        {
            return "minElev";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::DrLimit field.
    struct DrLimitCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::DrLimit field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::DrLimit field.
        static const char* name()
        {
            return "drLimit";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::PDop field.
    struct PDopCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::PDop field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::PDop field.
        static const char* name()
        {
            return "pDop";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::TDop field.
    struct TDopCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::TDop field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::TDop field.
        static const char* name()
        {
            return "tDop";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::PAcc field.
    struct PAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::PAcc field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::PAcc field.
        static const char* name()
        {
            return "pAcc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::TAcc field.
    struct TAccCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::TAcc field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::TAcc field.
        static const char* name()
        {
            return "tAcc";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::StaticHoldThresh field.
    struct StaticHoldThreshCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::StaticHoldThresh field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::StaticHoldThresh field.
        static const char* name()
        {
            return "staticHoldThresh";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::DgnssTimeout field.
    struct DgnssTimeoutCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::DgnssTimeout field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::DgnssTimeout field.
        static const char* name()
        {
            return "dgnssTimeout";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::CnoThreshNumSVs field.
    struct CnoThreshNumSVsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::CnoThreshNumSVs field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::CnoThreshNumSVs field.
        static const char* name()
        {
            return "cnoThreshNumSVs";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::CnoThresh field.
    struct CnoThreshCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::CnoThresh field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::CnoThresh field.
        static const char* name()
        {
            return "cnoThresh";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::StaticHoldMaxDist field.
    struct StaticHoldMaxDistCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgNav5Fields::StaticHoldMaxDist field.
        using ValueType = std::uint16_t;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::StaticHoldMaxDist field.
        static const char* name()
        {
            return "staticHoldMaxDist";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::UtcStandard field.
    struct UtcStandardCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgNav5Fields::UtcStandard field.
        enum class ValueType : std::uint8_t
        {
            Automatic = 0, ///< value @b Automatic. 
            GPS = 3, ///< value @b GPS. 
            GLONASS = 6, ///< value @b GLONASS. 
            BeiDou = 7, ///< value @b BeiDou. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 7, ///< Last defined value.
            ValuesLimit = 8, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::UtcStandard field.
        static const char* name()
        {
            return "utcStandard";
        }

        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            auto namesMapInfo = valueNamesMap();
            if (namesMapInfo.second <= static_cast<std::size_t>(val)) {
                return nullptr;
            }

            return namesMapInfo.first[static_cast<std::size_t>(val)];
        }

        /// @brief Retrieve map of enum value names
        static ValueNamesMapInfo valueNamesMap()
        {
            static const char* Map[] = {
                "Automatic",
                nullptr,
                nullptr,
                "GPS",
                nullptr,
                nullptr,
                "GLONASS",
                "BeiDou"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgNav5Fields::UtcStandard field.
    using UtcStandardVal = UtcStandardCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNav5Fields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res5Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNav5Fields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgNav5 message.
struct CfgNav5Common
{
    /// @brief Name of the @ref cc_ublox::message::CfgNav5 message.
    static const char* name()
    {
        return "CFG-NAV5";
    }
};

} // namespace message

} // namespace cc_ublox