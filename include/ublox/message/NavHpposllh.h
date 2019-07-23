/// @file
/// @brief Contains definition of <b>"NAV-HPPOSLLH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Height.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavHpposllh.
/// @tparam TOpt Extra options
/// @see @ref NavHpposllh
/// @headerfile "ublox/message/NavHpposllh.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavHpposllhFields
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
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"height"</b> field.
    using Height =
        ublox::field::Height<
            TOpt
        >;
    
    /// @brief Definition of <b>"hMSL"</b> field.
    using HMSL =
        ublox::field::HMSL<
            TOpt
        >;
    
    /// @brief Definition of <b>"lonHp"</b> field.
    struct LonHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 100000000L>,
            comms::option::def::UnitsDegrees,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lonHp";
        }
        
    };
    
    /// @brief Definition of <b>"latHp"</b> field.
    struct LatHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 100000000L>,
            comms::option::def::UnitsDegrees,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "latHp";
        }
        
    };
    
    /// @brief Definition of <b>"heigthHp"</b> field.
    struct HeigthHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-9, 9>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "heigthHp";
        }
        
    };
    
    /// @brief Definition of <b>"hMSLHp"</b> field.
    struct HMSLHp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-9, 9>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "hMSLHp";
        }
        
    };
    
    /// @brief Definition of <b>"hAcc"</b> field.
    struct HAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "hAcc";
        }
        
    };
    
    /// @brief Definition of <b>"vAcc"</b> field.
    struct VAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "vAcc";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        Lon,
        Lat,
        Height,
        HMSL,
        LonHp,
        LatHp,
        HeigthHp,
        HMSLHp,
        HAcc,
        VAcc
    >;
};

/// @brief Definition of <b>"NAV-HPPOSLLH"</b> message class.
/// @details
///     See @ref NavHpposllhFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavHpposllh.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavHpposllh : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavHpposllh,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
        comms::option::def::FieldsImpl<typename NavHpposllhFields<TOpt>::All>,
        comms::option::def::MsgType<NavHpposllh<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavHpposllh,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavHpposllh>,
            comms::option::def::FieldsImpl<typename NavHpposllhFields<TOpt>::All>,
            comms::option::def::MsgType<NavHpposllh<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref NavHpposllhFields::Version field.
    ///     @li @b field_reserved1() for @ref NavHpposllhFields::Reserved1 field.
    ///     @li @b field_itow() for @ref NavHpposllhFields::Itow field.
    ///     @li @b field_lon() for @ref NavHpposllhFields::Lon field.
    ///     @li @b field_lat() for @ref NavHpposllhFields::Lat field.
    ///     @li @b field_height() for @ref NavHpposllhFields::Height field.
    ///     @li @b field_hMSL() for @ref NavHpposllhFields::HMSL field.
    ///     @li @b field_lonHp() for @ref NavHpposllhFields::LonHp field.
    ///     @li @b field_latHp() for @ref NavHpposllhFields::LatHp field.
    ///     @li @b field_heigthHp() for @ref NavHpposllhFields::HeigthHp field.
    ///     @li @b field_hMSLHp() for @ref NavHpposllhFields::HMSLHp field.
    ///     @li @b field_hAcc() for @ref NavHpposllhFields::HAcc field.
    ///     @li @b field_vAcc() for @ref NavHpposllhFields::VAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        itow,
        lon,
        lat,
        height,
        hMSL,
        lonHp,
        latHp,
        heigthHp,
        hMSLHp,
        hAcc,
        vAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-HPPOSLLH";
    }
    
    
};

} // namespace message

} // namespace ublox


