// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::AidEph message and its fields.

#pragma once

#include <cstdint>

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::AidEph message.
/// @see cc_ublox::message::AidEphFields
struct AidEphFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidEphFields::Svid field.
    struct SvidCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidEphFields::Svid field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::AidEphFields::Svid field.
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
    ///     @ref cc_ublox::message::AidEphFields::How field.
    struct HowCommon
    {
        /// @brief Re-definition of the value type used by
        ///     cc_ublox::message::AidEphFields::How field.
        using ValueType = std::uint32_t;

        /// @brief Name of the @ref cc_ublox::message::AidEphFields::How field.
        static const char* name()
        {
            return "how";
        }

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return false;
        }
    };

    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref cc_ublox::message::AidEphFields::Sfd field.
    struct SfdMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref cc_ublox::message::AidEphFields::SfdMembers::Lists field.
        struct ListsMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1d field.
            struct Sf1dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
                    using ValueType = std::uint32_t;

                    /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1dMembers::Element field.
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
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1d field.
            struct Sf1dCommon
            {
                /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1d field.
                static const char* name()
                {
                    return "sf1d";
                }
            };

            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2d field.
            struct Sf2dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
                    using ValueType = std::uint32_t;

                    /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2dMembers::Element field.
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
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2d field.
            struct Sf2dCommon
            {
                /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2d field.
                static const char* name()
                {
                    return "sf2d";
                }
            };

            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3d field.
            struct Sf3dMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
                    using ValueType = std::uint32_t;

                    /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3dMembers::Element field.
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
            ///     @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3d field.
            struct Sf3dCommon
            {
                /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3d field.
                static const char* name()
                {
                    return "sf3d";
                }
            };
        };

        /// @brief Common types and functions for
        ///     @ref cc_ublox::message::AidEphFields::SfdMembers::Lists field.
        struct ListsCommon
        {
            /// @brief Name of the @ref cc_ublox::message::AidEphFields::SfdMembers::Lists field.
            static const char* name()
            {
                return "";
            }
        };
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AidEphFields::Sfd field.
    struct SfdCommon
    {
        /// @brief Name of the @ref cc_ublox::message::AidEphFields::Sfd field.
        static const char* name()
        {
            return "";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::AidEph message.
struct AidEphCommon
{
    /// @brief Name of the @ref cc_ublox::message::AidEph message.
    static const char* name()
    {
        return "AID-EPH";
    }
};

} // namespace message

} // namespace cc_ublox