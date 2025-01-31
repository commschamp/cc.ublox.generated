// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgGeofence message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/LatCommon.h"
#include "cc_ublox/field/LonCommon.h"
#include "cc_ublox/field/Res1Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgGeofence message.
/// @see cc_ublox::message::CfgGeofenceFields
struct CfgGeofenceFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGeofenceFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::Version field.
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
    ///     @ref cc_ublox::message::CfgGeofenceFields::NumFences field.
    struct NumFencesCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGeofenceFields::NumFences field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::NumFences field.
        static const char* name()
        {
            return "numFences";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::ConfLvl field.
    struct ConfLvlCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGeofenceFields::ConfLvl field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::ConfLvl field.
        static const char* name()
        {
            return "confLvl";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::PioEnabled field.
    struct PioEnabledCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgGeofenceFields::PioEnabled field.
        enum class ValueType : std::uint8_t
        {
            Disable = 0, ///< value @b Disable. 
            Enable = 1, ///< value @b Enable. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::PioEnabled field.
        static const char* name()
        {
            return "pioEnabled";
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
                "Disable",
                "Enable"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgGeofenceFields::PioEnabled field.
    using PioEnabledVal = PioEnabledCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::PinPolarity field.
    struct PinPolarityCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgGeofenceFields::PinPolarity field.
        enum class ValueType : std::uint8_t
        {
            LowInside = 0, ///< value @b LowInside. 
            LowOutside = 1, ///< value @b LowOutside. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::PinPolarity field.
        static const char* name()
        {
            return "pinPolarity";
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
                "LowInside",
                "LowOutside"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgGeofenceFields::PinPolarity field.
    using PinPolarityVal = PinPolarityCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::Pin field.
    struct PinCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGeofenceFields::Pin field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::Pin field.
        static const char* name()
        {
            return "pin";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res1Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::CfgGeofenceFields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::CfgGeofenceFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Lat field.
            using LatCommon = cc_ublox::field::LatCommon;

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Lon field.
            using LonCommon = cc_ublox::field::LonCommon;

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
            struct RadiusCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
                using ValueType = std::uint32_t;

                /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::ListMembers::ElementMembers::Radius field.
                static const char* name()
                {
                    return "radius";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::CfgGeofenceFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGeofenceFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgGeofenceFields::List field.
        static const char* name()
        {
            return "list";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgGeofence message.
struct CfgGeofenceCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgGeofence message.
    static const char* name()
    {
        return "CFG-GEOFENCE";
    }
};

} // namespace message

} // namespace cc_ublox
