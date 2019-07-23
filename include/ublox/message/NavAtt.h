/// @file
/// @brief Contains definition of <b>"NAV-ATT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavAtt.
/// @tparam TOpt Extra options
/// @see @ref NavAtt
/// @headerfile "ublox/message/NavAtt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavAttFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"roll"</b> field.
    struct Roll : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "roll";
        }
        
    };
    
    /// @brief Definition of <b>"pitch"</b> field.
    struct Pitch : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pitch";
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    struct Heading : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "heading";
        }
        
    };
    
    /// @brief Definition of <b>"accRoll"</b> field.
    struct AccRoll : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "accRoll";
        }
        
    };
    
    /// @brief Definition of <b>"accPitch"</b> field.
    struct AccPitch : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "accPitch";
        }
        
    };
    
    /// @brief Definition of <b>"accHeading"</b> field.
    struct AccHeading : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "accHeading";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        Reserved1,
        Roll,
        Pitch,
        Heading,
        AccRoll,
        AccPitch,
        AccHeading
    >;
};

/// @brief Definition of <b>"NAV-ATT"</b> message class.
/// @details
///     See @ref NavAttFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavAtt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavAtt : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAtt>,
        comms::option::def::FieldsImpl<typename NavAttFields<TOpt>::All>,
        comms::option::def::MsgType<NavAtt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavAtt>,
            comms::option::def::FieldsImpl<typename NavAttFields<TOpt>::All>,
            comms::option::def::MsgType<NavAtt<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavAttFields::Itow field.
    ///     @li @b field_version() for @ref NavAttFields::Version field.
    ///     @li @b field_reserved1() for @ref NavAttFields::Reserved1 field.
    ///     @li @b field_roll() for @ref NavAttFields::Roll field.
    ///     @li @b field_pitch() for @ref NavAttFields::Pitch field.
    ///     @li @b field_heading() for @ref NavAttFields::Heading field.
    ///     @li @b field_accRoll() for @ref NavAttFields::AccRoll field.
    ///     @li @b field_accPitch() for @ref NavAttFields::AccPitch field.
    ///     @li @b field_accHeading() for @ref NavAttFields::AccHeading field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        version,
        reserved1,
        roll,
        pitch,
        heading,
        accRoll,
        accPitch,
        accHeading
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 32U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-ATT";
    }
    
    
};

} // namespace message

} // namespace ublox


