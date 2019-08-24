/// @file
/// @brief Contains definition of <b>"HNR-PVT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/HAcc.h"
#include "ublox/field/HMSL.h"
#include "ublox/field/Heading.h"
#include "ublox/field/HeadingAcc.h"
#include "ublox/field/Height.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Lat.h"
#include "ublox/field/Lon.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Sec.h"
#include "ublox/field/VAcc.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref HnrPvtFields.
/// @see @ref HnrPvtFields
/// @headerfile "ublox/message/HnrPvt.h"
struct HnrPvtFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::HnrPvtFields::Valid field.
    struct ValidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "validDate",
                "validTime",
                "fullyResolved"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::HnrPvtFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSfixOK",
                "DiffSoln",
                "WKNSET",
                "TOWSET",
                "headVehValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref HnrPvt.
/// @tparam TOpt Extra options
/// @see @ref HnrPvt
/// @headerfile "ublox/message/HnrPvt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct HnrPvtFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"year"</b> field.
    using Year =
        ublox::field::Year<
            TOpt
        >;
    
    /// @brief Definition of <b>"month"</b> field.
    using Month =
        ublox::field::Month<
            TOpt
        >;
    
    /// @brief Definition of <b>"day"</b> field.
    using Day =
        ublox::field::Day<
            TOpt
        >;
    
    /// @brief Definition of <b>"hour"</b> field.
    using Hour =
        ublox::field::Hour<
            TOpt
        >;
    
    /// @brief Definition of <b>"min"</b> field.
    using Min =
        ublox::field::Min<
            TOpt
        >;
    
    /// @brief Definition of <b>"sec"</b> field.
    using Sec =
        ublox::field::Sec<
            TOpt
        >;
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_validDate, @b getBitValue_validDate() and @b setBitValue_validDate().
        ///      @li @b BitIdx_validTime, @b getBitValue_validTime() and @b setBitValue_validTime().
        ///      @li @b BitIdx_fullyResolved, @b getBitValue_fullyResolved() and @b setBitValue_fullyResolved().
        COMMS_BITMASK_BITS_SEQ(
            validDate,
            validTime,
            fullyResolved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::HnrPvtFieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"nano"</b> field.
    struct Nano : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nano";
        }
        
    };
    
    /// @brief Definition of <b>"fixType"</b> field.
    struct FixType : public
        ublox::field::GpsFix<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixType";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xE0U, 0x0U>
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
        ///      @li @b BitIdx_headVehValid, @b getBitValue_headVehValid() and @b setBitValue_headVehValid().
        COMMS_BITMASK_BITS_SEQ(
            GPSfixOK,
            DiffSoln,
            WKNSET,
            TOWSET,
            headVehValid
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
                ublox::message::HnrPvtFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
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
    
    /// @brief Definition of <b>"lon"</b> field.
    using Lon =
        ublox::field::Lon<
            TOpt
        >;
    
    /// @brief Definition of <b>"lat"</b> field.
    using Lat =
        ublox::field::Lat<
            TOpt
        >;
    
    /// @brief Definition of <b>"height"</b> field.
    using Height =
        ublox::field::Height<
            TOpt
        >;
    
    /// @brief Definition of <b>"hMSL"</b> field.
    using HMSL =
        ublox::field::HMSL<
            TOpt
        >;
    
    /// @brief Definition of <b>"gSpeed"</b> field.
    struct GSpeed : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMillimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Definition of <b>"speed"</b> field.
    struct Speed : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMillimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "speed";
        }
        
    };
    
    /// @brief Definition of <b>"headMot"</b> field.
    struct HeadMot : public
        ublox::field::Heading<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "headMot";
        }
        
    };
    
    /// @brief Definition of <b>"headVeh"</b> field.
    struct HeadVeh : public
        ublox::field::Heading<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "headVeh";
        }
        
    };
    
    /// @brief Definition of <b>"hAcc"</b> field.
    using HAcc =
        ublox::field::HAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"vAcc"</b> field.
    using VAcc =
        ublox::field::VAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"sAcc"</b> field.
    struct SAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMillimetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sAcc";
        }
        
    };
    
    /// @brief Definition of <b>"headAcc"</b> field.
    struct HeadAcc : public
        ublox::field::HeadingAcc<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "headAcc";
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
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        Valid,
        Nano,
        FixType,
        Flags,
        Reserved1,
        Lon,
        Lat,
        Height,
        HMSL,
        GSpeed,
        Speed,
        HeadMot,
        HeadVeh,
        HAcc,
        VAcc,
        SAcc,
        HeadAcc,
        Reserved2
    >;
};

/// @brief Definition of <b>"HNR-PVT"</b> message class.
/// @details
///     See @ref HnrPvtFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/HnrPvt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class HnrPvt : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::HnrPvt,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_HnrPvt>,
        comms::option::def::FieldsImpl<typename HnrPvtFields<TOpt>::All>,
        comms::option::def::MsgType<HnrPvt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::HnrPvt,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_HnrPvt>,
            comms::option::def::FieldsImpl<typename HnrPvtFields<TOpt>::All>,
            comms::option::def::MsgType<HnrPvt<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref HnrPvtFields::Itow field.
    ///     @li @b field_year() for @ref HnrPvtFields::Year field.
    ///     @li @b field_month() for @ref HnrPvtFields::Month field.
    ///     @li @b field_day() for @ref HnrPvtFields::Day field.
    ///     @li @b field_hour() for @ref HnrPvtFields::Hour field.
    ///     @li @b field_min() for @ref HnrPvtFields::Min field.
    ///     @li @b field_sec() for @ref HnrPvtFields::Sec field.
    ///     @li @b field_valid() for @ref HnrPvtFields::Valid field.
    ///     @li @b field_nano() for @ref HnrPvtFields::Nano field.
    ///     @li @b field_fixType() for @ref HnrPvtFields::FixType field.
    ///     @li @b field_flags() for @ref HnrPvtFields::Flags field.
    ///     @li @b field_reserved1() for @ref HnrPvtFields::Reserved1 field.
    ///     @li @b field_lon() for @ref HnrPvtFields::Lon field.
    ///     @li @b field_lat() for @ref HnrPvtFields::Lat field.
    ///     @li @b field_height() for @ref HnrPvtFields::Height field.
    ///     @li @b field_hMSL() for @ref HnrPvtFields::HMSL field.
    ///     @li @b field_gSpeed() for @ref HnrPvtFields::GSpeed field.
    ///     @li @b field_speed() for @ref HnrPvtFields::Speed field.
    ///     @li @b field_headMot() for @ref HnrPvtFields::HeadMot field.
    ///     @li @b field_headVeh() for @ref HnrPvtFields::HeadVeh field.
    ///     @li @b field_hAcc() for @ref HnrPvtFields::HAcc field.
    ///     @li @b field_vAcc() for @ref HnrPvtFields::VAcc field.
    ///     @li @b field_sAcc() for @ref HnrPvtFields::SAcc field.
    ///     @li @b field_headAcc() for @ref HnrPvtFields::HeadAcc field.
    ///     @li @b field_reserved2() for @ref HnrPvtFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid,
        nano,
        fixType,
        flags,
        reserved1,
        lon,
        lat,
        height,
        hMSL,
        gSpeed,
        speed,
        headMot,
        headVeh,
        hAcc,
        vAcc,
        sAcc,
        headAcc,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 72U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 72U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "HNR-PVT";
    }
    
    
};

} // namespace message

} // namespace ublox


