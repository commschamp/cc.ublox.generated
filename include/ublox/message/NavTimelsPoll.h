/// @file
/// @brief Contains definition of <b>"NAV-TIMELS (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavTimelsPoll.
/// @tparam TOpt Extra options
/// @see @ref NavTimelsPoll
/// @headerfile "ublox/message/NavTimelsPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimelsPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"NAV-TIMELS (Poll)"</b> message class.
/// @details
///     See @ref NavTimelsPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimelsPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimelsPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimelsPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimels>,
        comms::option::def::FieldsImpl<typename NavTimelsPollFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimelsPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimelsPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimels>,
            comms::option::def::FieldsImpl<typename NavTimelsPollFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimelsPoll<TMsgBase, TOpt> >,
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
        return "NAV-TIMELS (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


