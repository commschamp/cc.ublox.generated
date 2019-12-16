/// @file
/// @brief Contains definition of <b>"CFG-PRT (DDC)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
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
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPrtDdc.
/// @tparam TOpt Extra options
/// @see @ref CfgPrtDdc
/// @headerfile "ublox/message/CfgPrtDdc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtDdcFields
{
    /// @brief Definition of <b>"portId"</b> field.
    struct PortId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
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
                comms::option::def::FixedBitLength<1U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "reservedLow";
            }
            
        };
        
        /// @brief Definition of <b>"slaveAddr"</b> field.
        struct SlaveAddr : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<7U>,
                comms::option::def::ValidNumValueRange<7, 120>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "slaveAddr";
            }
            
        };
        
        /// @brief Definition of <b>"reservedHigh"</b> field.
        /// @details
        ///     Reserved field with 3 bytes length
        struct ReservedHigh : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::FixedBitLength<24U>,
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
               SlaveAddr,
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
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///     @li @b Field_reservedLow @b field_reservedLow() -
        ///         for ModeMembers::ReservedLow member field.
        ///     @li @b Field_slaveAddr @b field_slaveAddr() -
        ///         for ModeMembers::SlaveAddr member field.
        ///     @li @b Field_reservedHigh @b field_reservedHigh() -
        ///         for ModeMembers::ReservedHigh member field.
        COMMS_FIELD_MEMBERS_NAMES(
            reservedLow,
            slaveAddr,
            reservedHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "mode";
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
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
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
        PortId,
        Reserved1,
        TxReady,
        Mode,
        Reserved2,
        InProtoMask,
        OutProtoMask,
        CfgPrtFlags,
        Reserved3
    >;
};

/// @brief Definition of <b>"CFG-PRT (DDC)"</b> message class.
/// @details
///     See @ref CfgPrtDdcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPrtDdc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPrtDdc : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
        comms::option::def::FieldsImpl<typename CfgPrtDdcFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPrtDdc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPrt>,
            comms::option::def::FieldsImpl<typename CfgPrtDdcFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPrtDdc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_portId type and @b field_portId() fuction
    ///         for @ref CfgPrtDdcFields::PortId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref CfgPrtDdcFields::Reserved1 field.
    ///     @li @b Field_txReady type and @b field_txReady() fuction
    ///         for @ref CfgPrtDdcFields::TxReady field.
    ///     @li @b Field_mode type and @b field_mode() fuction
    ///         for @ref CfgPrtDdcFields::Mode field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref CfgPrtDdcFields::Reserved2 field.
    ///     @li @b Field_inProtoMask type and @b field_inProtoMask() fuction
    ///         for @ref CfgPrtDdcFields::InProtoMask field.
    ///     @li @b Field_outProtoMask type and @b field_outProtoMask() fuction
    ///         for @ref CfgPrtDdcFields::OutProtoMask field.
    ///     @li @b Field_cfgPrtFlags type and @b field_cfgPrtFlags() fuction
    ///         for @ref CfgPrtDdcFields::CfgPrtFlags field.
    ///     @li @b Field_reserved3 type and @b field_reserved3() fuction
    ///         for @ref CfgPrtDdcFields::Reserved3 field.
    COMMS_MSG_FIELDS_NAMES(
        portId,
        reserved1,
        txReady,
        mode,
        reserved2,
        inProtoMask,
        outProtoMask,
        cfgPrtFlags,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PRT (DDC)";
    }
    
    
};

} // namespace message

} // namespace ublox


