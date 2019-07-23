/// @file
/// @brief Contains definition of <b>"NAV-CLOCK"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavClock.
/// @tparam TOpt Extra options
/// @see @ref NavClock
/// @headerfile "ublox/message/NavClock.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavClockFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"clkB"</b> field.
    struct ClkB : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkB";
        }
        
    };
    
    /// @brief Definition of <b>"clkD"</b> field.
    struct ClkD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkD";
        }
        
    };
    
    /// @brief Definition of <b>"tAcc"</b> field.
    struct TAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
    /// @brief Definition of <b>"fAcc"</b> field.
    struct FAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fAcc";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        ClkB,
        ClkD,
        TAcc,
        FAcc
    >;
};

/// @brief Definition of <b>"NAV-CLOCK"</b> message class.
/// @details
///     See @ref NavClockFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavClock.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavClock : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavClock,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavClock>,
        comms::option::def::FieldsImpl<typename NavClockFields<TOpt>::All>,
        comms::option::def::MsgType<NavClock<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavClock,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavClock>,
            comms::option::def::FieldsImpl<typename NavClockFields<TOpt>::All>,
            comms::option::def::MsgType<NavClock<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavClockFields::Itow field.
    ///     @li @b field_clkB() for @ref NavClockFields::ClkB field.
    ///     @li @b field_clkD() for @ref NavClockFields::ClkD field.
    ///     @li @b field_tAcc() for @ref NavClockFields::TAcc field.
    ///     @li @b field_fAcc() for @ref NavClockFields::FAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        clkB,
        clkD,
        tAcc,
        fAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-CLOCK";
    }
    
    
};

} // namespace message

} // namespace ublox


