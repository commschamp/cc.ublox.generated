// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::NavDgps message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/ItowCommon.h"
#include "cc_ublox/field/Res2Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::NavDgps message.
/// @see cc_ublox::message::NavDgpsFields
struct NavDgpsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::Itow field.
    using ItowCommon = cc_ublox::field::ItowCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::Age field.
    struct AgeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavDgpsFields::Age field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::Age field.
        static const char* name()
        {
            return "age";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::BaseId field.
    struct BaseIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavDgpsFields::BaseId field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::BaseId field.
        static const char* name()
        {
            return "baseId";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::BaseHealth field.
    struct BaseHealthCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavDgpsFields::BaseHealth field.
        using ValueType = std::int16_t;

        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::BaseHealth field.
        static const char* name()
        {
            return "baseHealth";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::NumCh field.
    struct NumChCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavDgpsFields::NumCh field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::NumCh field.
        static const char* name()
        {
            return "numCh";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::Status field.
    struct StatusCommon
    {
        /// @brief Values enumerator for
        ///     @ref cc_ublox::message::NavDgpsFields::Status field.
        enum class ValueType : std::uint8_t
        {
            None = 0, ///< value @b None. 
            PR_PRR = 1, ///< value <b>PR + PRR correction</b>. 

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

        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::Status field.
        static const char* name()
        {
            return "status";
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
                "None",
                "PR + PRR correction"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;

            return std::make_pair(&Map[0], MapSize);
        }
    };

    /// @brief Values enumerator for
    ///     @ref cc_ublox::message::NavDgpsFields::Status field.
    using StatusVal = StatusCommon::ValueType;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::Reserved1 field.
    struct Reserved1Common : public cc_ublox::field::Res2Common
    {
        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::Reserved1 field.
        static const char* name()
        {
            return "reserved1";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::NavDgpsFields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Svid field.
                static const char* name()
                {
                    return "svid";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                struct ChannelCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Channel field.
                    static const char* name()
                    {
                        return "channel";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* name()
                    {
                        return "";
                    }

                    /// @brief Retrieve name of the bit of
                    ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "dgpsUsed"
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
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
            struct AgeCCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
                using ValueType = std::uint16_t;

                /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::AgeC field.
                static const char* name()
                {
                    return "ageC";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
            struct PrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
                using ValueType = float;

                /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prc field.
                static const char* name()
                {
                    return "prc";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
            struct PrrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
                using ValueType = float;

                /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::ElementMembers::Prrc field.
                static const char* name()
                {
                    return "prrc";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::NavDgpsFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavDgpsFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_ublox::message::NavDgpsFields::List field.
        static const char* name()
        {
            return "list";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::NavDgps message.
struct NavDgpsCommon
{
    /// @brief Name of the @ref cc_ublox::message::NavDgps message.
    static const char* name()
    {
        return "NAV-DGPS";
    }
};

} // namespace message

} // namespace cc_ublox