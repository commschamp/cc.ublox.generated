/// @file
/// @brief Contains definition of <b>"NAV-ODO"</b> message and its fields.

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

/// @brief Fields of @ref NavOdo.
/// @tparam TOpt Extra options
/// @see @ref NavOdo
/// @headerfile "ublox/message/NavOdo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavOdoFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
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
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"distance"</b> field.
    struct Distance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "distance";
        }
        
    };
    
    /// @brief Definition of <b>"totalDistance"</b> field.
    struct TotalDistance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "totalDistance";
        }
        
    };
    
    /// @brief Definition of <b>"distanceStd"</b> field.
    struct DistanceStd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "distanceStd";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        Distance,
        TotalDistance,
        DistanceStd
    >;
};

/// @brief Definition of <b>"NAV-ODO"</b> message class.
/// @details
///     See @ref NavOdoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavOdo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavOdo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavOdo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOdo>,
        comms::option::def::FieldsImpl<typename NavOdoFields<TOpt>::All>,
        comms::option::def::MsgType<NavOdo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavOdo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOdo>,
            comms::option::def::FieldsImpl<typename NavOdoFields<TOpt>::All>,
            comms::option::def::MsgType<NavOdo<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref NavOdoFields::Version field.
    ///     @li @b field_reserved1() for @ref NavOdoFields::Reserved1 field.
    ///     @li @b field_itow() for @ref NavOdoFields::Itow field.
    ///     @li @b field_distance() for @ref NavOdoFields::Distance field.
    ///     @li @b field_totalDistance() for @ref NavOdoFields::TotalDistance field.
    ///     @li @b field_distanceStd() for @ref NavOdoFields::DistanceStd field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        itow,
        distance,
        totalDistance,
        distanceStd
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-ODO";
    }
    
    
};

} // namespace message

} // namespace ublox


