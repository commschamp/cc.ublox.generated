/// @file
/// @brief Contains definition of <b>"MGA-GPS-EPH"</b> message and its fields.

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
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGpsEph.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsEph
/// @headerfile "ublox/message/MgaGpsEph.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGpsEphFields
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
    
    /// @brief Definition of <b>"fitInterval"</b> field.
    struct FitInterval : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fitInterval";
        }
        
    };
    
    /// @brief Definition of <b>"uraIndex"</b> field.
    struct UraIndex : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "uraIndex";
        }
        
    };
    
    /// @brief Definition of <b>"svHealth"</b> field.
    struct SvHealth : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svHealth";
        }
        
    };
    
    /// @brief Definition of <b>"tgd"</b> field.
    struct Tgd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tgd";
        }
        
    };
    
    /// @brief Definition of <b>"iodc"</b> field.
    struct Iodc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "iodc";
        }
        
    };
    
    /// @brief Definition of <b>"toc"</b> field.
    struct Toc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<16, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toc";
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
    
    /// @brief Definition of <b>"af2"</b> field.
    struct Af2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 0x80000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af2";
        }
        
    };
    
    /// @brief Definition of <b>"af1"</b> field.
    struct Af1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af1";
        }
        
    };
    
    /// @brief Definition of <b>"af0"</b> field.
    struct Af0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af0";
        }
        
    };
    
    /// @brief Definition of <b>"crs"</b> field.
    struct Crs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "crs";
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
            comms::option::def::ScalingRatio<1, 589824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sqrtA";
        }
        
    };
    
    /// @brief Definition of <b>"toe"</b> field.
    struct Toe : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<16, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toe";
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
    
    /// @brief Definition of <b>"crc"</b> field.
    struct Crc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "crc";
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
    
    /// @brief Definition of <b>"idot"</b> field.
    struct Idot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x80000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "idot";
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
        Type,
        Version,
        Svid,
        Reserved1,
        FitInterval,
        UraIndex,
        SvHealth,
        Tgd,
        Iodc,
        Toc,
        Reserved2,
        Af2,
        Af1,
        Af0,
        Crs,
        DeltaN,
        M0,
        Cuc,
        Cus,
        E,
        SqrtA,
        Toe,
        Cic,
        Omega0,
        Cis,
        Crc,
        I0,
        Omega,
        OmegaDot,
        Idot,
        Reserved3
    >;
};

/// @brief Definition of <b>"MGA-GPS-EPH"</b> message class.
/// @details
///     See @ref MgaGpsEphFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGpsEph.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGpsEph : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsEph,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsEphFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsEph<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsEph,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsEphFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsEph<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGpsEphFields::Type field.
    ///     @li @b field_version() for @ref MgaGpsEphFields::Version field.
    ///     @li @b field_svid() for @ref MgaGpsEphFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaGpsEphFields::Reserved1 field.
    ///     @li @b field_fitInterval() for @ref MgaGpsEphFields::FitInterval field.
    ///     @li @b field_uraIndex() for @ref MgaGpsEphFields::UraIndex field.
    ///     @li @b field_svHealth() for @ref MgaGpsEphFields::SvHealth field.
    ///     @li @b field_tgd() for @ref MgaGpsEphFields::Tgd field.
    ///     @li @b field_iodc() for @ref MgaGpsEphFields::Iodc field.
    ///     @li @b field_toc() for @ref MgaGpsEphFields::Toc field.
    ///     @li @b field_reserved2() for @ref MgaGpsEphFields::Reserved2 field.
    ///     @li @b field_af2() for @ref MgaGpsEphFields::Af2 field.
    ///     @li @b field_af1() for @ref MgaGpsEphFields::Af1 field.
    ///     @li @b field_af0() for @ref MgaGpsEphFields::Af0 field.
    ///     @li @b field_crs() for @ref MgaGpsEphFields::Crs field.
    ///     @li @b field_deltaN() for @ref MgaGpsEphFields::DeltaN field.
    ///     @li @b field_m0() for @ref MgaGpsEphFields::M0 field.
    ///     @li @b field_cuc() for @ref MgaGpsEphFields::Cuc field.
    ///     @li @b field_cus() for @ref MgaGpsEphFields::Cus field.
    ///     @li @b field_e() for @ref MgaGpsEphFields::E field.
    ///     @li @b field_sqrtA() for @ref MgaGpsEphFields::SqrtA field.
    ///     @li @b field_toe() for @ref MgaGpsEphFields::Toe field.
    ///     @li @b field_cic() for @ref MgaGpsEphFields::Cic field.
    ///     @li @b field_omega0() for @ref MgaGpsEphFields::Omega0 field.
    ///     @li @b field_cis() for @ref MgaGpsEphFields::Cis field.
    ///     @li @b field_crc() for @ref MgaGpsEphFields::Crc field.
    ///     @li @b field_i0() for @ref MgaGpsEphFields::I0 field.
    ///     @li @b field_omega() for @ref MgaGpsEphFields::Omega field.
    ///     @li @b field_omegaDot() for @ref MgaGpsEphFields::OmegaDot field.
    ///     @li @b field_idot() for @ref MgaGpsEphFields::Idot field.
    ///     @li @b field_reserved3() for @ref MgaGpsEphFields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        fitInterval,
        uraIndex,
        svHealth,
        tgd,
        iodc,
        toc,
        reserved2,
        af2,
        af1,
        af0,
        crs,
        deltaN,
        m0,
        cuc,
        cus,
        e,
        sqrtA,
        toe,
        cic,
        omega0,
        cis,
        crc,
        i0,
        omega,
        omegaDot,
        idot,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 68U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 68U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GPS-EPH";
    }
    
    
};

} // namespace message

} // namespace ublox


