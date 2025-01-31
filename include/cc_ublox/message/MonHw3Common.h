// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::MonHw3 message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>
#include "cc_ublox/field/Res1Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::MonHw3 message.
/// @see cc_ublox::message::MonHw3Fields
struct MonHw3FieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHw3Fields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHw3Fields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::Version field.
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
    ///     @ref cc_ublox::message::MonHw3Fields::NPins field.
    struct NPinsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::MonHw3Fields::NPins field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::NPins field.
        static const char* name()
        {
            return "nPins";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHw3Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::Flags field.
        static const char* name()
        {
            return "flags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::MonHw3Fields::Flags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "rctCalib",
                "safeBoot",
                "xtalAbsent"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHw3Fields::HwVersion field.
    struct HwVersionCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::HwVersion field.
        static const char* name()
        {
            return "hwVersion";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHw3Fields::Reserved0 field.
    struct Reserved0Common
    {
        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::MonHw3Fields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinId field.
            struct PinIdCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinId field.
                using ValueType = std::uint16_t;

                /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinId field.
                static const char* name()
                {
                    return "pinId";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMask field.
            struct PinMaskMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsLow field.
                struct BitsLowCommon
                {
                    /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsLow field.
                    static const char* name()
                    {
                        return "bitsLow";
                    }

                    /// @brief Retrieve name of the bit of
                    ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsLow field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "periphPIO"
                        };

                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }

                        return Map[idx];
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::PinBank field.
                struct PinBankCommon
                {
                    /// @brief Values enumerator for
                    ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::PinBank field.
                    enum class ValueType : std::uint8_t
                    {
                        A = 0, ///< value @b A. 
                        B = 1, ///< value @b B. 
                        C = 2, ///< value @b C. 
                        D = 3, ///< value @b D. 
                        E = 4, ///< value @b E. 
                        F = 5, ///< value @b F. 
                        G = 6, ///< value @b G. 
                        H = 7, ///< value @b H. 

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

                    /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::PinBank field.
                    static const char* name()
                    {
                        return "pinBank";
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
                            "A",
                            "B",
                            "C",
                            "D",
                            "E",
                            "F",
                            "G",
                            "H"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

                        return std::make_pair(&Map[0], MapSize);
                    }
                };

                /// @brief Values enumerator for
                ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::PinBank field.
                using PinBankVal = PinBankCommon::ValueType;

                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsHigh field.
                struct BitsHighCommon
                {
                    /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsHigh field.
                    static const char* name()
                    {
                        return "bitsHigh";
                    }

                    /// @brief Retrieve name of the bit of
                    ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMaskMembers::BitsHigh field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "direction",
                            "value",
                            "vpManager",
                            "pioIrq",
                            "pioPullHigh",
                            "pioPullLow"
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
            ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMask field.
            struct PinMaskCommon
            {
                /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::PinMask field.
                static const char* name()
                {
                    return "pinMask";
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::VP field.
            struct VPCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::VP field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::VP field.
                static const char* name()
                {
                    return "VP";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public cc_ublox::field::Res1Common
            {
                /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::MonHw3Fields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::ListMembers::Element field.
            static const char* name()
            {
                return "element";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::MonHw3Fields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_ublox::message::MonHw3Fields::List field.
        static const char* name()
        {
            return "list";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::MonHw3 message.
struct MonHw3Common
{
    /// @brief Name of the @ref cc_ublox::message::MonHw3 message.
    static const char* name()
    {
        return "MON-HW3";
    }
};

} // namespace message

} // namespace cc_ublox
