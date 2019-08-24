/// @file
/// @brief Contains definition of <b>"CFG-USB"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgUsbFields.
/// @see @ref CfgUsbFields
/// @headerfile "ublox/message/CfgUsb.h"
struct CfgUsbFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgUsbFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "reEnum",
                "powerMode"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgUsb.
/// @tparam TOpt Extra options
/// @see @ref CfgUsb
/// @headerfile "ublox/message/CfgUsb.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgUsbFields
{
    /// @brief Definition of <b>"vendorId"</b> field.
    struct VendorId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "vendorId";
        }
        
    };
    
    /// @brief Definition of <b>"productId"</b> field.
    struct ProductId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "productId";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
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
    
    /// @brief Definition of <b>"powerConsumption"</b> field.
    struct PowerConsumption : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsMilliamps
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "powerConsumption";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_reEnum, @b getBitValue_reEnum() and @b setBitValue_reEnum().
        ///      @li @b BitIdx_powerMode, @b getBitValue_powerMode() and @b setBitValue_powerMode().
        COMMS_BITMASK_BITS_SEQ(
            reEnum,
            powerMode
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgUsbFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"vendorString"</b> field.
    struct VendorString : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::CfgUsbFields::VendorString,
            comms::option::def::SequenceFixedSize<32U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "vendorString";
        }
        
    };
    
    /// @brief Definition of <b>"productString"</b> field.
    struct ProductString : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::CfgUsbFields::ProductString,
            comms::option::def::SequenceFixedSize<32U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "productString";
        }
        
    };
    
    /// @brief Definition of <b>"serialNumber"</b> field.
    struct SerialNumber : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::CfgUsbFields::SerialNumber,
            comms::option::def::SequenceFixedSize<32U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "serialNumber";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        VendorId,
        ProductId,
        Reserved1,
        Reserved2,
        PowerConsumption,
        Flags,
        VendorString,
        ProductString,
        SerialNumber
    >;
};

/// @brief Definition of <b>"CFG-USB"</b> message class.
/// @details
///     See @ref CfgUsbFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgUsb.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgUsb : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgUsb>,
        comms::option::def::FieldsImpl<typename CfgUsbFields<TOpt>::All>,
        comms::option::def::MsgType<CfgUsb<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgUsb>,
            comms::option::def::FieldsImpl<typename CfgUsbFields<TOpt>::All>,
            comms::option::def::MsgType<CfgUsb<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_vendorId() for @ref CfgUsbFields::VendorId field.
    ///     @li @b field_productId() for @ref CfgUsbFields::ProductId field.
    ///     @li @b field_reserved1() for @ref CfgUsbFields::Reserved1 field.
    ///     @li @b field_reserved2() for @ref CfgUsbFields::Reserved2 field.
    ///     @li @b field_powerConsumption() for @ref CfgUsbFields::PowerConsumption field.
    ///     @li @b field_flags() for @ref CfgUsbFields::Flags field.
    ///     @li @b field_vendorString() for @ref CfgUsbFields::VendorString field.
    ///     @li @b field_productString() for @ref CfgUsbFields::ProductString field.
    ///     @li @b field_serialNumber() for @ref CfgUsbFields::SerialNumber field.
    COMMS_MSG_FIELDS_ACCESS(
        vendorId,
        productId,
        reserved1,
        reserved2,
        powerConsumption,
        flags,
        vendorString,
        productString,
        serialNumber
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 108U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 108U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-USB";
    }
    
    
};

} // namespace message

} // namespace ublox


