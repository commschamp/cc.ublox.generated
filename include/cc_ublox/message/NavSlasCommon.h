// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::NavSlas message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "cc_ublox/field/GnssIdCommon.h"
#include "cc_ublox/field/ItowCommon.h"
#include "cc_ublox/field/Res3Common.h"
#include "cc_ublox/field/Res4Common.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::NavSlas message.
/// @see cc_ublox::message::NavSlasFields
struct NavSlasFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::Itow field.
    using ItowCommon = cc_ublox::field::ItowCommon;

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::Version field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::Version field.
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
    ///     @ref cc_ublox::message::NavSlasFields::Reserved0 field.
    struct Reserved0Common : public cc_ublox::field::Res3Common
    {
        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::GmsLon field.
    struct GmsLonCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::GmsLon field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::GmsLon field.
        static const char* name()
        {
            return "gmsLon";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::GmsLat field.
    struct GmsLatCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::GmsLat field.
        using ValueType = std::int32_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::GmsLat field.
        static const char* name()
        {
            return "gmsLat";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::GmsCode field.
    struct GmsCodeCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::GmsCode field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::GmsCode field.
        static const char* name()
        {
            return "gmsCode";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::QzssSvId field.
    struct QzssSvIdCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::QzssSvId field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::QzssSvId field.
        static const char* name()
        {
            return "qzssSvId";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::ServiceFlags field.
    struct ServiceFlagsCommon
    {
        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ServiceFlags field.
        static const char* name()
        {
            return "serviceFlags";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::NavSlasFields::ServiceFlags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "gmsAvailable",
                "qzssSvAvailable",
                "testMode"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::Cnt field.
    struct CntCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::NavSlasFields::Cnt field.
        using ValueType = std::uint8_t;

        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::Cnt field.
        static const char* name()
        {
            return "cnt";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::NavSlasFields::List field.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::NavSlasFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::GnssId field.
            using GnssIdCommon = cc_ublox::field::GnssIdCommon;

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Svid field.
            struct SvidCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Svid field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Svid field.
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

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::SigId field.
            struct SigIdCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::SigId field.
                using ValueType = std::uint8_t;

                /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::SigId field.
                static const char* name()
                {
                    return "sigId";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public cc_ublox::field::Res4Common
            {
                /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
            };

            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Prc field.
            struct PrcCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Prc field.
                using ValueType = std::int16_t;

                /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ListMembers::ElementMembers::Prc field.
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
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::NavSlasFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref cc_ublox::message::NavSlasFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::NavSlasFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref cc_ublox::message::NavSlasFields::List field.
        static const char* name()
        {
            return "list";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::NavSlas message.
struct NavSlasCommon
{
    /// @brief Name of the @ref cc_ublox::message::NavSlas message.
    static const char* name()
    {
        return "NAV-SLAS";
    }
};

} // namespace message

} // namespace cc_ublox
