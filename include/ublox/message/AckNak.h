/// @file
/// @brief Contains definition of <b>"ACK-NAK"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AckNak.
/// @tparam TOpt Extra options
/// @see @ref AckNak
/// @headerfile "ublox/message/AckNak.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AckNakFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        ublox::field::MsgId<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId
    >;
};

/// @brief Definition of <b>"ACK-NAK"</b> message class.
/// @details
///     See @ref AckNakFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AckNak.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AckNak : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AckNak,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AckNak>,
        comms::option::def::FieldsImpl<typename AckNakFields<TOpt>::All>,
        comms::option::def::MsgType<AckNak<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AckNak,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AckNak>,
            comms::option::def::FieldsImpl<typename AckNakFields<TOpt>::All>,
            comms::option::def::MsgType<AckNak<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref AckNakFields::MsgId field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "ACK-NAK";
    }
    
    
};

} // namespace message

} // namespace ublox


