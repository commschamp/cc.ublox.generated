/// @file
/// @brief Contains definition of <b>"TIM-TOS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimTosFields.
/// @see @ref TimTosFields
/// @headerfile "ublox/message/TimTos.h"
struct TimTosFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTosFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "leapNow",
                    "leapSoon",
                    "leapPositive",
                    "timeInLimit",
                    "intOscInLimit",
                    "extOscInLimit",
                    "gnssTimeValid",
                    "UTCTimeValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
        enum class DiscSrcVal : std::uint8_t
        {
            Internal = 0, ///< value @b Internal
            GNSS = 1, ///< value @b GNSS
            EXTINT0 = 2, ///< value @b EXTINT0
            EXTINT1 = 3, ///< value @b EXTINT1
            HostInternal = 4, ///< value @b HostInternal
            HostExternal = 5, ///< value @b HostExternal
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 5, ///< Last defined value.
            ValuesLimit = 6, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
        struct DiscSrcCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(DiscSrcVal val)
            {
                static const char* Map[] = {
                    "Internal",
                    "GNSS",
                    "EXTINT0",
                    "EXTINT1",
                    "HostInternal",
                    "HostExternal"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "raim",
                    "cohPulse",
                    "lockedPulse"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimTosFields::UtcStandard field.
    enum class UtcStandardVal : std::uint8_t
    {
        Unknown = 0, ///< value @b Unknown
        USNO = 3, ///< value @b USNO
        SU = 6, ///< value @b SU
        NTSC = 7, ///< value @b NTSC
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 7, ///< Last defined value.
        ValuesLimit = 8, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::TimTosFields::UtcStandard field.
    struct UtcStandardCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(UtcStandardVal val)
        {
            static const char* Map[] = {
                "Unknown",
                nullptr,
                nullptr,
                "USNO",
                nullptr,
                nullptr,
                "SU",
                "NTSC"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref TimTos.
/// @tparam TOpt Extra options
/// @see @ref TimTos
/// @headerfile "ublox/message/TimTos.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimTosFields
{
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
    
    /// @brief Definition of <b>"gnssId"</b> field.
    using GnssId =
        ublox::field::GnssId<
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
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<8U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<8U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_leapNow, @b getBitValue_leapNow() and @b setBitValue_leapNow().
            ///      @li @b BitIdx_leapSoon, @b getBitValue_leapSoon() and @b setBitValue_leapSoon().
            ///      @li @b BitIdx_leapPositive, @b getBitValue_leapPositive() and @b setBitValue_leapPositive().
            ///      @li @b BitIdx_timeInLimit, @b getBitValue_timeInLimit() and @b setBitValue_timeInLimit().
            ///      @li @b BitIdx_intOscInLimit, @b getBitValue_intOscInLimit() and @b setBitValue_intOscInLimit().
            ///      @li @b BitIdx_extOscInLimit, @b getBitValue_extOscInLimit() and @b setBitValue_extOscInLimit().
            ///      @li @b BitIdx_gnssTimeValid, @b getBitValue_gnssTimeValid() and @b setBitValue_gnssTimeValid().
            ///      @li @b BitIdx_UTCTimeValid, @b getBitValue_UTCTimeValid() and @b setBitValue_UTCTimeValid().
            COMMS_BITMASK_BITS_SEQ(
                leapNow,
                leapSoon,
                leapPositive,
                timeInLimit,
                intOscInLimit,
                extOscInLimit,
                gnssTimeValid,
                UTCTimeValid
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::TimTosFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTosFields::FlagsMembers::DiscSrc field.
        using DiscSrcVal = ublox::message::TimTosFieldsCommon::FlagsMembersCommon::DiscSrcVal;
        
        /// @brief Definition of <b>"DiscSrc"</b> field.
        /// @see @ref ublox::message::TimTosFields::FlagsMembers::DiscSrcVal
        struct DiscSrc : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                DiscSrcVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 5>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "DiscSrc";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(DiscSrcVal val)
            {
                return ublox::message::TimTosFieldsCommon::FlagsMembersCommon::DiscSrcCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<21U>,
                comms::option::def::BitmaskReservedBits<0x1FFFF8UL, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<21U>,
                    comms::option::def::BitmaskReservedBits<0x1FFFF8UL, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_raim, @b getBitValue_raim() and @b setBitValue_raim().
            ///      @li @b BitIdx_cohPulse, @b getBitValue_cohPulse() and @b setBitValue_cohPulse().
            ///      @li @b BitIdx_lockedPulse, @b getBitValue_lockedPulse() and @b setBitValue_lockedPulse().
            COMMS_BITMASK_BITS_SEQ(
                raim,
                cohPulse,
                lockedPulse
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::TimTosFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               DiscSrc,
               BitsHigh
            >;
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_bitsLow() - for FlagsMembers::BitsLow member field.
        ///     @li @b field_discSrc() - for FlagsMembers::DiscSrc member field.
        ///     @li @b field_bitsHigh() - for FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bitsLow,
            discSrc,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
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
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimTosFields::UtcStandard field.
    using UtcStandardVal = ublox::message::TimTosFieldsCommon::UtcStandardVal;
    
    /// @brief Definition of <b>"utcStandard"</b> field.
    /// @see @ref ublox::message::TimTosFields::UtcStandardVal
    struct UtcStandard : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            UtcStandardVal,
            comms::option::def::ValidNumValue<0>,
            comms::option::def::ValidNumValue<3>,
            comms::option::def::ValidNumValueRange<6, 7>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcStandard";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(UtcStandardVal val)
        {
            return ublox::message::TimTosFieldsCommon::UtcStandardCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"utcOffset"</b> field.
    struct UtcOffset : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcOffset";
        }
        
    };
    
    /// @brief Definition of <b>"utcUncertainty"</b> field.
    struct UtcUncertainty : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcUncertainty";
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Definition of <b>"TOW"</b> field.
    struct TOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "TOW";
        }
        
    };
    
    /// @brief Definition of <b>"gnssOffset"</b> field.
    struct GnssOffset : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gnssOffset";
        }
        
    };
    
    /// @brief Definition of <b>"gnssUncertainy"</b> field.
    struct GnssUncertainy : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gnssUncertainy";
        }
        
    };
    
    /// @brief Definition of <b>"intOscOffset"</b> field.
    struct IntOscOffset : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "intOscOffset";
        }
        
    };
    
    /// @brief Definition of <b>"intOscUncertainty"</b> field.
    struct IntOscUncertainty : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "intOscUncertainty";
        }
        
    };
    
    /// @brief Definition of <b>"extOscOffset"</b> field.
    struct ExtOscOffset : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "extOscOffset";
        }
        
    };
    
    /// @brief Definition of <b>"extOscUncertainty"</b> field.
    struct ExtOscUncertainty : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "extOscUncertainty";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        GnssId,
        Reserved1,
        Flags,
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        UtcStandard,
        UtcOffset,
        UtcUncertainty,
        Week,
        TOW,
        GnssOffset,
        GnssUncertainy,
        IntOscOffset,
        IntOscUncertainty,
        ExtOscOffset,
        ExtOscUncertainty
    >;
};

/// @brief Definition of <b>"TIM-TOS"</b> message class.
/// @details
///     See @ref TimTosFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimTos.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimTos : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimTos,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTos>,
        comms::option::def::FieldsImpl<typename TimTosFields<TOpt>::All>,
        comms::option::def::MsgType<TimTos<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimTos,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTos>,
            comms::option::def::FieldsImpl<typename TimTosFields<TOpt>::All>,
            comms::option::def::MsgType<TimTos<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref TimTosFields::Version field.
    ///     @li @b field_gnssId() for @ref TimTosFields::GnssId field.
    ///     @li @b field_reserved1() for @ref TimTosFields::Reserved1 field.
    ///     @li @b field_flags() for @ref TimTosFields::Flags field.
    ///     @li @b field_year() for @ref TimTosFields::Year field.
    ///     @li @b field_month() for @ref TimTosFields::Month field.
    ///     @li @b field_day() for @ref TimTosFields::Day field.
    ///     @li @b field_hour() for @ref TimTosFields::Hour field.
    ///     @li @b field_min() for @ref TimTosFields::Min field.
    ///     @li @b field_sec() for @ref TimTosFields::Sec field.
    ///     @li @b field_utcStandard() for @ref TimTosFields::UtcStandard field.
    ///     @li @b field_utcOffset() for @ref TimTosFields::UtcOffset field.
    ///     @li @b field_utcUncertainty() for @ref TimTosFields::UtcUncertainty field.
    ///     @li @b field_week() for @ref TimTosFields::Week field.
    ///     @li @b field_tOW() for @ref TimTosFields::TOW field.
    ///     @li @b field_gnssOffset() for @ref TimTosFields::GnssOffset field.
    ///     @li @b field_gnssUncertainy() for @ref TimTosFields::GnssUncertainy field.
    ///     @li @b field_intOscOffset() for @ref TimTosFields::IntOscOffset field.
    ///     @li @b field_intOscUncertainty() for @ref TimTosFields::IntOscUncertainty field.
    ///     @li @b field_extOscOffset() for @ref TimTosFields::ExtOscOffset field.
    ///     @li @b field_extOscUncertainty() for @ref TimTosFields::ExtOscUncertainty field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        gnssId,
        reserved1,
        flags,
        year,
        month,
        day,
        hour,
        min,
        sec,
        utcStandard,
        utcOffset,
        utcUncertainty,
        week,
        tOW,
        gnssOffset,
        gnssUncertainy,
        intOscOffset,
        intOscUncertainty,
        extOscOffset,
        extOscUncertainty
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 56U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 56U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-TOS";
    }
    
    
};

} // namespace message

} // namespace ublox


