/// @file
/// @brief Contains definition of <b>"CFG-NAVX5"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgNavx5AopCfg.h"
#include "ublox/field/CfgNavx5AopOrbMaxErr.h"
#include "ublox/field/CfgNavx5Mask1.h"
#include "ublox/field/CfgNavx5Mask2.h"
#include "ublox/field/CfgNavx5SigAttenCompMode.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNavx5V2.
/// @tparam TOpt Extra options
/// @see @ref CfgNavx5V2
/// @headerfile "ublox/message/CfgNavx5V2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNavx5V2Fields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"mask1"</b> field.
    using Mask1 =
        ublox::field::CfgNavx5Mask1<
            TOpt
        >;
    
    /// @brief Definition of <b>"mask2"</b> field.
    using Mask2 =
        ublox::field::CfgNavx5Mask2<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"minSVs"</b> field.
    struct MinSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minSVs";
        }
        
    };
    
    /// @brief Definition of <b>"maxSVs"</b> field.
    struct MaxSVs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxSVs";
        }
        
    };
    
    /// @brief Definition of <b>"minCNO"</b> field.
    struct MinCNO : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minCNO";
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
    
    /// @brief Definition of <b>"iniFix3D"</b> field.
    struct IniFix3D : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "iniFix3D";
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
    
    /// @brief Definition of <b>"ackAiding"</b> field.
    struct AckAiding : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ackAiding";
        }
        
    };
    
    /// @brief Definition of <b>"wknRollover"</b> field.
    struct WknRollover : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wknRollover";
        }
        
    };
    
    /// @brief Definition of <b>"sigAttenCompMode"</b> field.
    using SigAttenCompMode =
        ublox::field::CfgNavx5SigAttenCompMode<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Definition of <b>"reserved5"</b> field.
    struct Reserved5 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved5";
        }
        
    };
    
    /// @brief Definition of <b>"reserved6"</b> field.
    struct Reserved6 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved6";
        }
        
    };
    
    /// @brief Definition of <b>"usePPP"</b> field.
    struct UsePPP : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "usePPP";
        }
        
    };
    
    /// @brief Definition of <b>"aopCfg"</b> field.
    using AopCfg =
        ublox::field::CfgNavx5AopCfg<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved7"</b> field.
    struct Reserved7 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved7";
        }
        
    };
    
    /// @brief Definition of <b>"aopOrbMaxErr"</b> field.
    using AopOrbMaxErr =
        ublox::field::CfgNavx5AopOrbMaxErr<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved8"</b> field.
    struct Reserved8 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved8";
        }
        
    };
    
    /// @brief Definition of <b>"reserved9"</b> field.
    struct Reserved9 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved9";
        }
        
    };
    
    /// @brief Definition of <b>"useAdr"</b> field.
    struct UseAdr : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "useAdr";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Mask1,
        Mask2,
        Reserved1,
        MinSVs,
        MaxSVs,
        MinCNO,
        Reserved2,
        IniFix3D,
        Reserved3,
        AckAiding,
        WknRollover,
        SigAttenCompMode,
        Reserved4,
        Reserved5,
        Reserved6,
        UsePPP,
        AopCfg,
        Reserved7,
        AopOrbMaxErr,
        Reserved8,
        Reserved9,
        UseAdr
    >;
};

/// @brief Definition of <b>"CFG-NAVX5"</b> message class.
/// @details
///     See @ref CfgNavx5V2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNavx5V2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNavx5V2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
        comms::option::def::FieldsImpl<typename CfgNavx5V2Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNavx5V2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNavx5>,
            comms::option::def::FieldsImpl<typename CfgNavx5V2Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNavx5V2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgNavx5V2Fields::Version field.
    ///     @li @b field_mask1() for @ref CfgNavx5V2Fields::Mask1 field.
    ///     @li @b field_mask2() for @ref CfgNavx5V2Fields::Mask2 field.
    ///     @li @b field_reserved1() for @ref CfgNavx5V2Fields::Reserved1 field.
    ///     @li @b field_minSVs() for @ref CfgNavx5V2Fields::MinSVs field.
    ///     @li @b field_maxSVs() for @ref CfgNavx5V2Fields::MaxSVs field.
    ///     @li @b field_minCNO() for @ref CfgNavx5V2Fields::MinCNO field.
    ///     @li @b field_reserved2() for @ref CfgNavx5V2Fields::Reserved2 field.
    ///     @li @b field_iniFix3D() for @ref CfgNavx5V2Fields::IniFix3D field.
    ///     @li @b field_reserved3() for @ref CfgNavx5V2Fields::Reserved3 field.
    ///     @li @b field_ackAiding() for @ref CfgNavx5V2Fields::AckAiding field.
    ///     @li @b field_wknRollover() for @ref CfgNavx5V2Fields::WknRollover field.
    ///     @li @b field_sigAttenCompMode() for @ref CfgNavx5V2Fields::SigAttenCompMode field.
    ///     @li @b field_reserved4() for @ref CfgNavx5V2Fields::Reserved4 field.
    ///     @li @b field_reserved5() for @ref CfgNavx5V2Fields::Reserved5 field.
    ///     @li @b field_reserved6() for @ref CfgNavx5V2Fields::Reserved6 field.
    ///     @li @b field_usePPP() for @ref CfgNavx5V2Fields::UsePPP field.
    ///     @li @b field_aopCfg() for @ref CfgNavx5V2Fields::AopCfg field.
    ///     @li @b field_reserved7() for @ref CfgNavx5V2Fields::Reserved7 field.
    ///     @li @b field_aopOrbMaxErr() for @ref CfgNavx5V2Fields::AopOrbMaxErr field.
    ///     @li @b field_reserved8() for @ref CfgNavx5V2Fields::Reserved8 field.
    ///     @li @b field_reserved9() for @ref CfgNavx5V2Fields::Reserved9 field.
    ///     @li @b field_useAdr() for @ref CfgNavx5V2Fields::UseAdr field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        mask1,
        mask2,
        reserved1,
        minSVs,
        maxSVs,
        minCNO,
        reserved2,
        iniFix3D,
        reserved3,
        ackAiding,
        wknRollover,
        sigAttenCompMode,
        reserved4,
        reserved5,
        reserved6,
        usePPP,
        aopCfg,
        reserved7,
        aopOrbMaxErr,
        reserved8,
        reserved9,
        useAdr
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-NAVX5";
    }
    
    
};

} // namespace message

} // namespace ublox


