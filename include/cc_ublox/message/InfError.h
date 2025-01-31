// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"INF-ERROR"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/InfErrorCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/String.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref InfError.
/// @tparam TOpt Extra options
/// @see @ref InfError
/// @headerfile cc_ublox/message/InfError.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct InfErrorFields
{
    /// @brief Definition of <b>"str"</b> field.
    class Str : public
        comms::field::String<
            cc_ublox::field::FieldBase<>,
            typename TOpt::message::InfErrorFields::Str,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::String<
                cc_ublox::field::FieldBase<>,
                typename TOpt::message::InfErrorFields::Str,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::InfErrorFieldsCommon::StrCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Str
    >;
};

/// @brief Definition of <b>"INF-ERROR"</b> message class.
/// @details
///     See @ref InfErrorFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/InfError.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class InfError : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::InfError,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_InfError>,
        comms::option::def::FieldsImpl<typename InfErrorFields<TOpt>::All>,
        comms::option::def::MsgType<InfError<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::InfError,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_InfError>,
            comms::option::def::FieldsImpl<typename InfErrorFields<TOpt>::All>,
            comms::option::def::MsgType<InfError<TMsgBase, TOpt> >,
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
    ///         for @ref InfErrorFields::Str field.
    COMMS_MSG_FIELDS_NAMES(
        str
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::InfErrorCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
