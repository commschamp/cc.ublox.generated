/// @file
/// @brief Contains definition of <b>"MGA-GAL-ALM"</b> message and its fields.

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

/// @brief Fields of @ref MgaGalAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaGalAlm
/// @headerfile "ublox/message/MgaGalAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGalAlmFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
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
    
    /// @brief Definition of <b>"ioda"</b> field.
    struct Ioda : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ioda";
        }
        
    };
    
    /// @brief Definition of <b>"almWNa"</b> field.
    struct AlmWNa : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "almWNa";
        }
        
    };
    
    /// @brief Definition of <b>"toa"</b> field.
    struct Toa : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<600, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toa";
        }
        
    };
    
    /// @brief Definition of <b>"deltaSqrtA"</b> field.
    struct DeltaSqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 512>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaSqrtA";
        }
        
    };
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Definition of <b>"deltaI"</b> field.
    struct DeltaI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Definition of <b>"omega0"</b> field.
    struct Omega0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32768L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x200000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32768L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega";
        }
        
    };
    
    /// @brief Definition of <b>"m0"</b> field.
    struct M0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 32768L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "m0";
        }
        
    };
    
    /// @brief Definition of <b>"af0"</b> field.
    struct Af0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 524288L>,
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
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "af1";
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
        Ioda,
        AlmWNa,
        Toa,
        DeltaSqrtA,
        E,
        DeltaI,
        Omega0,
        OmegaDot,
        Omega,
        M0,
        Af0,
        Af1,
        HealthE1B,
        HealthE5b,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GAL-ALM"</b> message class.
/// @details
///     See @ref MgaGalAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGalAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGalAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGalAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
        comms::option::def::FieldsImpl<typename MgaGalAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGalAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGalAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
            comms::option::def::FieldsImpl<typename MgaGalAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGalAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGalAlmFields::Type field.
    ///     @li @b field_version() for @ref MgaGalAlmFields::Version field.
    ///     @li @b field_svid() for @ref MgaGalAlmFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaGalAlmFields::Reserved1 field.
    ///     @li @b field_ioda() for @ref MgaGalAlmFields::Ioda field.
    ///     @li @b field_almWNa() for @ref MgaGalAlmFields::AlmWNa field.
    ///     @li @b field_toa() for @ref MgaGalAlmFields::Toa field.
    ///     @li @b field_deltaSqrtA() for @ref MgaGalAlmFields::DeltaSqrtA field.
    ///     @li @b field_e() for @ref MgaGalAlmFields::E field.
    ///     @li @b field_deltaI() for @ref MgaGalAlmFields::DeltaI field.
    ///     @li @b field_omega0() for @ref MgaGalAlmFields::Omega0 field.
    ///     @li @b field_omegaDot() for @ref MgaGalAlmFields::OmegaDot field.
    ///     @li @b field_omega() for @ref MgaGalAlmFields::Omega field.
    ///     @li @b field_m0() for @ref MgaGalAlmFields::M0 field.
    ///     @li @b field_af0() for @ref MgaGalAlmFields::Af0 field.
    ///     @li @b field_af1() for @ref MgaGalAlmFields::Af1 field.
    ///     @li @b field_healthE1B() for @ref MgaGalAlmFields::HealthE1B field.
    ///     @li @b field_healthE5b() for @ref MgaGalAlmFields::HealthE5b field.
    ///     @li @b field_reserved2() for @ref MgaGalAlmFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        ioda,
        almWNa,
        toa,
        deltaSqrtA,
        e,
        deltaI,
        omega0,
        omegaDot,
        omega,
        m0,
        af0,
        af1,
        healthE1B,
        healthE5b,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 32U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GAL-ALM";
    }
    
    
};

} // namespace message

} // namespace ublox


