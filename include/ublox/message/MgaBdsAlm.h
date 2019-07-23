/// @file
/// @brief Contains definition of <b>"MGA-BDS-ALM"</b> message and its fields.

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

/// @brief Fields of @ref MgaBdsAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsAlm
/// @headerfile "ublox/message/MgaBdsAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsAlmFields
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
    
    /// @brief Definition of <b>"Wna"</b> field.
    struct Wna : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Wna";
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
            std::int16_t,
            comms::option::def::ScalingRatio<1, 524288L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Definition of <b>"sqrtA"</b> field.
    struct SqrtA : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 2048>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sqrtA";
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
    
    /// @brief Definition of <b>"M0"</b> field.
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
            return "M0";
        }
        
    };
    
    /// @brief Definition of <b>"Omega0"</b> field.
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
            return "Omega0";
        }
        
    };
    
    /// @brief Definition of <b>"omegaDot"</b> field.
    struct OmegaDot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omegaDot";
        }
        
    };
    
    /// @brief Definition of <b>"a0"</b> field.
    struct A0 : public
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
            return "a0";
        }
        
    };
    
    /// @brief Definition of <b>"a1"</b> field.
    struct A1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x4000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a1";
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
        Wna,
        Toa,
        DeltaI,
        SqrtA,
        E,
        Omega,
        M0,
        Omega0,
        OmegaDot,
        A0,
        A1,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-ALM"</b> message class.
/// @details
///     See @ref MgaBdsAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaBdsAlmFields::Type field.
    ///     @li @b field_version() for @ref MgaBdsAlmFields::Version field.
    ///     @li @b field_svid() for @ref MgaBdsAlmFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaBdsAlmFields::Reserved1 field.
    ///     @li @b field_wna() for @ref MgaBdsAlmFields::Wna field.
    ///     @li @b field_toa() for @ref MgaBdsAlmFields::Toa field.
    ///     @li @b field_deltaI() for @ref MgaBdsAlmFields::DeltaI field.
    ///     @li @b field_sqrtA() for @ref MgaBdsAlmFields::SqrtA field.
    ///     @li @b field_e() for @ref MgaBdsAlmFields::E field.
    ///     @li @b field_omega() for @ref MgaBdsAlmFields::Omega field.
    ///     @li @b field_m0() for @ref MgaBdsAlmFields::M0 field.
    ///     @li @b field_omega0() for @ref MgaBdsAlmFields::Omega0 field.
    ///     @li @b field_omegaDot() for @ref MgaBdsAlmFields::OmegaDot field.
    ///     @li @b field_a0() for @ref MgaBdsAlmFields::A0 field.
    ///     @li @b field_a1() for @ref MgaBdsAlmFields::A1 field.
    ///     @li @b field_reserved2() for @ref MgaBdsAlmFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        wna,
        toa,
        deltaI,
        sqrtA,
        e,
        omega,
        m0,
        omega0,
        omegaDot,
        a0,
        a1,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-ALM";
    }
    
    
};

} // namespace message

} // namespace ublox


