/// @file
/// @brief Contains definition of <b>"CFG-TP5 (Poll Select)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgTp5TpIdx.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgTp5PollSelect.
/// @tparam TOpt Extra options
/// @see @ref CfgTp5PollSelect
/// @headerfile "ublox/message/CfgTp5PollSelect.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTp5PollSelectFields
{
    /// @brief Definition of <b>"tpIdx"</b> field.
    using TpIdx =
        ublox::field::CfgTp5TpIdx<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TpIdx
    >;
};

/// @brief Definition of <b>"CFG-TP5 (Poll Select)"</b> message class.
/// @details
///     See @ref CfgTp5PollSelectFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTp5PollSelect.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTp5PollSelect : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTp5PollSelect,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp5>,
        comms::option::def::FieldsImpl<typename CfgTp5PollSelectFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTp5PollSelect<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTp5PollSelect,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp5>,
            comms::option::def::FieldsImpl<typename CfgTp5PollSelectFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTp5PollSelect<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_tpIdx() for @ref CfgTp5PollSelectFields::TpIdx field.
    COMMS_MSG_FIELDS_ACCESS(
        tpIdx
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TP5 (Poll Select)";
    }
    
    
};

} // namespace message

} // namespace ublox


