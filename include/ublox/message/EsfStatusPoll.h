/// @file
/// @brief Contains definition of <b>"ESF-STATUS (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref EsfStatusPoll.
/// @tparam TOpt Extra options
/// @see @ref EsfStatusPoll
/// @headerfile "ublox/message/EsfStatusPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfStatusPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"ESF-STATUS (Poll)"</b> message class.
/// @details
///     See @ref EsfStatusPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfStatusPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfStatusPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfStatusPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfStatus>,
        comms::option::def::FieldsImpl<typename EsfStatusPollFields<TOpt>::All>,
        comms::option::def::MsgType<EsfStatusPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::EsfStatusPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfStatus>,
            comms::option::def::FieldsImpl<typename EsfStatusPollFields<TOpt>::All>,
            comms::option::def::MsgType<EsfStatusPoll<TMsgBase, TOpt> >,
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
        return "ESF-STATUS (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


