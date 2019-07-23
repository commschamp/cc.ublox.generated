/// @file
/// @brief Contains definition of <b>"NAV-HPPOSLLH (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavHpposllhPoll.
/// @tparam TOpt Extra options
/// @see @ref NavHpposllhPoll
/// @headerfile "ublox/message/NavHpposllhPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavHpposllhPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"NAV-HPPOSLLH (Poll)"</b> message class.
/// @details
///     See @ref NavHpposllhPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavHpposllhPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavHpposllhPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavHpposllhPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
        comms::option::def::FieldsImpl<typename NavHpposllhPollFields<TOpt>::All>,
        comms::option::def::MsgType<NavHpposllhPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavHpposllhPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
            comms::option::def::FieldsImpl<typename NavHpposllhPollFields<TOpt>::All>,
            comms::option::def::MsgType<NavHpposllhPoll<TMsgBase, TOpt> >,
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
        return "NAV-HPPOSLLH (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


