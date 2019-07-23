/// @file
/// @brief Contains definition of <b>"MGA-GLO-EPH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGloEph.
/// @tparam TOpt Extra options
/// @see @ref MgaGloEph
/// @headerfile "ublox/message/MgaGloEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGloEphFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
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
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"FT"</b> field.
    struct FT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "FT";
        }
        
    };
    
    /// @brief Definition of <b>"B"</b> field.
    struct B : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "B";
        }
        
    };
    
    /// @brief Definition of <b>"M"</b> field.
    struct M : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "M";
        }
        
    };
    
    /// @brief Definition of <b>"H"</b> field.
    struct H : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "H";
        }
        
    };
    
    /// @brief Definition of <b>"x"</b> field.
    struct X : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsKilometers
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "x";
        }
        
    };
    
    /// @brief Definition of <b>"y"</b> field.
    struct Y : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsKilometers
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "y";
        }
        
    };
    
    /// @brief Definition of <b>"z"</b> field.
    struct Z : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsKilometers
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "z";
        }
        
    };
    
    /// @brief Definition of <b>"dx"</b> field.
    struct Dx : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>,
            comms::option::def::UnitsKilometersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dx";
        }
        
    };
    
    /// @brief Definition of <b>"dy"</b> field.
    struct Dy : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>,
            comms::option::def::UnitsKilometersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dy";
        }
        
    };
    
    /// @brief Definition of <b>"dz"</b> field.
    struct Dz : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>,
            comms::option::def::UnitsKilometersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dz";
        }
        
    };
    
    /// @brief Definition of <b>"ddx"</b> field.
    struct Ddx : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ddx";
        }
        
    };
    
    /// @brief Definition of <b>"ddy"</b> field.
    struct Ddy : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ddy";
        }
        
    };
    
    /// @brief Definition of <b>"ddz"</b> field.
    struct Ddz : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ddz";
        }
        
    };
    
    /// @brief Definition of <b>"tb"</b> field.
    struct Tb : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ScalingRatio<15, 1>,
            comms::option::def::UnitsMinutes
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tb";
        }
        
    };
    
    /// @brief Definition of <b>"gamma"</b> field.
    struct Gamma : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x10000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gamma";
        }
        
    };
    
    /// @brief Definition of <b>"E"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "E";
        }
        
    };
    
    /// @brief Definition of <b>"deltaTau"</b> field.
    struct DeltaTau : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaTau";
        }
        
    };
    
    /// @brief Definition of <b>"tau"</b> field.
    struct Tau : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tau";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        Reserved1,
        FT,
        B,
        M,
        H,
        X,
        Y,
        Z,
        Dx,
        Dy,
        Dz,
        Ddx,
        Ddy,
        Ddz,
        Tb,
        Gamma,
        E,
        DeltaTau,
        Tau,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GLO-EPH"</b> message class.
/// @details
///     See @ref MgaGloEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGloEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGloEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloEph<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloEph<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGloEphFields::Type field.
    ///     @li @b field_version() for @ref MgaGloEphFields::Version field.
    ///     @li @b field_svid() for @ref MgaGloEphFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaGloEphFields::Reserved1 field.
    ///     @li @b field_fT() for @ref MgaGloEphFields::FT field.
    ///     @li @b field_b() for @ref MgaGloEphFields::B field.
    ///     @li @b field_m() for @ref MgaGloEphFields::M field.
    ///     @li @b field_h() for @ref MgaGloEphFields::H field.
    ///     @li @b field_x() for @ref MgaGloEphFields::X field.
    ///     @li @b field_y() for @ref MgaGloEphFields::Y field.
    ///     @li @b field_z() for @ref MgaGloEphFields::Z field.
    ///     @li @b field_dx() for @ref MgaGloEphFields::Dx field.
    ///     @li @b field_dy() for @ref MgaGloEphFields::Dy field.
    ///     @li @b field_dz() for @ref MgaGloEphFields::Dz field.
    ///     @li @b field_ddx() for @ref MgaGloEphFields::Ddx field.
    ///     @li @b field_ddy() for @ref MgaGloEphFields::Ddy field.
    ///     @li @b field_ddz() for @ref MgaGloEphFields::Ddz field.
    ///     @li @b field_tb() for @ref MgaGloEphFields::Tb field.
    ///     @li @b field_gamma() for @ref MgaGloEphFields::Gamma field.
    ///     @li @b field_e() for @ref MgaGloEphFields::E field.
    ///     @li @b field_deltaTau() for @ref MgaGloEphFields::DeltaTau field.
    ///     @li @b field_tau() for @ref MgaGloEphFields::Tau field.
    ///     @li @b field_reserved2() for @ref MgaGloEphFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        fT,
        b,
        m,
        h,
        x,
        y,
        z,
        dx,
        dy,
        dz,
        ddx,
        ddy,
        ddz,
        tb,
        gamma,
        e,
        deltaTau,
        tau,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 48U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 48U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GLO-EPH";
    }
    
    
};

} // namespace message

} // namespace ublox


