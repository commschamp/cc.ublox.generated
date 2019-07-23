/// @file
/// @brief Contains definition of <b>"NAV-VELECEF"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/EcefVX.h"
#include "ublox/field/EcefVY.h"
#include "ublox/field/EcefVZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/SAcc.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavVelecef.
/// @tparam TOpt Extra options
/// @see @ref NavVelecef
/// @headerfile "ublox/message/NavVelecef.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavVelecefFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVX"</b> field.
    using EcefVX =
        ublox::field::EcefVX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVY"</b> field.
    using EcefVY =
        ublox::field::EcefVY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVZ"</b> field.
    using EcefVZ =
        ublox::field::EcefVZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"sAcc"</b> field.
    using SAcc =
        ublox::field::SAcc<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        EcefVX,
        EcefVY,
        EcefVZ,
        SAcc
    >;
};

/// @brief Definition of <b>"NAV-VELECEF"</b> message class.
/// @details
///     See @ref NavVelecefFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavVelecef.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavVelecef : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavVelecef,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavVelecef>,
        comms::option::def::FieldsImpl<typename NavVelecefFields<TOpt>::All>,
        comms::option::def::MsgType<NavVelecef<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavVelecef,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavVelecef>,
            comms::option::def::FieldsImpl<typename NavVelecefFields<TOpt>::All>,
            comms::option::def::MsgType<NavVelecef<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavVelecefFields::Itow field.
    ///     @li @b field_ecefVX() for @ref NavVelecefFields::EcefVX field.
    ///     @li @b field_ecefVY() for @ref NavVelecefFields::EcefVY field.
    ///     @li @b field_ecefVZ() for @ref NavVelecefFields::EcefVZ field.
    ///     @li @b field_sAcc() for @ref NavVelecefFields::SAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        ecefVX,
        ecefVY,
        ecefVZ,
        sAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-VELECEF";
    }
    
    
};

} // namespace message

} // namespace ublox


