/// @file
/// @brief Contains definition of <b>"CFG-PRT (UART)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgPrtFlags.h"
#include "ublox/field/CfgPrtInProtoMask.h"
#include "ublox/field/CfgPrtOutProtoMask.h"
#include "ublox/field/CfgPrtTxReady.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgPrtUartFields.
/// @see @ref CfgPrtUartFields
/// @headerfile "ublox/message/CfgPrtUart.h"
struct CfgPrtUartFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgPrtUartFields::Mode bitfield.
    struct ModeMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
        enum class CharLenVal : std::uint8_t
        {
            Bits5 = 0, ///< value <b>5 bits</b>.
            Bits6 = 1, ///< value <b>6 bits</b>.
            Bits7 = 2, ///< value <b>7 bits</b>.
            Bits8 = 3, ///< value <b>8 bits</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
        struct CharLenCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(CharLenVal val)
            {
                static const char* Map[] = {
                    "5 bits",
                    "6 bits",
                    "7 bits",
                    "8 bits"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
        enum class ParityVal : std::uint8_t
        {
            Even = 0, ///< value @b Even
            Odd = 1, ///< value @b Odd
            None = 4, ///< value @b None
            None2 = 5, ///< value <b>None (2)</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 5, ///< Last defined value.
            ValuesLimit = 6, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
        struct ParityCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(ParityVal val)
            {
                static const char* Map[] = {
                    "Even",
                    "Odd",
                    nullptr,
                    nullptr,
                    "None",
                    "None (2)"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
        enum class NStopBitsVal : std::uint8_t
        {
            Bits_1 = 0, ///< value <b>1 bit</b>.
            Bits_1_5 = 1, ///< value <b>1.5 bits</b>.
            Bits_2 = 2, ///< value <b>2 bits</b>.
            Bits_0_5 = 3, ///< value <b>0.5 bit</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
        struct NStopBitsCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(NStopBitsVal val)
            {
                static const char* Map[] = {
                    "1 bit",
                    "1.5 bits",
                    "2 bits",
                    "0.5 bit"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref CfgPrtUart.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtUart
/// @headerfile "ublox/message/CfgPrtUart.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtUartFields
{
    /// @brief Definition of <b>"portId"</b> field.
    struct PortId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "portId";
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
    
    /// @brief Definition of <b>"txReady"</b> field.
    struct TxReady : public
        ublox::field::CfgPrtTxReady<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "txReady";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Mode bitfield.
    struct ModeMembers
    {
        /// @brief Definition of <b>"reservedLow"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct ReservedLow : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "reservedLow";
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLen field.
        using CharLenVal = ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenVal;
        
        /// @brief Definition of <b>"charLen"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFields::ModeMembers::CharLenVal
        struct CharLen : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                CharLenVal,
                comms::option::def::DefaultNumValue<3>,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "charLen";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(CharLenVal val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::CharLenCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"reservedMid"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct ReservedMid : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<1U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "reservedMid";
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::Parity field.
        using ParityVal = ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityVal;
        
        /// @brief Definition of <b>"parity"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFields::ModeMembers::ParityVal
        struct Parity : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ParityVal,
                comms::option::def::DefaultNumValue<4>,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 1>,
                comms::option::def::ValidNumValueRange<4, 5>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "parity";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ParityVal val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::ParityCommon::valueName(val);
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBits field.
        using NStopBitsVal = ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsVal;
        
        /// @brief Definition of <b>"nStopBits"</b> field.
        /// @see @ref ublox::message::CfgPrtUartFields::ModeMembers::NStopBitsVal
        struct NStopBits : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                NStopBitsVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "nStopBits";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(NStopBitsVal val)
            {
                return ublox::message::CfgPrtUartFieldsCommon::ModeMembersCommon::NStopBitsCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"reservedHigh"</b> field.
        /// @details
        ///     Reserved field with 3 bytes length
        struct ReservedHigh : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::FixedBitLength<18U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "reservedHigh";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               ReservedLow,
               CharLen,
               ReservedMid,
               Parity,
               NStopBits,
               ReservedHigh
            >;
    };
    
    /// @brief Definition of <b>"mode"</b> field.
    class Mode : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ModeMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ModeMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_reservedLow() - for ModeMembers::ReservedLow member field.
        ///     @li @b field_charLen() - for ModeMembers::CharLen member field.
        ///     @li @b field_reservedMid() - for ModeMembers::ReservedMid member field.
        ///     @li @b field_parity() - for ModeMembers::Parity member field.
        ///     @li @b field_nStopBits() - for ModeMembers::NStopBits member field.
        ///     @li @b field_reservedHigh() - for ModeMembers::ReservedHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            reservedLow,
            charLen,
            reservedMid,
            parity,
            nStopBits,
            reservedHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "mode";
        }
        
    };
    
    /// @brief Definition of <b>"baudRate"</b> field.
    struct BaudRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::DefaultNumValue<115200L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "baudRate";
        }
        
    };
    
    /// @brief Definition of <b>"inProtoMask"</b> field.
    struct InProtoMask : public
        ublox::field::CfgPrtInProtoMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "inProtoMask";
        }
        
    };
    
    /// @brief Definition of <b>"outProtoMask"</b> field.
    struct OutProtoMask : public
        ublox::field::CfgPrtOutProtoMask<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "outProtoMask";
        }
        
    };
    
    /// @brief Definition of <b>"cfgPrtFlags"</b> field.
    using CfgPrtFlags =
        ublox::field::CfgPrtFlags<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PortId,
        Reserved1,
        TxReady,
        Mode,
        BaudRate,
        InProtoMask,
        OutProtoMask,
        CfgPrtFlags,
        Reserved2
    >;
};

/// @brief Definition of <b>"CFG-PRT (UART)"</b> message class.
/// @details
///     See @ref CfgPrtUartFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtUart.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtUart : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtUartFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtUart<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtUartFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtUart<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_portId() for @ref CfgPrtUartFields::PortId field.
    ///     @li @b field_reserved1() for @ref CfgPrtUartFields::Reserved1 field.
    ///     @li @b field_txReady() for @ref CfgPrtUartFields::TxReady field.
    ///     @li @b field_mode() for @ref CfgPrtUartFields::Mode field.
    ///     @li @b field_baudRate() for @ref CfgPrtUartFields::BaudRate field.
    ///     @li @b field_inProtoMask() for @ref CfgPrtUartFields::InProtoMask field.
    ///     @li @b field_outProtoMask() for @ref CfgPrtUartFields::OutProtoMask field.
    ///     @li @b field_cfgPrtFlags() for @ref CfgPrtUartFields::CfgPrtFlags field.
    ///     @li @b field_reserved2() for @ref CfgPrtUartFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        portId,
        reserved1,
        txReady,
        mode,
        baudRate,
        inProtoMask,
        outProtoMask,
        cfgPrtFlags,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PRT (UART)";
    }
    
    
};

} // namespace message

} // namespace ublox


