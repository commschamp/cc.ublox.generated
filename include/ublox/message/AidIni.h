/// @file
/// @brief Contains definition of <b>"AID-INI"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"
#include "comms/field_cast.h"


namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref AidIniFields.
/// @see @ref AidIniFields
/// @headerfile "ublox/message/AidIni.h"
struct AidIniFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::AidIniFields::TmCfg field.
    struct TmCfgCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "fEdge",
                nullptr,
                nullptr,
                "tm1",
                nullptr,
                "f1"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::AidIniFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "pos",
                "time",
                "clockD",
                "tp",
                "clockF",
                "lla",
                "altInv",
                "prevTm",
                nullptr,
                nullptr,
                "utc"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref AidIni.
/// @tparam TOpt Extra options
/// @see @ref AidIni
/// @headerfile "ublox/message/AidIni.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidIniFields
{
    /// @brief Scope for all the member fields of @ref EcefX optional.
    struct EcefXMembers
    {
        /// @brief Definition of <b>"ecefX"</b> field.
        struct EcefX : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefX";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    struct EcefX : public
        comms::field::Optional<
            typename EcefXMembers::EcefX,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefX";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lat optional.
    struct LatMembers
    {
        /// @brief Definition of <b>"lat"</b> field.
        struct Lat : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "lat";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lat"</b> field.
    struct Lat : public
        comms::field::Optional<
            typename LatMembers::Lat,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lat";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefY optional.
    struct EcefYMembers
    {
        /// @brief Definition of <b>"ecefY"</b> field.
        struct EcefY : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefY";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefY"</b> field.
    struct EcefY : public
        comms::field::Optional<
            typename EcefYMembers::EcefY,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefY";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lon optional.
    struct LonMembers
    {
        /// @brief Definition of <b>"lon"</b> field.
        struct Lon : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 10000000L>,
                comms::option::def::UnitsDegrees
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "lon";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lon"</b> field.
    struct Lon : public
        comms::field::Optional<
            typename LonMembers::Lon,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lon";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref EcefZ optional.
    struct EcefZMembers
    {
        /// @brief Definition of <b>"ecefZ"</b> field.
        struct EcefZ : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ecefZ";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    struct EcefZ : public
        comms::field::Optional<
            typename EcefZMembers::EcefZ,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecefZ";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Alt optional.
    struct AltMembers
    {
        /// @brief Definition of <b>"alt"</b> field.
        struct Alt : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsCentimeters
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "alt";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"alt"</b> field.
    struct Alt : public
        comms::field::Optional<
            typename AltMembers::Alt,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "alt";
        }
        
    };
    
    /// @brief Definition of <b>"posAcc"</b> field.
    struct PosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "posAcc";
        }
        
    };
    
    /// @brief Definition of <b>"tmCfg"</b> field.
    class TmCfg : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFADU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFADU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_fEdge.
        ///      @li @b BitIdx_tm1.
        ///      @li @b BitIdx_f1.
        COMMS_BITMASK_BITS(
            fEdge=1,
            tm1=4,
            f1=6
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_fEdge() and @b setBitValue_fEdge().
        ///      @li @b getBitValue_tm1() and @b setBitValue_tm1().
        ///      @li @b getBitValue_f1() and @b setBitValue_f1().
        COMMS_BITMASK_BITS_ACCESS(
            fEdge,
            tm1,
            f1
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "tmCfg";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::AidIniFieldsCommon::TmCfgCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Wno optional.
    struct WnoMembers
    {
        /// @brief Definition of <b>"wno"</b> field.
        struct Wno : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::UnitsWeeks
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "wno";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"wno"</b> field.
    struct Wno : public
        comms::field::Optional<
            typename WnoMembers::Wno,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wno";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Date optional.
    struct DateMembers
    {
        /// @brief Scope for all the member fields of @ref DateBundle bundle.
        struct DateBundleMembers
        {
            /// @brief Definition of <b>"year"</b> field.
            struct Year : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::NumValueSerOffset<-2000>,
                    comms::option::def::DefaultNumValue<2000>,
                    comms::option::def::ValidNumValueRange<2000, 2255>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "year";
                }
                
            };
            
            /// @brief Definition of <b>"month"</b> field.
            struct Month : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "month";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Year,
                   Month
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class DateBundle : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename DateBundleMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename DateBundleMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_year() - for DateBundleMembers::Year member field.
            ///     @li @b field_month() - for DateBundleMembers::Month member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                year,
                month
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"date"</b> field.
    struct Date : public
        comms::field::Optional<
            typename DateMembers::DateBundle,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "date";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Tow optional.
    struct TowMembers
    {
        /// @brief Definition of <b>"tow"</b> field.
        struct Tow : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMilliseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "tow";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"tow"</b> field.
    struct Tow : public
        comms::field::Optional<
            typename TowMembers::Tow,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tow";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Time optional.
    struct TimeMembers
    {
        /// @brief Scope for all the member fields of @ref TimeBundle bundle.
        struct TimeBundleMembers
        {
            /// @brief Definition of <b>"day"</b> field.
            struct Day : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsDays
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "day";
                }
                
            };
            
            /// @brief Definition of <b>"hour"</b> field.
            struct Hour : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsHours
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "hour";
                }
                
            };
            
            /// @brief Definition of <b>"min"</b> field.
            struct Min : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMinutes
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "min";
                }
                
            };
            
            /// @brief Definition of <b>"sec"</b> field.
            struct Sec : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsSeconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "sec";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Day,
                   Hour,
                   Min,
                   Sec
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class TimeBundle : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename TimeBundleMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename TimeBundleMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_day() - for TimeBundleMembers::Day member field.
            ///     @li @b field_hour() - for TimeBundleMembers::Hour member field.
            ///     @li @b field_min() - for TimeBundleMembers::Min member field.
            ///     @li @b field_sec() - for TimeBundleMembers::Sec member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                day,
                hour,
                min,
                sec
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"time"</b> field.
    struct Time : public
        comms::field::Optional<
            typename TimeMembers::TimeBundle,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "time";
        }
        
    };
    
    /// @brief Definition of <b>"towNs"</b> field.
    struct TowNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towNs";
        }
        
    };
    
    /// @brief Definition of <b>"tAccMs"</b> field.
    struct TAccMs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAccMs";
        }
        
    };
    
    /// @brief Definition of <b>"tAccNs"</b> field.
    struct TAccNs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAccNs";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ClkD optional.
    struct ClkDMembers
    {
        /// @brief Definition of <b>"clkD"</b> field.
        struct ClkD : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsNanoseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "clkD";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"clkD"</b> field.
    struct ClkD : public
        comms::field::Optional<
            typename ClkDMembers::ClkD,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkD";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Freq optional.
    struct FreqMembers
    {
        /// @brief Definition of <b>"freq"</b> field.
        struct Freq : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 100>,
                comms::option::def::UnitsHertz
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "freq";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freq"</b> field.
    struct Freq : public
        comms::field::Optional<
            typename FreqMembers::Freq,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freq";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ClkDAcc optional.
    struct ClkDAccMembers
    {
        /// @brief Definition of <b>"clkDAcc"</b> field.
        struct ClkDAcc : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsNanoseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "clkDAcc";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"clkDAcc"</b> field.
    struct ClkDAcc : public
        comms::field::Optional<
            typename ClkDAccMembers::ClkDAcc,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "clkDAcc";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref FreqAcc optional.
    struct FreqAccMembers
    {
        /// @brief Definition of <b>"freqAcc"</b> field.
        struct FreqAcc : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "freqAcc";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freqAcc"</b> field.
    struct FreqAcc : public
        comms::field::Optional<
            typename FreqAccMembers::FreqAcc,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freqAcc";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFB00UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFB00UL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_pos.
        ///      @li @b BitIdx_time.
        ///      @li @b BitIdx_clockD.
        ///      @li @b BitIdx_tp.
        ///      @li @b BitIdx_clockF.
        ///      @li @b BitIdx_lla.
        ///      @li @b BitIdx_altInv.
        ///      @li @b BitIdx_prevTm.
        ///      @li @b BitIdx_utc.
        COMMS_BITMASK_BITS(
            pos=0,
            time=1,
            clockD=2,
            tp=3,
            clockF=4,
            lla=5,
            altInv=6,
            prevTm=7,
            utc=10
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_pos() and @b setBitValue_pos().
        ///      @li @b getBitValue_time() and @b setBitValue_time().
        ///      @li @b getBitValue_clockD() and @b setBitValue_clockD().
        ///      @li @b getBitValue_tp() and @b setBitValue_tp().
        ///      @li @b getBitValue_clockF() and @b setBitValue_clockF().
        ///      @li @b getBitValue_lla() and @b setBitValue_lla().
        ///      @li @b getBitValue_altInv() and @b setBitValue_altInv().
        ///      @li @b getBitValue_prevTm() and @b setBitValue_prevTm().
        ///      @li @b getBitValue_utc() and @b setBitValue_utc().
        COMMS_BITMASK_BITS_ACCESS(
            pos,
            time,
            clockD,
            tp,
            clockF,
            lla,
            altInv,
            prevTm,
            utc
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
                ublox::message::AidIniFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        EcefX,
        Lat,
        EcefY,
        Lon,
        EcefZ,
        Alt,
        PosAcc,
        TmCfg,
        Wno,
        Date,
        Tow,
        Time,
        TowNs,
        TAccMs,
        TAccNs,
        ClkD,
        Freq,
        ClkDAcc,
        FreqAcc,
        Flags
    >;
};

/// @brief Definition of <b>"AID-INI"</b> message class.
/// @details
///     See @ref AidIniFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidIni.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidIni : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidIni>,
        comms::option::def::FieldsImpl<typename AidIniFields<TOpt>::All>,
        comms::option::def::MsgType<AidIni<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidIni>,
            comms::option::def::FieldsImpl<typename AidIniFields<TOpt>::All>,
            comms::option::def::MsgType<AidIni<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_ecefX() for @ref AidIniFields::EcefX field.
    ///     @li @b field_lat() for @ref AidIniFields::Lat field.
    ///     @li @b field_ecefY() for @ref AidIniFields::EcefY field.
    ///     @li @b field_lon() for @ref AidIniFields::Lon field.
    ///     @li @b field_ecefZ() for @ref AidIniFields::EcefZ field.
    ///     @li @b field_alt() for @ref AidIniFields::Alt field.
    ///     @li @b field_posAcc() for @ref AidIniFields::PosAcc field.
    ///     @li @b field_tmCfg() for @ref AidIniFields::TmCfg field.
    ///     @li @b field_wno() for @ref AidIniFields::Wno field.
    ///     @li @b field_date() for @ref AidIniFields::Date field.
    ///     @li @b field_tow() for @ref AidIniFields::Tow field.
    ///     @li @b field_time() for @ref AidIniFields::Time field.
    ///     @li @b field_towNs() for @ref AidIniFields::TowNs field.
    ///     @li @b field_tAccMs() for @ref AidIniFields::TAccMs field.
    ///     @li @b field_tAccNs() for @ref AidIniFields::TAccNs field.
    ///     @li @b field_clkD() for @ref AidIniFields::ClkD field.
    ///     @li @b field_freq() for @ref AidIniFields::Freq field.
    ///     @li @b field_clkDAcc() for @ref AidIniFields::ClkDAcc field.
    ///     @li @b field_freqAcc() for @ref AidIniFields::FreqAcc field.
    ///     @li @b field_flags() for @ref AidIniFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        ecefX,
        lat,
        ecefY,
        lon,
        ecefZ,
        alt,
        posAcc,
        tmCfg,
        wno,
        date,
        tow,
        time,
        towNs,
        tAccMs,
        tAccNs,
        clkD,
        freq,
        clkDAcc,
        freqAcc,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 22U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 74U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-INI";
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::doRead(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        refresh_ecefXLat(true);
        refresh_ecefYLon(true);
        refresh_ecefZAlt(true);
        refresh_wnoDate(true);
        refresh_towTime(true);
        refresh_clkDFreq(true);
        refresh_clkDFreqAcc(true);
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_ecefXLat(false) || updated;
        updated = refresh_ecefYLon(false) || updated;
        updated = refresh_ecefZAlt(false) || updated;
        updated = refresh_wnoDate(false) || updated;
        updated = refresh_towTime(false) || updated;
        updated = refresh_clkDFreq(false) || updated;    
        updated = refresh_clkDFreqAcc(false) || updated;    
        return updated;
    }
    
    
private:
    template <typename TFirst, typename TSecond>
    static bool refreshFields(TFirst& first, TSecond& second, bool enableSecond, bool updateValue)
    {
        if ((first.isMissing() == enableSecond) &&
            (second.doesExist() == enableSecond)) {
            return false;
        }
    
        auto firstMode = comms::field::OptionalMode::Missing;
        auto secondMode = comms::field::OptionalMode::Exists;
        if (!enableSecond) {
            std::swap(firstMode, secondMode);
        }
    
        first.setMode(firstMode);
        second.setMode(secondMode);
    
        if (!updateValue) {
            return true;
        }
    
        if (enableSecond) {
            second.field() = 
                comms::field_cast<typename std::decay<decltype(second.field())>::type>(
                    first.field());
        }
        else {
            first.field() = 
                comms::field_cast<typename std::decay<decltype(first.field())>::type>(
                    second.field());
        }
    
        return true;
    }
    
    bool refresh_ecefXLat(bool updateValue)
    {
        return refreshFields(field_ecefX(), field_lat(), field_flags().getBitValue_lla(), updateValue);
    }
    
    bool refresh_ecefYLon(bool updateValue)
    {
        return refreshFields(field_ecefY(), field_lon(), field_flags().getBitValue_lla(), updateValue);
    } 
    
    bool refresh_ecefZAlt(bool updateValue)
    {
        return refreshFields(field_ecefZ(), field_alt(), field_flags().getBitValue_lla(), updateValue);
    }   
    
    bool refresh_wnoDate(bool upadteValue)
    {
        return refreshFields(field_wno(), field_date(), field_flags().getBitValue_utc(), upadteValue);
    }
    
    bool refresh_towTime(bool upadteValue)
    {
        return refreshFields(field_tow(), field_time(), field_flags().getBitValue_utc(), upadteValue);
    }
    
    bool refresh_clkDFreq(bool updateValue)
    {
        return refreshFields(field_clkD(), field_freq(), field_flags().getBitValue_clockF(), updateValue);
    }
    
    bool refresh_clkDFreqAcc(bool updateValue)
    {
        return refreshFields(field_clkDAcc(), field_freqAcc(), field_flags().getBitValue_clockF(), updateValue);
    }
    
};

} // namespace message

} // namespace ublox


