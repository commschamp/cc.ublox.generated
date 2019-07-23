/// @file
/// @brief Contains definition of <b>"MON-VER (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonVerPoll.
/// @tparam TOpt Extra options
/// @see @ref MonVerPoll
/// @headerfile "ublox/message/MonVerPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonVerPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"MON-VER (Poll)"</b> message class.
/// @details
///     See @ref MonVerPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonVerPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonVerPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonVerPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonVer>,
        comms::option::def::FieldsImpl<typename MonVerPollFields<TOpt>::All>,
        comms::option::def::MsgType<MonVerPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonVerPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonVer>,
            comms::option::def::FieldsImpl<typename MonVerPollFields<TOpt>::All>,
            comms::option::def::MsgType<MonVerPoll<TMsgBase, TOpt> >,
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
        return "MON-VER (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


