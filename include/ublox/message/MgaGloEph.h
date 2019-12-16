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
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref MgaGloEphFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaGloEphFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref MgaGloEphFields::Svid field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaGloEphFields::Reserved1 field.
    ///     @li @b Field_fT type and @b field_fT() fuction
    ///         for @ref MgaGloEphFields::FT field.
    ///     @li @b Field_b type and @b field_b() fuction
    ///         for @ref MgaGloEphFields::B field.
    ///     @li @b Field_m type and @b field_m() fuction
    ///         for @ref MgaGloEphFields::M field.
    ///     @li @b Field_h type and @b field_h() fuction
    ///         for @ref MgaGloEphFields::H field.
    ///     @li @b Field_x type and @b field_x() fuction
    ///         for @ref MgaGloEphFields::X field.
    ///     @li @b Field_y type and @b field_y() fuction
    ///         for @ref MgaGloEphFields::Y field.
    ///     @li @b Field_z type and @b field_z() fuction
    ///         for @ref MgaGloEphFields::Z field.
    ///     @li @b Field_dx type and @b field_dx() fuction
    ///         for @ref MgaGloEphFields::Dx field.
    ///     @li @b Field_dy type and @b field_dy() fuction
    ///         for @ref MgaGloEphFields::Dy field.
    ///     @li @b Field_dz type and @b field_dz() fuction
    ///         for @ref MgaGloEphFields::Dz field.
    ///     @li @b Field_ddx type and @b field_ddx() fuction
    ///         for @ref MgaGloEphFields::Ddx field.
    ///     @li @b Field_ddy type and @b field_ddy() fuction
    ///         for @ref MgaGloEphFields::Ddy field.
    ///     @li @b Field_ddz type and @b field_ddz() fuction
    ///         for @ref MgaGloEphFields::Ddz field.
    ///     @li @b Field_tb type and @b field_tb() fuction
    ///         for @ref MgaGloEphFields::Tb field.
    ///     @li @b Field_gamma type and @b field_gamma() fuction
    ///         for @ref MgaGloEphFields::Gamma field.
    ///     @li @b Field_e type and @b field_e() fuction
    ///         for @ref MgaGloEphFields::E field.
    ///     @li @b Field_deltaTau type and @b field_deltaTau() fuction
    ///         for @ref MgaGloEphFields::DeltaTau field.
    ///     @li @b Field_tau type and @b field_tau() fuction
    ///         for @ref MgaGloEphFields::Tau field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref MgaGloEphFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
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


