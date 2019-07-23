/// @file
/// @brief Contains definition of <b>"NAV-POSLLH (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavPosllhPoll.
/// @tparam TOpt Extra options
/// @see @ref NavPosllhPoll
/// @headerfile "ublox/message/NavPosllhPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavPosllhPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"NAV-POSLLH (Poll)"</b> message class.
/// @details
///     See @ref NavPosllhPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavPosllhPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavPosllhPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavPosllhPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosllh>,
        comms::option::def::FieldsImpl<typename NavPosllhPollFields<TOpt>::All>,
        comms::option::def::MsgType<NavPosllhPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavPosllhPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosllh>,
            comms::option::def::FieldsImpl<typename NavPosllhPollFields<TOpt>::All>,
            comms::option::def::MsgType<NavPosllhPoll<TMsgBase, TOpt> >,
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
        return "NAV-POSLLH (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


