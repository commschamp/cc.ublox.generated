/// @file
/// @brief Contains definition of <b>"MGA-ACK"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaAck.
/// @tparam TOpt Extra options
/// @see @ref MgaAck
/// @headerfile "ublox/message/MgaAck.h"
template <typename TOpt = ublox::DefaultOptions>
struct MgaAckFields
{
    /// @brief Values enumerator for @ref Type field.
    enum class TypeVal : std::uint8_t
    {
        NotUsed = 0, ///< value @b NotUsed
        Accepted = 1, ///< value @b Accepted
        
    };
    
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            TypeVal,
            comms::option::ValidNumValueRange<0, 1>
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
    
    /// @brief Values enumerator for @ref InfoCode field.
    enum class InfoCodeVal : std::uint8_t
    {
        Accepted = 0, ///< value @b Accepted
        TimeNotKnown = 1, ///< value @b TimeNotKnown
        BadVersion = 2, ///< value @b BadVersion
        BadSize = 3, ///< value @b BadSize
        StorageError = 4, ///< value @b StorageError
        NotReady = 5, ///< value @b NotReady
        UnknownType = 6, ///< value @b UnknownType
        
    };
    
    /// @brief Definition of <b>"infoCode"</b> field.
    struct InfoCode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            InfoCodeVal,
            comms::option::ValidNumValueRange<0, 6>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "infoCode";
        }
        
    };
    
    /// @brief Definition of <b>"msgId"</b> field.
    struct MsgId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msgId";
        }
        
    };
    
    /// @brief Definition of <b>"msgPayloadStart"</b> field.
    struct MsgPayloadStart : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaAckFields::MsgPayloadStart,
            comms::option::SequenceFixedSize<4U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msgPayloadStart";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        InfoCode,
        MsgId,
        MsgPayloadStart
    >;
};

/// @brief Definition of <b>"MGA-ACK"</b> message class.
/// @details
///     See @ref MgaAckFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaAck.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class MgaAck : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaAck,
        comms::option::StaticNumIdImpl<ublox::MsgId_MgaAck>,
        comms::option::FieldsImpl<typename MgaAckFields<TOpt>::All>,
        comms::option::MsgType<MgaAck<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaAck,
            comms::option::StaticNumIdImpl<ublox::MsgId_MgaAck>,
            comms::option::FieldsImpl<typename MgaAckFields<TOpt>::All>,
            comms::option::MsgType<MgaAck<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaAckFields::Type field.
    ///     @li @b field_version() for @ref MgaAckFields::Version field.
    ///     @li @b field_infoCode() for @ref MgaAckFields::InfoCode field.
    ///     @li @b field_msgId() for @ref MgaAckFields::MsgId field.
    ///     @li @b field_msgPayloadStart() for @ref MgaAckFields::MsgPayloadStart field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        infoCode,
        msgId,
        msgPayloadStart
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-ACK";
    }
    
    
};

} // namespace message

} // namespace ublox


