// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgGnss message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "cc_ublox/field/GnssIdCommon.h"
#include "cc_ublox/field/Res1Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgGnss message.
/// @see cc_ublox::message::CfgGnssFields
struct CfgGnssFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGnssFields::MsgVer field.
    struct MsgVerCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGnssFields::MsgVer field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::MsgVer field.
        static const char* name()
        {
            return "msgVer";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGnssFields::NumTrkChHw field.
    struct NumTrkChHwCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGnssFields::NumTrkChHw field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::NumTrkChHw field.
        static const char* name()
        {
            return "numTrkChHw";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGnssFields::NumTrkChUse field.
    struct NumTrkChUseCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGnssFields::NumTrkChUse field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::NumTrkChUse field.
        static const char* name()
        {
            return "numTrkChUse";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGnssFields::NumConfigBlocks field.
    struct NumConfigBlocksCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::CfgGnssFields::NumConfigBlocks field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::NumConfigBlocks field.
        static const char* name()
        {
            return "numConfigBlocks";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::CfgGnssFields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = cc_ublox::field::GnssIdCommon;

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
            struct ResTrkChCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::ResTrkCh field.
                static const char* name()
                {
                    return "resTrkCh";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
            struct MaxTrkChCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::MaxTrkCh field.
                static const char* name()
                {
                    return "maxTrkCh";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public cc_ublox::field::Res1Common
            {
                /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
            };

            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
            struct FlagsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                struct BitsLowCommon
                {
                    /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* name()
                    {
                        return "";
                    }

                    /// @brief Retrieve name of the bit of
                    ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::BitsLow field.
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "enable"
                        };

                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }

                        return Map[idx];
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                struct SigCfgMaskCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::SigCfgMask field.
                    static const char* name()
                    {
                        return "sigCfgMask";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };

                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                struct ReservedCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    using ValueType = std::uint8_t;

                    /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::FlagsMembers::Reserved field.
                    static const char* name()
                    {
                        return "reserved";
                    }

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return false;
                    }
                };
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::ElementMembers::Flags field.
                static const char* name()
                {
                    return "flags";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::CfgGnssFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgGnssFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgGnssFields::List field.
        static const char* name()
        {
            return "list";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgGnss message.
struct CfgGnssCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgGnss message.
    static const char* name()
    {
        return "CFG-GNSS";
    }
};

} // namespace message

} // namespace cc_ublox