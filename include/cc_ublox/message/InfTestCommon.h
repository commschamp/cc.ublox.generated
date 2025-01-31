// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::InfTest message and its fields.

#pragma once

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::InfTest message.
/// @see cc_ublox::message::InfTestFields
struct InfTestFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::InfTestFields::Str field.
    struct StrCommon
    {
        /// @brief Name of the @ref cc_ublox::message::InfTestFields::Str field.
        static const char* name()
        {
            return "str";
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::InfTest message.
struct InfTestCommon
{
    /// @brief Name of the @ref cc_ublox::message::InfTest message.
    static const char* name()
    {
        return "INF-TEST";
    }
};

} // namespace message

} // namespace cc_ublox
