/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL (Stop)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimVcocalStop.
/// @tparam TOpt Extra options
/// @see @ref TimVcocalStop
/// @headerfile "ublox/message/TimVcocalStop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimVcocalStopFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
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
            return "type";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type
    >;
};

/// @brief Definition of <b>"TIM-VCOCAL (Stop)"</b> message class.
/// @details
///     See @ref TimVcocalStopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimVcocalStop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimVcocalStop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocalStop,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
        comms::option::def::FieldsImpl<typename TimVcocalStopFields<TOpt>::All>,
        comms::option::def::MsgType<TimVcocalStop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocalStop,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalStopFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocalStop<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref TimVcocalStopFields::Type field.
    COMMS_MSG_FIELDS_ACCESS(
        type
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-VCOCAL (Stop)";
    }
    
    
};

} // namespace message

} // namespace ublox


