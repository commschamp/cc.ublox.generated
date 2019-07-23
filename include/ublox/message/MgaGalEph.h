/// @file
/// @brief Contains definition of <b>"MGA-GAL-EPH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGalEph.
/// @tparam TOpt Extra options
/// @see @ref MgaGalEph
/// @headerfile "ublox/message/MgaGalEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGalEphFields
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
    
    /// @brief Definition of <b>"iodNav"</b> field.
    struct IodNav : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "iodNav";
        }
        
    };
    
    /// @brief Definition of <b>"deltaN"</b> field.
    struct DeltaN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaN";
        }
        
    };
    
    /// @brief Definition of <b>"m0"</b> field.
    struct M0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "m0";
        }
        
    };
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x200000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sqrtA";
        }
        
    };
    
    /// @brief Definition of <b>"omega0"</b> field.
    struct Omega0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Definition of <b>"i0"</b> field.
    struct I0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "i0";
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Definition of <b>"iDot"</b> field.
    struct IDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "iDot";
        }
        
    };
    
    /// @brief Definition of <b>"cuc"</b> field.
    struct Cuc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cuc";
        }
        
    };
    
    /// @brief Definition of <b>"cus"</b> field.
    struct Cus : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cus";
        }
        
    };
    
    /// @brief Definition of <b>"crc"</b> field.
    struct Crc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "crc";
        }
        
    };
    
    /// @brief Definition of <b>"crs"</b> field.
    struct Crs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "crs";
        }
        
    };
    
    /// @brief Definition of <b>"cic"</b> field.
    struct Cic : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cic";
        }
        
    };
    
    /// @brief Definition of <b>"cis"</b> field.
    struct Cis : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 536870912L>,
            comms::option::def::UnitsRadians
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cis";
        }
        
    };
    
    /// @brief Definition of <b>"toe"</b> field.
    struct Toe : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<60, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toe";
        }
        
    };
    
    /// @brief Definition of <b>"af0"</b> field.
    struct Af0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x400000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af0";
        }
        
    };
    
    /// @brief Definition of <b>"af1"</b> field.
    struct Af1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x400000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af1";
        }
        
    };
    
    /// @brief Definition of <b>"af2"</b> field.
    struct Af2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 0x800000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af2";
        }
        
    };
    
    /// @brief Definition of <b>"sisaIndexE1E5b"</b> field.
    struct SisaIndexE1E5b : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sisaIndexE1E5b";
        }
        
    };
    
    /// @brief Definition of <b>"toc"</b> field.
    struct Toc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<60, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toc";
        }
        
    };
    
    /// @brief Definition of <b>"bgdE1E5b"</b> field.
    struct BgdE1E5b : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "bgdE1E5b";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"healthE1B"</b> field.
    struct HealthE1B : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "healthE1B";
        }
        
    };
    
    /// @brief Definition of <b>"dataValidityE1B"</b> field.
    struct DataValidityE1B : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dataValidityE1B";
        }
        
    };
    
    /// @brief Definition of <b>"healthE5b"</b> field.
    struct HealthE5b : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "healthE5b";
        }
        
    };
    
    /// @brief Definition of <b>"dataValidityE5b"</b> field.
    struct DataValidityE5b : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dataValidityE5b";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
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
        Type,
        Version,
        Svid,
        Reserved1,
        IodNav,
        DeltaN,
        M0,
        E,
        SqrtA,
        Omega0,
        I0,
        Omega,
        OmegaDot,
        IDot,
        Cuc,
        Cus,
        Crc,
        Crs,
        Cic,
        Cis,
        Toe,
        Af0,
        Af1,
        Af2,
        SisaIndexE1E5b,
        Toc,
        BgdE1E5b,
        Reserved2,
        HealthE1B,
        DataValidityE1B,
        HealthE5b,
        DataValidityE5b,
        Reserved3
    >;
};

/// @brief Definition of <b>"MGA-GAL-EPH"</b> message class.
/// @details
///     See @ref MgaGalEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGalEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGalEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGalEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
        comms::option::def::FieldsImpl<typename MgaGalEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGalEph<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGalEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
            comms::option::def::FieldsImpl<typename MgaGalEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGalEph<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGalEphFields::Type field.
    ///     @li @b field_version() for @ref MgaGalEphFields::Version field.
    ///     @li @b field_svid() for @ref MgaGalEphFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaGalEphFields::Reserved1 field.
    ///     @li @b field_iodNav() for @ref MgaGalEphFields::IodNav field.
    ///     @li @b field_deltaN() for @ref MgaGalEphFields::DeltaN field.
    ///     @li @b field_m0() for @ref MgaGalEphFields::M0 field.
    ///     @li @b field_e() for @ref MgaGalEphFields::E field.
    ///     @li @b field_sqrtA() for @ref MgaGalEphFields::SqrtA field.
    ///     @li @b field_omega0() for @ref MgaGalEphFields::Omega0 field.
    ///     @li @b field_i0() for @ref MgaGalEphFields::I0 field.
    ///     @li @b field_omega() for @ref MgaGalEphFields::Omega field.
    ///     @li @b field_omegaDot() for @ref MgaGalEphFields::OmegaDot field.
    ///     @li @b field_iDot() for @ref MgaGalEphFields::IDot field.
    ///     @li @b field_cuc() for @ref MgaGalEphFields::Cuc field.
    ///     @li @b field_cus() for @ref MgaGalEphFields::Cus field.
    ///     @li @b field_crc() for @ref MgaGalEphFields::Crc field.
    ///     @li @b field_crs() for @ref MgaGalEphFields::Crs field.
    ///     @li @b field_cic() for @ref MgaGalEphFields::Cic field.
    ///     @li @b field_cis() for @ref MgaGalEphFields::Cis field.
    ///     @li @b field_toe() for @ref MgaGalEphFields::Toe field.
    ///     @li @b field_af0() for @ref MgaGalEphFields::Af0 field.
    ///     @li @b field_af1() for @ref MgaGalEphFields::Af1 field.
    ///     @li @b field_af2() for @ref MgaGalEphFields::Af2 field.
    ///     @li @b field_sisaIndexE1E5b() for @ref MgaGalEphFields::SisaIndexE1E5b field.
    ///     @li @b field_toc() for @ref MgaGalEphFields::Toc field.
    ///     @li @b field_bgdE1E5b() for @ref MgaGalEphFields::BgdE1E5b field.
    ///     @li @b field_reserved2() for @ref MgaGalEphFields::Reserved2 field.
    ///     @li @b field_healthE1B() for @ref MgaGalEphFields::HealthE1B field.
    ///     @li @b field_dataValidityE1B() for @ref MgaGalEphFields::DataValidityE1B field.
    ///     @li @b field_healthE5b() for @ref MgaGalEphFields::HealthE5b field.
    ///     @li @b field_dataValidityE5b() for @ref MgaGalEphFields::DataValidityE5b field.
    ///     @li @b field_reserved3() for @ref MgaGalEphFields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        iodNav,
        deltaN,
        m0,
        e,
        sqrtA,
        omega0,
        i0,
        omega,
        omegaDot,
        iDot,
        cuc,
        cus,
        crc,
        crs,
        cic,
        cis,
        toe,
        af0,
        af1,
        af2,
        sisaIndexE1E5b,
        toc,
        bgdE1E5b,
        reserved2,
        healthE1B,
        dataValidityE1B,
        healthE5b,
        dataValidityE5b,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 76U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 76U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GAL-EPH";
    }
    
    
};

} // namespace message

} // namespace ublox


