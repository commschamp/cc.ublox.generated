// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"RXM-RAW (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/message/RxmRawPollCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref RxmRawPoll.
/// @tparam TOpt Extra options
/// @see @ref RxmRawPoll
/// @headerfile cc_ublox/message/RxmRawPoll.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct RxmRawPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"RXM-RAW (Poll)"</b> message class.
/// @details
///     See @ref RxmRawPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/RxmRawPoll.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class RxmRawPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRawPoll,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmRaw>,
        comms::option::def::FieldsImpl<typename RxmRawPollFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRawPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRawPoll,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmRaw>,
            comms::option::def::FieldsImpl<typename RxmRawPollFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRawPoll<TMsgBase, TOpt> >,
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
        return cc_ublox::message::RxmRawPollCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox