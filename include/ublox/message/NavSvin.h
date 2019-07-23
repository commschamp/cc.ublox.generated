/// @file
/// @brief Contains definition of <b>"NAV-SVIN"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavSvin.
/// @tparam TOpt Extra options
/// @see @ref NavSvin
/// @headerfile "ublox/message/NavSvin.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSvinFields
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
    
    /// @brief Definition of <b>"dur"</b> field.
    struct Dur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dur";
        }
        
    };
    
    /// @brief Definition of <b>"meanX"</b> field.
    struct MeanX : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanX";
        }
        
    };
    
    /// @brief Definition of <b>"meanY"</b> field.
    struct MeanY : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanY";
        }
        
    };
    
    /// @brief Definition of <b>"meanZ"</b> field.
    struct MeanZ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanZ";
        }
        
    };
    
    /// @brief Definition of <b>"meanXHP"</b> field.
    struct MeanXHP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanXHP";
        }
        
    };
    
    /// @brief Definition of <b>"meanYHP"</b> field.
    struct MeanYHP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanYHP";
        }
        
    };
    
    /// @brief Definition of <b>"meanZHP"</b> field.
    struct MeanZHP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanZHP";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"meanAcc"</b> field.
    struct MeanAcc : public
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
            return "meanAcc";
        }
        
    };
    
    /// @brief Definition of <b>"obs"</b> field.
    struct Obs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "obs";
        }
        
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    struct Valid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief Definition of <b>"active"</b> field.
    struct Active : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "active";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        Dur,
        MeanX,
        MeanY,
        MeanZ,
        MeanXHP,
        MeanYHP,
        MeanZHP,
        Reserved2,
        MeanAcc,
        Obs,
        Valid,
        Active,
        Reserved3
    >;
};

/// @brief Definition of <b>"NAV-SVIN"</b> message class.
/// @details
///     See @ref NavSvinFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSvin.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSvin : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSvin,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvin>,
        comms::option::def::FieldsImpl<typename NavSvinFields<TOpt>::All>,
        comms::option::def::MsgType<NavSvin<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSvin,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvin>,
            comms::option::def::FieldsImpl<typename NavSvinFields<TOpt>::All>,
            comms::option::def::MsgType<NavSvin<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref NavSvinFields::Version field.
    ///     @li @b field_reserved1() for @ref NavSvinFields::Reserved1 field.
    ///     @li @b field_itow() for @ref NavSvinFields::Itow field.
    ///     @li @b field_dur() for @ref NavSvinFields::Dur field.
    ///     @li @b field_meanX() for @ref NavSvinFields::MeanX field.
    ///     @li @b field_meanY() for @ref NavSvinFields::MeanY field.
    ///     @li @b field_meanZ() for @ref NavSvinFields::MeanZ field.
    ///     @li @b field_meanXHP() for @ref NavSvinFields::MeanXHP field.
    ///     @li @b field_meanYHP() for @ref NavSvinFields::MeanYHP field.
    ///     @li @b field_meanZHP() for @ref NavSvinFields::MeanZHP field.
    ///     @li @b field_reserved2() for @ref NavSvinFields::Reserved2 field.
    ///     @li @b field_meanAcc() for @ref NavSvinFields::MeanAcc field.
    ///     @li @b field_obs() for @ref NavSvinFields::Obs field.
    ///     @li @b field_valid() for @ref NavSvinFields::Valid field.
    ///     @li @b field_active() for @ref NavSvinFields::Active field.
    ///     @li @b field_reserved3() for @ref NavSvinFields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        itow,
        dur,
        meanX,
        meanY,
        meanZ,
        meanXHP,
        meanYHP,
        meanZHP,
        reserved2,
        meanAcc,
        obs,
        valid,
        active,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-SVIN";
    }
    
    
};

} // namespace message

} // namespace ublox


