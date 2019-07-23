/// @file
/// @brief Contains definition of <b>"CFG-TMODE3 (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTmode3Poll.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode3Poll
/// @headerfile "ublox/message/CfgTmode3Poll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmode3PollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-TMODE3 (Poll)"</b> message class.
/// @details
///     See @ref CfgTmode3PollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmode3Poll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmode3Poll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTmode3Poll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode3>,
        comms::option::def::FieldsImpl<typename CfgTmode3PollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode3Poll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTmode3Poll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode3>,
            comms::option::def::FieldsImpl<typename CfgTmode3PollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode3Poll<TMsgBase, TOpt> >,
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
        return "CFG-TMODE3 (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


