/// @file
/// @brief Contains definition of <b>"CFG-INF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgInfFields.
/// @see @ref CfgInfFields
/// @headerfile "ublox/message/CfgInf.h"
struct CfgInfFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgInfFields::ProtocolId field.
    enum class ProtocolIdVal : std::uint8_t
    {
        UBX = 0, ///< value @b UBX
        NMEA = 1, ///< value @b NMEA
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgInfFields::ProtocolId field.
    struct ProtocolIdCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(ProtocolIdVal val)
        {
            static const char* Map[] = {
                "UBX",
                "NMEA"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgInfFields::InfMsgMask list.
    struct InfMsgMaskMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgInfFields::InfMsgMaskMembers::Element field.
        struct ElementCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "ERROR",
                    "WARNING",
                    "NOTICE",
                    "TEST",
                    "DEBUG"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref CfgInf.
/// @tparam TOpt Extra options
/// @see @ref CfgInf
/// @headerfile "ublox/message/CfgInf.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgInfFields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgInfFields::ProtocolId field.
    using ProtocolIdVal = ublox::message::CfgInfFieldsCommon::ProtocolIdVal;
    
    /// @brief Definition of <b>"protocolId"</b> field.
    /// @see @ref ublox::message::CfgInfFields::ProtocolIdVal
    struct ProtocolId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ProtocolIdVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "protocolId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ProtocolIdVal val)
        {
            return ublox::message::CfgInfFieldsCommon::ProtocolIdCommon::valueName(val);
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
    
    /// @brief Scope for all the member fields of ///     @ref InfMsgMask list.
    struct InfMsgMaskMembers
    {
        /// @brief Definition of <b>"element"</b> field.
        class Element : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
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
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::CfgInfFieldsCommon::InfMsgMaskMembersCommon::ElementCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"infMsgMask"</b> field.
    struct InfMsgMask : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename InfMsgMaskMembers::Element,
            typename TOpt::message::CfgInfFields::InfMsgMask,
            comms::option::def::SequenceFixedSize<6U>
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
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgInf : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgInf>,
        comms::option::def::FieldsImpl<typename CfgInfFields<TOpt>::All>,
        comms::option::def::MsgType<CfgInf<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgInf>,
            comms::option::def::FieldsImpl<typename CfgInfFields<TOpt>::All>,
            comms::option::def::MsgType<CfgInf<TMsgBase, TOpt> >,
            comms::option::def::HasName
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


