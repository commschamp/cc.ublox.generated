/// @file
/// @brief Contains definition of <b>"MON-IO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonIo.
/// @tparam TOpt Extra options
/// @see @ref MonIo
/// @headerfile "ublox/message/MonIo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonIoFields
{
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"rxBytes"</b> field.
            struct RxBytes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "rxBytes";
                }
                
            };
            
            /// @brief Definition of <b>"txBytes"</b> field.
            struct TxBytes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "txBytes";
                }
                
            };
            
            /// @brief Definition of <b>"parityErrs"</b> field.
            struct ParityErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "parityErrs";
                }
                
            };
            
            /// @brief Definition of <b>"framingErrs"</b> field.
            struct FramingErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "framingErrs";
                }
                
            };
            
            /// @brief Definition of <b>"overrunErrs"</b> field.
            struct OverrunErrs : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "overrunErrs";
                }
                
            };
            
            /// @brief Definition of <b>"breakCond"</b> field.
            struct BreakCond : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "breakCond";
                }
                
            };
            
            /// @brief Definition of <b>"rxBusy"</b> field.
            struct RxBusy : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "rxBusy";
                }
                
            };
            
            /// @brief Definition of <b>"txBusy"</b> field.
            struct TxBusy : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "txBusy";
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
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   RxBytes,
                   TxBytes,
                   ParityErrs,
                   FramingErrs,
                   OverrunErrs,
                   BreakCond,
                   RxBusy,
                   TxBusy,
                   Reserved1
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_rxBytes() - for ElementMembers::RxBytes member field.
            ///     @li @b field_txBytes() - for ElementMembers::TxBytes member field.
            ///     @li @b field_parityErrs() - for ElementMembers::ParityErrs member field.
            ///     @li @b field_framingErrs() - for ElementMembers::FramingErrs member field.
            ///     @li @b field_overrunErrs() - for ElementMembers::OverrunErrs member field.
            ///     @li @b field_breakCond() - for ElementMembers::BreakCond member field.
            ///     @li @b field_rxBusy() - for ElementMembers::RxBusy member field.
            ///     @li @b field_txBusy() - for ElementMembers::TxBusy member field.
            ///     @li @b field_reserved1() - for ElementMembers::Reserved1 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                rxBytes,
                txBytes,
                parityErrs,
                framingErrs,
                overrunErrs,
                breakCond,
                rxBusy,
                txBusy,
                reserved1
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::MonIoFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        List
    >;
};

/// @brief Definition of <b>"MON-IO"</b> message class.
/// @details
///     See @ref MonIoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonIo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonIo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonIo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonIo>,
        comms::option::def::FieldsImpl<typename MonIoFields<TOpt>::All>,
        comms::option::def::MsgType<MonIo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonIo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonIo>,
            comms::option::def::FieldsImpl<typename MonIoFields<TOpt>::All>,
            comms::option::def::MsgType<MonIo<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_list() for @ref MonIoFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-IO";
    }
    
    
};

} // namespace message

} // namespace ublox


