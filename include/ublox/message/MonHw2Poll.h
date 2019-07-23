/// @file
/// @brief Contains definition of <b>"MON-HW2 (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonHw2Poll.
/// @tparam TOpt Extra options
/// @see @ref MonHw2Poll
/// @headerfile "ublox/message/MonHw2Poll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonHw2PollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"MON-HW2 (Poll)"</b> message class.
/// @details
///     See @ref MonHw2PollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonHw2Poll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonHw2Poll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonHw2Poll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
        comms::option::def::FieldsImpl<typename MonHw2PollFields<TOpt>::All>,
        comms::option::def::MsgType<MonHw2Poll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonHw2Poll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
            comms::option::def::FieldsImpl<typename MonHw2PollFields<TOpt>::All>,
            comms::option::def::MsgType<MonHw2Poll<TMsgBase, TOpt> >,
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
        return "MON-HW2 (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


