/// @file
/// @brief Contains definition of <b>"NAV-SOL"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Dop.h"
#include "ublox/field/EcefVX.h"
#include "ublox/field/EcefVY.h"
#include "ublox/field/EcefVZ.h"
#include "ublox/field/EcefX.h"
#include "ublox/field/EcefY.h"
#include "ublox/field/EcefZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Ftow.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/Itow.h"
#include "ublox/field/PAcc.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/field/SAcc.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavSolFields.
/// @see @ref NavSolFields
/// @headerfile "ublox/message/NavSol.h"
struct NavSolFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavSolFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSfixOK",
                "DiffSoln",
                "WKNSET",
                "TOWSET"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref NavSol.
/// @tparam TOpt Extra options
/// @see @ref NavSol
/// @headerfile "ublox/message/NavSol.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSolFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"fTOW"</b> field.
    using Ftow =
        ublox::field::Ftow<
            TOpt
        >;
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Definition of <b>"gpsFix"</b> field.
    using GpsFix =
        ublox::field::GpsFix<
            TOpt
        >;
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_GPSfixOK, @b getBitValue_GPSfixOK() and @b setBitValue_GPSfixOK().
        ///      @li @b BitIdx_DiffSoln, @b getBitValue_DiffSoln() and @b setBitValue_DiffSoln().
        ///      @li @b BitIdx_WKNSET, @b getBitValue_WKNSET() and @b setBitValue_WKNSET().
        ///      @li @b BitIdx_TOWSET, @b getBitValue_TOWSET() and @b setBitValue_TOWSET().
        COMMS_BITMASK_BITS_SEQ(
            GPSfixOK,
            DiffSoln,
            WKNSET,
            TOWSET
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavSolFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        ublox::field::EcefX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        ublox::field::EcefY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        ublox::field::EcefZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"pAcc"</b> field.
    using PAcc =
        ublox::field::PAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVX"</b> field.
    using EcefVX =
        ublox::field::EcefVX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVY"</b> field.
    using EcefVY =
        ublox::field::EcefVY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefVZ"</b> field.
    using EcefVZ =
        ublox::field::EcefVZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"sAcc"</b> field.
    using SAcc =
        ublox::field::SAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"pDOP"</b> field.
    struct PDOP : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pDOP";
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
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSV";
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
        Itow,
        Ftow,
        Week,
        GpsFix,
        Flags,
        EcefX,
        EcefY,
        EcefZ,
        PAcc,
        EcefVX,
        EcefVY,
        EcefVZ,
        SAcc,
        PDOP,
        Reserved1,
        NumSV,
        Reserved2
    >;
};

/// @brief Definition of <b>"NAV-SOL"</b> message class.
/// @details
///     See @ref NavSolFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSol.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSol : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSol,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSol>,
        comms::option::def::FieldsImpl<typename NavSolFields<TOpt>::All>,
        comms::option::def::MsgType<NavSol<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSol,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSol>,
            comms::option::def::FieldsImpl<typename NavSolFields<TOpt>::All>,
            comms::option::def::MsgType<NavSol<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavSolFields::Itow field.
    ///     @li @b field_ftow() for @ref NavSolFields::Ftow field.
    ///     @li @b field_week() for @ref NavSolFields::Week field.
    ///     @li @b field_gpsFix() for @ref NavSolFields::GpsFix field.
    ///     @li @b field_flags() for @ref NavSolFields::Flags field.
    ///     @li @b field_ecefX() for @ref NavSolFields::EcefX field.
    ///     @li @b field_ecefY() for @ref NavSolFields::EcefY field.
    ///     @li @b field_ecefZ() for @ref NavSolFields::EcefZ field.
    ///     @li @b field_pAcc() for @ref NavSolFields::PAcc field.
    ///     @li @b field_ecefVX() for @ref NavSolFields::EcefVX field.
    ///     @li @b field_ecefVY() for @ref NavSolFields::EcefVY field.
    ///     @li @b field_ecefVZ() for @ref NavSolFields::EcefVZ field.
    ///     @li @b field_sAcc() for @ref NavSolFields::SAcc field.
    ///     @li @b field_pDOP() for @ref NavSolFields::PDOP field.
    ///     @li @b field_reserved1() for @ref NavSolFields::Reserved1 field.
    ///     @li @b field_numSV() for @ref NavSolFields::NumSV field.
    ///     @li @b field_reserved2() for @ref NavSolFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        ftow,
        week,
        gpsFix,
        flags,
        ecefX,
        ecefY,
        ecefZ,
        pAcc,
        ecefVX,
        ecefVY,
        ecefVZ,
        sAcc,
        pDOP,
        reserved1,
        numSV,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 52U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 52U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-SOL";
    }
    
    
};

} // namespace message

} // namespace ublox


