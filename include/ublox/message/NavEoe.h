/// @file
/// @brief Contains definition of <b>"NAV-EOE"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavEoe.
/// @tparam TOpt Extra options
/// @see @ref NavEoe
/// @headerfile "ublox/message/NavEoe.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavEoeFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow
    >;
};

/// @brief Definition of <b>"NAV-EOE"</b> message class.
/// @details
///     See @ref NavEoeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavEoe.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavEoe : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavEoe,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavEoe>,
        comms::option::def::FieldsImpl<typename NavEoeFields<TOpt>::All>,
        comms::option::def::MsgType<NavEoe<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavEoe,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavEoe>,
            comms::option::def::FieldsImpl<typename NavEoeFields<TOpt>::All>,
            comms::option::def::MsgType<NavEoe<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavEoeFields::Itow field.
    COMMS_MSG_FIELDS_ACCESS(
        itow
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-EOE";
    }
    
    
};

} // namespace message

} // namespace ublox


