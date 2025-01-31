// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgDgnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/Res3Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgDgnss message.
/// @see cc_ublox::message::CfgDgnssFields
struct CfgDgnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgDgnssFields::DgnssMode field.
    struct DgnssModeCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::CfgDgnssFields::DgnssMode field.
        enum class ValueType : std::uint8_t
        {
            Float = 2, ///< value @b Float. 
            Fixed = 3, ///< value @b Fixed. 

            // --- Extra values generated for convenience ---
            FirstValue = 2, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::CfgDgnssFields::DgnssMode field.
        static const char* name()
        {
            return "dgnssMode";
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
                nullptr,
                "Float",
                "Fixed"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::CfgDgnssFields::DgnssMode field.
    using DgnssModeVal = DgnssModeCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgDgnssFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::CfgDgnssFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgDgnss message.
struct CfgDgnssCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgDgnss message.
    static const char* name()
    {
        return "CFG-DGNSS";
    }
};

} // namespace message

} // namespace cc_ublox
