// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL (Stop)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/TimVcocalStopCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref TimVcocalStop.
/// @tparam TOpt Extra options
/// @see @ref TimVcocalStop
/// @headerfile cc_ublox/message/TimVcocalStop.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct TimVcocalStopFields
{
    /// @brief Definition of <b>"type"</b> field.
    class Type : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::ValidNumValue<0>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimVcocalStopFieldsCommon::TypeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalStopFieldsCommon::TypeCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(0);
            return true;
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
/// @headerfile cc_ublox/message/TimVcocalStop.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class TimVcocalStop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocalStop,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimVcocal>,
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
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalStopFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocalStop<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_type index, @b Field_type type and @b field_type() access fuction
    ///         for @ref TimVcocalStopFields::Type field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_ublox::message::TimVcocalStopCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox