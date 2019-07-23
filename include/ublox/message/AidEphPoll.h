/// @file
/// @brief Contains definition of <b>"AID-EPH (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidEphPoll.
/// @tparam TOpt Extra options
/// @see @ref AidEphPoll
/// @headerfile "ublox/message/AidEphPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidEphPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"AID-EPH (Poll)"</b> message class.
/// @details
///     See @ref AidEphPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidEphPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidEphPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidEphPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidEph>,
        comms::option::def::FieldsImpl<typename AidEphPollFields<TOpt>::All>,
        comms::option::def::MsgType<AidEphPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidEphPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidEph>,
            comms::option::def::FieldsImpl<typename AidEphPollFields<TOpt>::All>,
            comms::option::def::MsgType<AidEphPoll<TMsgBase, TOpt> >,
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
        return "AID-EPH (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


