/// @file
/// @brief Contains definition of <b>"NAV-POSECEF"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/EcefX.h"
#include "ublox/field/EcefY.h"
#include "ublox/field/EcefZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/PAcc.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavPosecef.
/// @tparam TOpt Extra options
/// @see @ref NavPosecef
/// @headerfile "ublox/message/NavPosecef.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavPosecefFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        ublox::field::EcefX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        ublox::field::EcefY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        ublox::field::EcefZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"pAcc"</b> field.
    using PAcc =
        ublox::field::PAcc<
            TOpt
        >;
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        EcefX,
        EcefY,
        EcefZ,
        PAcc
    >;
};

/// @brief Definition of <b>"NAV-POSECEF"</b> message class.
/// @details
///     See @ref NavPosecefFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavPosecef.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavPosecef : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavPosecef,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosecef>,
        comms::option::def::FieldsImpl<typename NavPosecefFields<TOpt>::All>,
        comms::option::def::MsgType<NavPosecef<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavPosecef,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPosecef>,
            comms::option::def::FieldsImpl<typename NavPosecefFields<TOpt>::All>,
            comms::option::def::MsgType<NavPosecef<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavPosecefFields::Itow field.
    ///     @li @b field_ecefX() for @ref NavPosecefFields::EcefX field.
    ///     @li @b field_ecefY() for @ref NavPosecefFields::EcefY field.
    ///     @li @b field_ecefZ() for @ref NavPosecefFields::EcefZ field.
    ///     @li @b field_pAcc() for @ref NavPosecefFields::PAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        ecefX,
        ecefY,
        ecefZ,
        pAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-POSECEF";
    }
    
    
};

} // namespace message

} // namespace ublox


