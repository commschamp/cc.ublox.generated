/// @file
/// @brief Contains definition of <b>"NAV-ODO (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavOdoPoll.
/// @tparam TOpt Extra options
/// @see @ref NavOdoPoll
/// @headerfile "ublox/message/NavOdoPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavOdoPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"NAV-ODO (Poll)"</b> message class.
/// @details
///     See @ref NavOdoPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavOdoPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavOdoPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavOdoPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOdo>,
        comms::option::def::FieldsImpl<typename NavOdoPollFields<TOpt>::All>,
        comms::option::def::MsgType<NavOdoPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavOdoPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOdo>,
            comms::option::def::FieldsImpl<typename NavOdoPollFields<TOpt>::All>,
            comms::option::def::MsgType<NavOdoPoll<TMsgBase, TOpt> >,
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
        return "NAV-ODO (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


