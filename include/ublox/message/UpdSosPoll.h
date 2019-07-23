/// @file
/// @brief Contains definition of <b>"UPD-SOS (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref UpdSosPoll.
/// @tparam TOpt Extra options
/// @see @ref UpdSosPoll
/// @headerfile "ublox/message/UpdSosPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct UpdSosPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"UPD-SOS (Poll)"</b> message class.
/// @details
///     See @ref UpdSosPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/UpdSosPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class UpdSosPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::UpdSosPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
        comms::option::def::FieldsImpl<typename UpdSosPollFields<TOpt>::All>,
        comms::option::def::MsgType<UpdSosPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::UpdSosPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
            comms::option::def::FieldsImpl<typename UpdSosPollFields<TOpt>::All>,
            comms::option::def::MsgType<UpdSosPoll<TMsgBase, TOpt> >,
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
        return "UPD-SOS (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


