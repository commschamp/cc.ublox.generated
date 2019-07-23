/// @file
/// @brief Contains definition of <b>"MGA-GLO-ALM"</b> message and its fields.

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

/// @brief Fields of @ref MgaGloAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaGloAlm
/// @headerfile "ublox/message/MgaGloAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGloAlmFields
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
    
    /// @brief Definition of <b>"N"</b> field.
    struct N : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "N";
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
    
    /// @brief Definition of <b>"C"</b> field.
    struct C : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "C";
        }
        
    };
    
    /// @brief Definition of <b>"tau"</b> field.
    struct Tau : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 262144L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tau";
        }
        
    };
    
    /// @brief Definition of <b>"epsilon"</b> field.
    struct Epsilon : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "epsilon";
        }
        
    };
    
    /// @brief Definition of <b>"lambda"</b> field.
    struct Lambda : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lambda";
        }
        
    };
    
    /// @brief Definition of <b>"deltaI"</b> field.
    struct DeltaI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaI";
        }
        
    };
    
    /// @brief Definition of <b>"tLambda"</b> field.
    struct TLambda : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tLambda";
        }
        
    };
    
    /// @brief Definition of <b>"deltaT"</b> field.
    struct DeltaT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 512>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaT";
        }
        
    };
    
    /// @brief Definition of <b>"deltaDT"</b> field.
    struct DeltaDT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "deltaDT";
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
    
    /// @brief Definition of <b>"omega"</b> field.
    struct Omega : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "omega";
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
        N,
        M,
        C,
        Tau,
        Epsilon,
        Lambda,
        DeltaI,
        TLambda,
        DeltaT,
        DeltaDT,
        H,
        Omega,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GLO-ALM"</b> message class.
/// @details
///     See @ref MgaGloAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGloAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGloAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGloAlmFields::Type field.
    ///     @li @b field_version() for @ref MgaGloAlmFields::Version field.
    ///     @li @b field_svid() for @ref MgaGloAlmFields::Svid field.
    ///     @li @b field_reserved1() for @ref MgaGloAlmFields::Reserved1 field.
    ///     @li @b field_n() for @ref MgaGloAlmFields::N field.
    ///     @li @b field_m() for @ref MgaGloAlmFields::M field.
    ///     @li @b field_c() for @ref MgaGloAlmFields::C field.
    ///     @li @b field_tau() for @ref MgaGloAlmFields::Tau field.
    ///     @li @b field_epsilon() for @ref MgaGloAlmFields::Epsilon field.
    ///     @li @b field_lambda() for @ref MgaGloAlmFields::Lambda field.
    ///     @li @b field_deltaI() for @ref MgaGloAlmFields::DeltaI field.
    ///     @li @b field_tLambda() for @ref MgaGloAlmFields::TLambda field.
    ///     @li @b field_deltaT() for @ref MgaGloAlmFields::DeltaT field.
    ///     @li @b field_deltaDT() for @ref MgaGloAlmFields::DeltaDT field.
    ///     @li @b field_h() for @ref MgaGloAlmFields::H field.
    ///     @li @b field_omega() for @ref MgaGloAlmFields::Omega field.
    ///     @li @b field_reserved2() for @ref MgaGloAlmFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        svid,
        reserved1,
        n,
        m,
        c,
        tau,
        epsilon,
        lambda,
        deltaI,
        tLambda,
        deltaT,
        deltaDT,
        h,
        omega,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GLO-ALM";
    }
    
    
};

} // namespace message

} // namespace ublox


