/// @file
/// @brief Contains definition of <b>"NAV-AOPSTATUS (ublox-8)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavAopstatusUblox8Fields.
/// @see @ref NavAopstatusUblox8Fields
/// @headerfile "ublox/message/NavAopstatusUblox8.h"
struct NavAopstatusUblox8FieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavAopstatusUblox8Fields::AopCfg field.
    struct AopCfgCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "useAOP"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref NavAopstatusUblox8.
/// @tparam TOpt Extra options
/// @see @ref NavAopstatusUblox8
/// @headerfile "ublox/message/NavAopstatusUblox8.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavAopstatusUblox8Fields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"aopCfg"</b> field.
    class AopCfg : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_useAOP, @b getBitValue_useAOP() and @b setBitValue_useAOP().
        COMMS_BITMASK_BITS_SEQ(
            useAOP
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "aopCfg";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavAopstatusUblox8FieldsCommon::AopCfgCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    struct Status : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "status";
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
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        AopCfg,
        Status,
        Reserved1,
        Reserved2,
        Reserved3
    >;
};

/// @brief Definition of <b>"NAV-AOPSTATUS (ublox-8)"</b> message class.
/// @details
///     See @ref NavAopstatusUblox8Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavAopstatusUblox8.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavAopstatusUblox8 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavAopstatusUblox8,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAopstatus>,
        comms::option::def::FieldsImpl<typename NavAopstatusUblox8Fields<TOpt>::All>,
        comms::option::def::MsgType<NavAopstatusUblox8<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavAopstatusUblox8,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAopstatus>,
            comms::option::def::FieldsImpl<typename NavAopstatusUblox8Fields<TOpt>::All>,
            comms::option::def::MsgType<NavAopstatusUblox8<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavAopstatusUblox8Fields::Itow field.
    ///     @li @b field_aopCfg() for @ref NavAopstatusUblox8Fields::AopCfg field.
    ///     @li @b field_status() for @ref NavAopstatusUblox8Fields::Status field.
    ///     @li @b field_reserved1() for @ref NavAopstatusUblox8Fields::Reserved1 field.
    ///     @li @b field_reserved2() for @ref NavAopstatusUblox8Fields::Reserved2 field.
    ///     @li @b field_reserved3() for @ref NavAopstatusUblox8Fields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        aopCfg,
        status,
        reserved1,
        reserved2,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-AOPSTATUS (ublox-8)";
    }
    
    
};

} // namespace message

} // namespace ublox


