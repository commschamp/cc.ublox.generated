// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"MON-IO (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/message/MonIoPollCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MonIoPoll.
/// @tparam TOpt Extra options
/// @see @ref MonIoPoll
/// @headerfile cc_ublox/message/MonIoPoll.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MonIoPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"MON-IO (Poll)"</b> message class.
/// @details
///     See @ref MonIoPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MonIoPoll.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MonIoPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonIoPoll,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MonIo>,
        comms::option::def::FieldsImpl<typename MonIoPollFields<TOpt>::All>,
        comms::option::def::MsgType<MonIoPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonIoPoll,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MonIo>,
            comms::option::def::FieldsImpl<typename MonIoPollFields<TOpt>::All>,
            comms::option::def::MsgType<MonIoPoll<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MonIoPollCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox