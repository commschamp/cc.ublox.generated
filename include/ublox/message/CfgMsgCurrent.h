/// @file
/// @brief Contains definition of <b>"CFG-MSG (Current)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgMsgCurrent.
/// @tparam TOpt Extra options
/// @see @ref CfgMsgCurrent
/// @headerfile "ublox/message/CfgMsgCurrent.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgMsgCurrentFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        ublox::field::MsgId<
            TOpt
        >;
    
    /// @brief Definition of <b>"rate"</b> field.
    struct Rate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "rate";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId,
        Rate
    >;
};

/// @brief Definition of <b>"CFG-MSG (Current)"</b> message class.
/// @details
///     See @ref CfgMsgCurrentFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgMsgCurrent.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgMsgCurrent : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
        comms::option::def::FieldsImpl<typename CfgMsgCurrentFields<TOpt>::All>,
        comms::option::def::MsgType<CfgMsgCurrent<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
            comms::option::def::FieldsImpl<typename CfgMsgCurrentFields<TOpt>::All>,
            comms::option::def::MsgType<CfgMsgCurrent<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref CfgMsgCurrentFields::MsgId field.
    ///     @li @b field_rate() for @ref CfgMsgCurrentFields::Rate field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId,
        rate
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 3U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 3U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-MSG (Current)";
    }
    
    
};

} // namespace message

} // namespace ublox


