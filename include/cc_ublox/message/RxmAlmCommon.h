// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::RxmAlm message and its fields.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::RxmAlm message.
/// @see cc_ublox::message::RxmAlmFields
struct RxmAlmFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmAlmFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmAlmFields::Svid field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::RxmAlmFields::Svid field.
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
    ///     @ref cc_ublox::message::RxmAlmFields::Week field.
    struct WeekCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::RxmAlmFields::Week field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::RxmAlmFields::Week field.
        static const char* name()
        {
            return "week";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::RxmAlmFields::Dwrd field.
    struct DwrdMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::RxmAlmFields::DwrdMembers::List field.
        struct ListMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref cc_ublox::message::RxmAlmFields::DwrdMembers::ListMembers::Element field.
            struct ElementCommon
            {
                /// @brief Re-definition of the value type used by
                ///     cc_ublox::message::RxmAlmFields::DwrdMembers::ListMembers::Element field.
                using ValueType = std::uint32_t;

                /// @brief Name of the @ref cc_ublox::message::RxmAlmFields::DwrdMembers::ListMembers::Element field.
                static const char* name()
                {
                    return "element";
                }

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return false;
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::RxmAlmFields::DwrdMembers::List field.
        struct ListCommon
        {
            /// @brief Name of the @ref cc_ublox::message::RxmAlmFields::DwrdMembers::List field.
            static const char* name()
            {
                return "dwrd";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::RxmAlmFields::Dwrd field.
    struct DwrdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::RxmAlmFields::Dwrd field.
        static const char* name()
        {
            return "dwrd";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::RxmAlm message.
struct RxmAlmCommon
{
    /// @brief Name of the @ref cc_ublox::message::RxmAlm message.
    static const char* name()
    {
        return "RXM-ALM";
    }
};

} // namespace message

} // namespace cc_ublox