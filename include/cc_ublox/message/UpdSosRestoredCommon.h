// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::UpdSosRestored message and its fields.

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
///     @ref cc_ublox::message::UpdSosRestored message.
/// @see cc_ublox::message::UpdSosRestoredFields
struct UpdSosRestoredFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::UpdSosRestoredFields::Cmd field.
    struct CmdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::UpdSosRestoredFields::Cmd field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::UpdSosRestoredFields::Cmd field.
        static const char* name()
        {
            return "cmd";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::UpdSosRestoredFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::UpdSosRestoredFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::UpdSosRestoredFields::Response field.
    struct ResponseCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::UpdSosRestoredFields::Response field.
        enum class ValueType : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown. 
            Failed = 1, ///< value @b Failed. 
            Restored = 2, ///< value @b Restored. 
            NotRestored = 3, ///< value @b NotRestored. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::UpdSosRestoredFields::Response field.
        static const char* name()
        {
            return "response";
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
                "Unknown",
                "Failed",
                "Restored",
                "NotRestored"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::UpdSosRestoredFields::Response field.
    using ResponseVal = ResponseCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::UpdSosRestoredFields::Reserved2 field.
    struct Reserved2Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::UpdSosRestoredFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::UpdSosRestored message.
struct UpdSosRestoredCommon
{
    /// @brief Name of the @ref cc_ublox::message::UpdSosRestored message.
    static const char* name()
    {
        return "UPD-SOS (Restored)";
    }
};

} // namespace message

} // namespace cc_ublox
