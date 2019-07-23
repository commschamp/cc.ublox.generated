/// @file
/// @brief Contains definition of <b>"NAV-VELNED"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Heading.h"
#include "ublox/field/Itow.h"
#include "ublox/field/SAcc.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavVelned.
/// @tparam TOpt Extra options
/// @see @ref NavVelned
/// @headerfile "ublox/message/NavVelned.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavVelnedFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"velN"</b> field.
    struct VelN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velN";
        }
        
    };
    
    /// @brief Definition of <b>"velE"</b> field.
    struct VelE : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velE";
        }
        
    };
    
    /// @brief Definition of <b>"velD"</b> field.
    struct VelD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velD";
        }
        
    };
    
    /// @brief Definition of <b>"speed"</b> field.
    struct Speed : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "speed";
        }
        
    };
    
    /// @brief Definition of <b>"gSpeed"</b> field.
    struct GSpeed : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    using Heading =
        ublox::field::Heading<
            TOpt
        >;
    
    /// @brief Definition of <b>"sAcc"</b> field.
    using SAcc =
        ublox::field::SAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"cAcc"</b> field.
    struct CAcc : public
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
            return "cAcc";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        VelN,
        VelE,
        VelD,
        Speed,
        GSpeed,
        Heading,
        SAcc,
        CAcc
    >;
};

/// @brief Definition of <b>"NAV-VELNED"</b> message class.
/// @details
///     See @ref NavVelnedFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavVelned.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavVelned : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavVelned,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavVelned>,
        comms::option::def::FieldsImpl<typename NavVelnedFields<TOpt>::All>,
        comms::option::def::MsgType<NavVelned<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavVelned,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavVelned>,
            comms::option::def::FieldsImpl<typename NavVelnedFields<TOpt>::All>,
            comms::option::def::MsgType<NavVelned<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavVelnedFields::Itow field.
    ///     @li @b field_velN() for @ref NavVelnedFields::VelN field.
    ///     @li @b field_velE() for @ref NavVelnedFields::VelE field.
    ///     @li @b field_velD() for @ref NavVelnedFields::VelD field.
    ///     @li @b field_speed() for @ref NavVelnedFields::Speed field.
    ///     @li @b field_gSpeed() for @ref NavVelnedFields::GSpeed field.
    ///     @li @b field_heading() for @ref NavVelnedFields::Heading field.
    ///     @li @b field_sAcc() for @ref NavVelnedFields::SAcc field.
    ///     @li @b field_cAcc() for @ref NavVelnedFields::CAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        velN,
        velE,
        velD,
        speed,
        gSpeed,
        heading,
        sAcc,
        cAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-VELNED";
    }
    
    
};

} // namespace message

} // namespace ublox


