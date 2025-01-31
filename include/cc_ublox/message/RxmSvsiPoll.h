// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"RXM-SVSI (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/message/RxmSvsiPollCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref RxmSvsiPoll.
/// @tparam TOpt Extra options
/// @see @ref RxmSvsiPoll
/// @headerfile cc_ublox/message/RxmSvsiPoll.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct RxmSvsiPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"RXM-SVSI (Poll)"</b> message class.
/// @details
///     See @ref RxmSvsiPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/RxmSvsiPoll.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class RxmSvsiPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmSvsiPoll,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmSvsi>,
        comms::option::def::FieldsImpl<typename RxmSvsiPollFields<TOpt>::All>,
        comms::option::def::MsgType<RxmSvsiPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmSvsiPoll,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmSvsi>,
            comms::option::def::FieldsImpl<typename RxmSvsiPollFields<TOpt>::All>,
            comms::option::def::MsgType<RxmSvsiPoll<TMsgBase, TOpt> >,
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
        return cc_ublox::message::RxmSvsiPollCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
