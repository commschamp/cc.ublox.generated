/// @file
/// @brief Contains definition of <b>"CFG-INF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgInf.
/// @tparam TOpt Extra options
/// @see @ref CfgInf
/// @headerfile "ublox/message/CfgInf.h"
template <typename TOpt = ublox::DefaultOptions>
struct CfgInfFields
{
    /// @brief Values enumerator for @ref ublox::message::CfgInfFields::ProtocolId field.
    enum class ProtocolIdVal : std::uint8_t
    {
        UBX = 0, ///< value @b UBX
        NMEA = 1, ///< value @b NMEA
        
    };
    
    /// @brief Definition of <b>"protocolId"</b> field.
    /// @see @ref ublox::message::CfgInfFields::ProtocolIdVal
    struct ProtocolId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ProtocolIdVal,
            comms::option::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "protocolId";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res3<
           TOpt
       >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref InfMsgMask list.
    struct InfMsgMaskMembers
    {
        /// @brief Definition of <b>"element"</b> field.
        class Element : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedLength<1U>,
                comms::option::BitmaskReservedBits<0xE0U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::FixedLength<1U>,
                    comms::option::BitmaskReservedBits<0xE0U, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_ERROR, @b getBitValue_ERROR() and @b setBitValue_ERROR().
            ///      @li @b BitIdx_WARNING, @b getBitValue_WARNING() and @b setBitValue_WARNING().
            ///      @li @b BitIdx_NOTICE, @b getBitValue_NOTICE() and @b setBitValue_NOTICE().
            ///      @li @b BitIdx_TEST, @b getBitValue_TEST() and @b setBitValue_TEST().
            ///      @li @b BitIdx_DEBUG, @b getBitValue_DEBUG() and @b setBitValue_DEBUG().
            COMMS_BITMASK_BITS_SEQ(
                ERROR,
                WARNING,
                NOTICE,
                TEST,
                DEBUG
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"infMsgMask"</b> field.
    struct InfMsgMask : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename InfMsgMaskMembers::Element,
            typename TOpt::message::CfgInfFields::InfMsgMask,
            comms::option::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "infMsgMask";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        ProtocolId,
        Reserved1,
        InfMsgMask
    >;
};

/// @brief Definition of <b>"CFG-INF"</b> message class.
/// @details
///     See @ref CfgInfFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgInf.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class CfgInf : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<ublox::MsgId_CfgInf>,
        comms::option::FieldsImpl<typename CfgInfFields<TOpt>::All>,
        comms::option::MsgType<CfgInf<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<ublox::MsgId_CfgInf>,
            comms::option::FieldsImpl<typename CfgInfFields<TOpt>::All>,
            comms::option::MsgType<CfgInf<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_protocolId() for @ref CfgInfFields::ProtocolId field.
    ///     @li @b field_reserved1() for @ref CfgInfFields::Reserved1 field.
    ///     @li @b field_infMsgMask() for @ref CfgInfFields::InfMsgMask field.
    COMMS_MSG_FIELDS_ACCESS(
        protocolId,
        reserved1,
        infMsgMask
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 10U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 10U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-INF";
    }
    
    
};

} // namespace message

} // namespace ublox


