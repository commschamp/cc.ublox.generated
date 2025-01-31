// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MgaAck message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MgaAck message.
/// @see cc_ublox::message::MgaAckFields
struct MgaAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaAckFields::Type field.
    struct TypeCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::MgaAckFields::Type field.
        enum class ValueType : std::uint8_t
        {
            NotUsed = 0, ///< value @b NotUsed. 
            Accepted = 1, ///< value @b Accepted. 

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

        /// @brief Name of the @ref cc_ublox::message::MgaAckFields::Type field.
        static const char* name()
        {
            return "type";
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
                "NotUsed",
                "Accepted"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::MgaAckFields::Type field.
    using TypeVal = TypeCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaAckFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaAckFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaAckFields::Version field.
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
    ///     @ref cc_ublox::message::MgaAckFields::InfoCode field.
    struct InfoCodeCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::MgaAckFields::InfoCode field.
        enum class ValueType : std::uint8_t
        {
            Accepted = 0, ///< value @b Accepted. 
            TimeNotKnown = 1, ///< value @b TimeNotKnown. 
            BadVersion = 2, ///< value @b BadVersion. 
            BadSize = 3, ///< value @b BadSize. 
            StorageError = 4, ///< value @b StorageError. 
            NotReady = 5, ///< value @b NotReady. 
            UnknownType = 6, ///< value @b UnknownType. 

            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 6, ///< Last defined value.
            ValuesLimit = 7, ///< Upper limit for defined values.
        };

        /// @brief Single value name info entry
        using ValueNameInfo = const char*;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @details The @b first value of the pair is pointer to the map array,
        ///     The @b second value of the pair is the size of the array.
        using ValueNamesMapInfo = std::pair<const ValueNameInfo*, std::size_t>;

        /// @brief Name of the @ref cc_ublox::message::MgaAckFields::InfoCode field.
        static const char* name()
        {
            return "infoCode";
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
                "Accepted",
                "TimeNotKnown",
                "BadVersion",
                "BadSize",
                "StorageError",
                "NotReady",
                "UnknownType"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::MgaAckFields::InfoCode field.
    using InfoCodeVal = InfoCodeCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaAckFields::MsgId field.
    struct MsgIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MgaAckFields::MsgId field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MgaAckFields::MsgId field.
        static const char* name()
        {
            return "msgId";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MgaAckFields::MsgPayloadStart field.
    struct MsgPayloadStartCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MgaAckFields::MsgPayloadStart field.
        static const char* name()
        {
            return "msgPayloadStart";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MgaAck message.
struct MgaAckCommon
{
    /// @brief Name of the @ref cc_ublox::message::MgaAck message.
    static const char* name()
    {
        return "MGA-ACK";
    }
};

} // namespace message

} // namespace cc_ublox
