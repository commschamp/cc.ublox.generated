/// @file
/// @brief Contains definition of <b>"CFG-PM2 (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPm2Poll.
/// @tparam TOpt Extra options
/// @see @ref CfgPm2Poll
/// @headerfile "ublox/message/CfgPm2Poll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPm2PollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-PM2 (Poll)"</b> message class.
/// @details
///     See @ref CfgPm2PollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPm2Poll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPm2Poll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgPm2Poll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPm2>,
        comms::option::def::FieldsImpl<typename CfgPm2PollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPm2Poll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgPm2Poll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPm2>,
            comms::option::def::FieldsImpl<typename CfgPm2PollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPm2Poll<TMsgBase, TOpt> >,
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
        return "CFG-PM2 (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


