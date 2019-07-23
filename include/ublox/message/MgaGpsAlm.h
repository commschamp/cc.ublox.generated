/// @file
/// @brief Contains definition of <b>"MGA-GPS-ALM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGpsAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsAlm
/// @headerfile "ublox/message/MgaGpsAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGpsAlmFields
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
    
    /// @brief Definition of <b>"e"</b> field.
    struct E : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 2097152L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "e";
        }
        
    };
    
    /// @brief Definition of <b>"almWNa"</b> field.
    struct AlmWNa : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
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
            std::uint8_t,
            comms::option::def::ScalingRatio<4096, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "toa";
        }
        
    };
    
    /// @brief Definition of <b>"deltaI"</b> field.
    struct DeltaI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsMeters
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
            comms::option::def::ScalingRatio<1, 8388608L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega0";
        }
        
    };
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 8388608L>
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
            std::int32_t,
            comms::option::def::ScalingRatio<1, 8388608L>
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
            comms::option::def::ScalingRatio<1, 1048576L>,
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
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        SvHealth,
        E,
        AlmWNa,
        Toa,
        DeltaI,
        OmegaDot,
        SqrtA,
        Omega0,
        Omega,
        M0,
        Af0,
        Af1,
        Reserved1
    >;
};

/// @brief Definition of <b>"MGA-GPS-ALM"</b> message class.
/// @details
///     See @ref MgaGpsAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGpsAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGpsAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGpsAlmFields::Type field.
    ///     @li @b field_version() for @ref MgaGpsAlmFields::Version field.
    ///     @li @b field_svid() for @ref MgaGpsAlmFields::Svid field.
    ///     @li @b field_svHealth() for @ref MgaGpsAlmFields::SvHealth field.
    ///     @li @b field_e() for @ref MgaGpsAlmFields::E field.
    ///     @li @b field_almWNa() for @ref MgaGpsAlmFields::AlmWNa field.
    ///     @li @b field_toa() for @ref MgaGpsAlmFields::Toa field.
    ///     @li @b field_deltaI() for @ref MgaGpsAlmFields::DeltaI field.
    ///     @li @b field_omegaDot() for @ref MgaGpsAlmFields::OmegaDot field.
    ///     @li @b field_sqrtA() for @ref MgaGpsAlmFields::SqrtA field.
    ///     @li @b field_omega0() for @ref MgaGpsAlmFields::Omega0 field.
    ///     @li @b field_omega() for @ref MgaGpsAlmFields::Omega field.
    ///     @li @b field_m0() for @ref MgaGpsAlmFields::M0 field.
    ///     @li @b field_af0() for @ref MgaGpsAlmFields::Af0 field.
    ///     @li @b field_af1() for @ref MgaGpsAlmFields::Af1 field.
    ///     @li @b field_reserved1() for @ref MgaGpsAlmFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        svHealth,
        e,
        almWNa,
        toa,
        deltaI,
        omegaDot,
        sqrtA,
        omega0,
        omega,
        m0,
        af0,
        af1,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 38U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 38U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GPS-ALM";
    }
    
    
};

} // namespace message

} // namespace ublox


