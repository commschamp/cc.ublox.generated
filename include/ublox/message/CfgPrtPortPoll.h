/// @file
/// @brief Contains definition of <b>"CFG-PRT (Port Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgPrtPortId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPrtPortPoll.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtPortPoll
/// @headerfile "ublox/message/CfgPrtPortPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtPortPollFields
{
    /// @brief Definition of <b>"portId"</b> field.
    struct PortId : public
        ublox::field::CfgPrtPortId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "portId";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PortId
    >;
};

/// @brief Definition of <b>"CFG-PRT (Port Poll)"</b> message class.
/// @details
///     See @ref CfgPrtPortPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtPortPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtPortPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgPrtPortPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtPortPollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtPortPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgPrtPortPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtPortPollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtPortPoll<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_portId() for @ref CfgPrtPortPollFields::PortId field.
    COMMS_MSG_FIELDS_ACCESS(
        portId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PRT (Port Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


