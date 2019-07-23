/// @file
/// @brief Contains definition of <b>"CFG-MSG (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgMsgPoll.
/// @tparam TOpt Extra options
/// @see @ref CfgMsgPoll
/// @headerfile "ublox/message/CfgMsgPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgMsgPollFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        ublox::field::MsgId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId
    >;
};

/// @brief Definition of <b>"CFG-MSG (Poll)"</b> message class.
/// @details
///     See @ref CfgMsgPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgMsgPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgMsgPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgMsgPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
        comms::option::def::FieldsImpl<typename CfgMsgPollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgMsgPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgMsgPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
            comms::option::def::FieldsImpl<typename CfgMsgPollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgMsgPoll<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref CfgMsgPollFields::MsgId field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-MSG (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


