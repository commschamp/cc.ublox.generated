// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"CFG-TMODE2 (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/message/CfgTmode2PollCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref CfgTmode2Poll.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode2Poll
/// @headerfile cc_ublox/message/CfgTmode2Poll.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct CfgTmode2PollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-TMODE2 (Poll)"</b> message class.
/// @details
///     See @ref CfgTmode2PollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/CfgTmode2Poll.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class CfgTmode2Poll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTmode2Poll,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgTmode2>,
        comms::option::def::FieldsImpl<typename CfgTmode2PollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode2Poll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTmode2Poll,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgTmode2>,
            comms::option::def::FieldsImpl<typename CfgTmode2PollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode2Poll<TMsgBase, TOpt> >,
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
        return cc_ublox::message::CfgTmode2PollCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox