// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"UPD-SOS (Create)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res3.h"
#include "cc_ublox/message/UpdSosCreateCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref UpdSosCreate.
/// @tparam TOpt Extra options
/// @see @ref UpdSosCreate
/// @headerfile cc_ublox/message/UpdSosCreate.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct UpdSosCreateFields
{
    /// @brief Definition of <b>"cmd"</b> field.
    class Cmd : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::FixedValue,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::UpdSosCreateFieldsCommon::CmdCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::UpdSosCreateFieldsCommon::CmdCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res3<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res3<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::UpdSosCreateFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Cmd,
        Reserved1
    >;
};

/// @brief Definition of <b>"UPD-SOS (Create)"</b> message class.
/// @details
///     See @ref UpdSosCreateFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/UpdSosCreate.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class UpdSosCreate : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::UpdSosCreate,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_UpdSos>,
        comms::option::def::FieldsImpl<typename UpdSosCreateFields<TOpt>::All>,
        comms::option::def::MsgType<UpdSosCreate<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::UpdSosCreate,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_UpdSos>,
            comms::option::def::FieldsImpl<typename UpdSosCreateFields<TOpt>::All>,
            comms::option::def::MsgType<UpdSosCreate<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_cmd index, @b Field_cmd type and @b field_cmd() access fuction
    ///         for @ref UpdSosCreateFields::Cmd field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref UpdSosCreateFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        cmd,
        reserved1
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::UpdSosCreateCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
