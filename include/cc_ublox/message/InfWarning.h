// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"INF-WARNING"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/InfWarningCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref InfWarning.
/// @tparam TOpt Extra options
/// @see @ref InfWarning
/// @headerfile cc_ublox/message/InfWarning.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct InfWarningFields
{
    /// @brief Definition of <b>"str"</b> field.
    class Str : public
        comms::field::String<
            cc_ublox::field::FieldBase<>,
            typename TOpt::message::InfWarningFields::Str
        >
    {
        using Base =
            comms::field::String<
                cc_ublox::field::FieldBase<>,
                typename TOpt::message::InfWarningFields::Str
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::InfWarningFieldsCommon::StrCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Str
    >;
};

/// @brief Definition of <b>"INF-WARNING"</b> message class.
/// @details
///     See @ref InfWarningFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/InfWarning.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class InfWarning : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::InfWarning,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_InfWarning>,
        comms::option::def::FieldsImpl<typename InfWarningFields<TOpt>::All>,
        comms::option::def::MsgType<InfWarning<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::InfWarning,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_InfWarning>,
            comms::option::def::FieldsImpl<typename InfWarningFields<TOpt>::All>,
            comms::option::def::MsgType<InfWarning<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_str index, @b Field_str type and @b field_str() access fuction
    ///         for @ref InfWarningFields::Str field.
    COMMS_MSG_FIELDS_NAMES(
        str
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::InfWarningCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox