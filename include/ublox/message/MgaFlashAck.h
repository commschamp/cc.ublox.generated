/// @file
/// @brief Contains definition of <b>"MGA-FLASH-ACK"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaFlashAck.
/// @tparam TOpt Extra options
/// @see @ref MgaFlashAck
/// @headerfile "ublox/message/MgaFlashAck.h"
template <typename TOpt = ublox::DefaultOptions>
struct MgaFlashAckFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::FailOnInvalid<>,
            comms::option::DefaultNumValue<3>,
            comms::option::ValidNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Values enumerator for @ref Ack field.
    enum class AckVal : std::uint8_t
    {
        Ack = 0, ///< value @b Ack
        NakRetransmit = 1, ///< value @b NakRetransmit
        NakGiveUp = 2, ///< value @b NakGiveUp
        
    };
    
    /// @brief Definition of <b>"ack"</b> field.
    struct Ack : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            AckVal,
            comms::option::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ack";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
           TOpt
       >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"sequence"</b> field.
    struct Sequence : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sequence";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Ack,
        Reserved1,
        Sequence
    >;
};

/// @brief Definition of <b>"MGA-FLASH-ACK"</b> message class.
/// @details
///     See @ref MgaFlashAckFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaFlashAck.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class MgaFlashAck : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaFlashAck,
        comms::option::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
        comms::option::FieldsImpl<typename MgaFlashAckFields<TOpt>::All>,
        comms::option::MsgType<MgaFlashAck<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaFlashAck,
            comms::option::StaticNumIdImpl<ublox::MsgId_MgaFlash>,
            comms::option::FieldsImpl<typename MgaFlashAckFields<TOpt>::All>,
            comms::option::MsgType<MgaFlashAck<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaFlashAckFields::Type field.
    ///     @li @b field_version() for @ref MgaFlashAckFields::Version field.
    ///     @li @b field_ack() for @ref MgaFlashAckFields::Ack field.
    ///     @li @b field_reserved1() for @ref MgaFlashAckFields::Reserved1 field.
    ///     @li @b field_sequence() for @ref MgaFlashAckFields::Sequence field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        ack,
        reserved1,
        sequence
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-FLASH-ACK";
    }
    
    
};

} // namespace message

} // namespace ublox


