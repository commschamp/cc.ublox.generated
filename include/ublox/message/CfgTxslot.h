/// @file
/// @brief Contains definition of <b>"CFG-TXSLOT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgTxslotFields.
/// @see @ref CfgTxslotFields
/// @headerfile "ublox/message/CfgTxslot.h"
struct CfgTxslotFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTxslotFields::Enable field.
    struct EnableCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "DDC",
                "UART1",
                "UART2",
                "USB",
                "SPI"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTxslotFields::RefTp field.
    enum class RefTpVal : std::uint8_t
    {
        Timepulse = 0, ///< value @b Timepulse
        Timepulse2 = 1, ///< value @b Timepulse2
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTxslotFields::RefTp field.
    struct RefTpCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(RefTpVal val)
        {
            static const char* Map[] = {
                "Timepulse",
                "Timepulse2"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref CfgTxslot.
/// @tparam TOpt Extra options
/// @see @ref CfgTxslot
/// @headerfile "ublox/message/CfgTxslot.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTxslotFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"enable"</b> field.
    class Enable : public
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
        ///      @li @b BitIdx_DDC, @b getBitValue_DDC() and @b setBitValue_DDC().
        ///      @li @b BitIdx_UART1, @b getBitValue_UART1() and @b setBitValue_UART1().
        ///      @li @b BitIdx_UART2, @b getBitValue_UART2() and @b setBitValue_UART2().
        ///      @li @b BitIdx_USB, @b getBitValue_USB() and @b setBitValue_USB().
        ///      @li @b BitIdx_SPI, @b getBitValue_SPI() and @b setBitValue_SPI().
        COMMS_BITMASK_BITS_SEQ(
            DDC,
            UART1,
            UART2,
            USB,
            SPI
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "enable";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgTxslotFieldsCommon::EnableCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTxslotFields::RefTp field.
    using RefTpVal = ublox::message::CfgTxslotFieldsCommon::RefTpVal;
    
    /// @brief Definition of <b>"refTp"</b> field.
    /// @see @ref ublox::message::CfgTxslotFields::RefTpVal
    struct RefTp : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            RefTpVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "refTp";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(RefTpVal val)
        {
            return ublox::message::CfgTxslotFieldsCommon::RefTpCommon::valueName(val);
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
    
    /// @brief Scope for all the member fields of ///     @ref End list.
    struct EndMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"end"</b> field.
    struct End : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename EndMembers::Element,
            typename TOpt::message::CfgTxslotFields::End,
            comms::option::def::SequenceFixedSize<3U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "end";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Enable,
        RefTp,
        Reserved1,
        End
    >;
};

/// @brief Definition of <b>"CFG-TXSLOT"</b> message class.
/// @details
///     See @ref CfgTxslotFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTxslot.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTxslot : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgTxslot,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTxslot>,
        comms::option::def::FieldsImpl<typename CfgTxslotFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTxslot<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgTxslot,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTxslot>,
            comms::option::def::FieldsImpl<typename CfgTxslotFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTxslot<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgTxslotFields::Version field.
    ///     @li @b field_enable() for @ref CfgTxslotFields::Enable field.
    ///     @li @b field_refTp() for @ref CfgTxslotFields::RefTp field.
    ///     @li @b field_reserved1() for @ref CfgTxslotFields::Reserved1 field.
    ///     @li @b field_end() for @ref CfgTxslotFields::End field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        enable,
        refTp,
        reserved1,
        end
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TXSLOT";
    }
    
    
};

} // namespace message

} // namespace ublox


