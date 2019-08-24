/// @file
/// @brief Contains definition of <b>"CFG-MSG"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgMsg.
/// @tparam TOpt Extra options
/// @see @ref CfgMsg
/// @headerfile "ublox/message/CfgMsg.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgMsgFields
{
    /// @brief Definition of <b>"MsgId"</b> field.
    using MsgId =
        ublox::field::MsgId<
            TOpt
        >;
    
    /// @brief Scope for all the member fields of ///     @ref Rates list.
    struct RatesMembers
    {
        /// @brief Definition of <b>"element"</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"rates"</b> field.
    struct Rates : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename RatesMembers::Element,
            typename TOpt::message::CfgMsgFields::Rates,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "rates";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MsgId,
        Rates
    >;
};

/// @brief Definition of <b>"CFG-MSG"</b> message class.
/// @details
///     See @ref CfgMsgFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgMsg.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgMsg : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
        comms::option::def::FieldsImpl<typename CfgMsgFields<TOpt>::All>,
        comms::option::def::MsgType<CfgMsg<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgMsg>,
            comms::option::def::FieldsImpl<typename CfgMsgFields<TOpt>::All>,
            comms::option::def::MsgType<CfgMsg<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msgId() for @ref CfgMsgFields::MsgId field.
    ///     @li @b field_rates() for @ref CfgMsgFields::Rates field.
    COMMS_MSG_FIELDS_ACCESS(
        msgId,
        rates
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-MSG";
    }
    
    
};

} // namespace message

} // namespace ublox


