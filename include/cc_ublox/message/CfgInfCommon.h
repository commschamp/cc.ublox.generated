// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgInf message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/InfMaskCommon.h"
#include "cc_ublox/field/Res3Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgInf message.
/// @see cc_ublox::message::CfgInfFields
struct CfgInfFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgInfFields::ProtocolId field.
    struct ProtocolIdCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgInfFields::ProtocolId field.
        enum class ValueType : std::uint8_t
        {
            UBX = 0, ///< value @b UBX. 
            NMEA = 1, ///< value @b NMEA. 

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

        /// @brief Name of the @ref cc_ublox::message::CfgInfFields::ProtocolId field.
        static const char* name()
        {
            return "protocolId";
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
                "UBX",
                "NMEA"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgInfFields::ProtocolId field.
    using ProtocolIdVal = ProtocolIdCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgInfFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgInfFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::CfgInfFields::InfMsgMask field.
    struct InfMsgMaskMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::CfgInfFields::InfMsgMaskMembers::Element field.
        struct ElementCommon : public cc_ublox::field::InfMaskCommon
        {
            /// @brief Name of the @ref cc_ublox::message::CfgInfFields::InfMsgMaskMembers::Element field.
            static const char* name()
            {
                return "element";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgInfFields::InfMsgMask field.
    struct InfMsgMaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgInfFields::InfMsgMask field.
        static const char* name()
        {
            return "infMsgMask";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgInf message.
struct CfgInfCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgInf message.
    static const char* name()
    {
        return "CFG-INF";
    }
};

} // namespace message

} // namespace cc_ublox