// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::AckAck message and its fields.

#pragma once

#include "cc_ublox/field/MsgIdCommon.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::AckAck message.
/// @see cc_ublox::message::AckAckFields
struct AckAckFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::AckAckFields::MsgId field.
    using MsgIdCommon = cc_ublox::field::MsgIdCommon;
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::AckAck message.
struct AckAckCommon
{
    /// @brief Name of the @ref cc_ublox::message::AckAck message.
    static const char* name()
    {
        return "ACK-ACK";
    }
};

} // namespace message

} // namespace cc_ublox