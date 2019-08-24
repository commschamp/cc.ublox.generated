/// @file
/// @brief Contains definition of <b>"NAV-PVT (ublox-8)"</b> message and its fields.

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
#include "ublox/field/Dop.h"
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
#include "ublox/field/Vel.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavPvt_u8Fields.
/// @see @ref NavPvt_u8Fields
/// @headerfile "ublox/message/NavPvt_u8.h"
struct NavPvt_u8FieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavPvt_u8Fields::Valid field.
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
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavPvt_u8Fields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::LowBits field.
        struct LowBitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "gnssFixOK",
                    "diffSoln"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::PsmState field.
        enum class PsmStateVal : std::uint8_t
        {
            NotAvailable = 0, ///< value <b>N/A</b>.
            Enabled = 1, ///< value <b>ENABLED</b>.
            Acquisition = 2, ///< value <b>ACQUISITION</b>.
            Tracking = 3, ///< value <b>TRACKING</b>.
            PowerOptTracking = 4, ///< value <b>POWER OPTIMIZED TRACKING</b>.
            Inactive = 5, ///< value <b>INACTIVE</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 5, ///< Last defined value.
            ValuesLimit = 6, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::PsmState field.
        struct PsmStateCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(PsmStateVal val)
            {
                static const char* Map[] = {
                    "N/A",
                    "ENABLED",
                    "ACQUISITION",
                    "TRACKING",
                    "POWER OPTIMIZED TRACKING",
                    "INACTIVE"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::MidBits field.
        struct MidBitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "headVehValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::CarrSoln field.
        enum class CarrSolnVal : std::uint8_t
        {
            NoCarrier = 0, ///< value <b>No carrier</b>.
            Float = 1, ///< value <b>Float solution</b>.
            Fixed = 2, ///< value <b>Fixed solution</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::CarrSoln field.
        struct CarrSolnCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(CarrSolnVal val)
            {
                static const char* Map[] = {
                    "No carrier",
                    "Float solution",
                    "Fixed solution"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavPvt_u8Fields::Flags2 field.
    struct Flags2Common
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "confirmedAvai",
                "confirmedDate",
                "confirmedTime"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref NavPvt_u8.
/// @tparam TOpt Extra options
/// @see @ref NavPvt_u8
/// @headerfile "ublox/message/NavPvt_u8.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavPvt_u8Fields
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
                ublox::message::NavPvt_u8FieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"tAcc"</b> field.
    struct TAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAcc";
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
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class LowBits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_gnssFixOK, @b getBitValue_gnssFixOK() and @b setBitValue_gnssFixOK().
            ///      @li @b BitIdx_diffSoln, @b getBitValue_diffSoln() and @b setBitValue_diffSoln().
            COMMS_BITMASK_BITS_SEQ(
                gnssFixOK,
                diffSoln
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
                    ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::LowBitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::PsmState field.
        using PsmStateVal = ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::PsmStateVal;
        
        /// @brief Definition of <b>"psmState"</b> field.
        /// @see @ref ublox::message::NavPvt_u8Fields::FlagsMembers::PsmStateVal
        struct PsmState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                PsmStateVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 5>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "psmState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(PsmStateVal val)
            {
                return ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::PsmStateCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class MidBits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<1U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<1U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_headVehValid, @b getBitValue_headVehValid() and @b setBitValue_headVehValid().
            COMMS_BITMASK_BITS_SEQ(
                headVehValid
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
                    ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::MidBitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavPvt_u8Fields::FlagsMembers::CarrSoln field.
        using CarrSolnVal = ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::CarrSolnVal;
        
        /// @brief Definition of <b>"carrSoln"</b> field.
        /// @see @ref ublox::message::NavPvt_u8Fields::FlagsMembers::CarrSolnVal
        struct CarrSoln : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                CarrSolnVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "carrSoln";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(CarrSolnVal val)
            {
                return ublox::message::NavPvt_u8FieldsCommon::FlagsMembersCommon::CarrSolnCommon::valueName(val);
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               LowBits,
               PsmState,
               MidBits,
               CarrSoln
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
        ///     @li @b field_lowBits() - for FlagsMembers::LowBits member field.
        ///     @li @b field_psmState() - for FlagsMembers::PsmState member field.
        ///     @li @b field_midBits() - for FlagsMembers::MidBits member field.
        ///     @li @b field_carrSoln() - for FlagsMembers::CarrSoln member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            lowBits,
            psmState,
            midBits,
            carrSoln
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"flags2"</b> field.
    class Flags2 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0x1FU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0x1FU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_confirmedAvai.
        ///      @li @b BitIdx_confirmedDate.
        ///      @li @b BitIdx_confirmedTime.
        COMMS_BITMASK_BITS(
            confirmedAvai=5,
            confirmedDate=6,
            confirmedTime=7
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_confirmedAvai() and @b setBitValue_confirmedAvai().
        ///      @li @b getBitValue_confirmedDate() and @b setBitValue_confirmedDate().
        ///      @li @b getBitValue_confirmedTime() and @b setBitValue_confirmedTime().
        COMMS_BITMASK_BITS_ACCESS(
            confirmedAvai,
            confirmedDate,
            confirmedTime
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags2";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavPvt_u8FieldsCommon::Flags2Common::bitName(
                    static_cast<std::size_t>(idx));
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
    
    /// @brief Definition of <b>"velN"</b> field.
    struct VelN : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velN";
        }
        
    };
    
    /// @brief Definition of <b>"velE"</b> field.
    struct VelE : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velE";
        }
        
    };
    
    /// @brief Definition of <b>"velD"</b> field.
    struct VelD : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "velD";
        }
        
    };
    
    /// @brief Definition of <b>"gSpeed"</b> field.
    struct GSpeed : public
        ublox::field::Vel<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gSpeed";
        }
        
    };
    
    /// @brief Definition of <b>"heading"</b> field.
    using Heading =
        ublox::field::Heading<
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
    
    /// @brief Definition of <b>"headingAcc"</b> field.
    using HeadingAcc =
        ublox::field::HeadingAcc<
            TOpt
        >;
    
    /// @brief Definition of <b>"pDop"</b> field.
    struct PDop : public
        ublox::field::Dop<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pDop";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Definition of <b>"headVeh"</b> field.
    struct HeadVeh : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 100000L>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "headVeh";
        }
        
    };
    
    /// @brief Definition of <b>"magDec"</b> field.
    struct MagDec : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 100>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "magDec";
        }
        
    };
    
    /// @brief Definition of <b>"magAcc"</b> field.
    struct MagAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 100>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "magAcc";
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
        TAcc,
        Nano,
        FixType,
        Flags,
        Flags2,
        NumSV,
        Lon,
        Lat,
        Height,
        HMSL,
        HAcc,
        VAcc,
        VelN,
        VelE,
        VelD,
        GSpeed,
        Heading,
        SAcc,
        HeadingAcc,
        PDop,
        Reserved2,
        Reserved3,
        HeadVeh,
        MagDec,
        MagAcc
    >;
};

/// @brief Definition of <b>"NAV-PVT (ublox-8)"</b> message class.
/// @details
///     Updated version of NAV-PVT message introduced in ublox-8 @n
///     See @ref NavPvt_u8Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavPvt_u8.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavPvt_u8 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavPvt_u8,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPvt>,
        comms::option::def::FieldsImpl<typename NavPvt_u8Fields<TOpt>::All>,
        comms::option::def::MsgType<NavPvt_u8<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavPvt_u8,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavPvt>,
            comms::option::def::FieldsImpl<typename NavPvt_u8Fields<TOpt>::All>,
            comms::option::def::MsgType<NavPvt_u8<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavPvt_u8Fields::Itow field.
    ///     @li @b field_year() for @ref NavPvt_u8Fields::Year field.
    ///     @li @b field_month() for @ref NavPvt_u8Fields::Month field.
    ///     @li @b field_day() for @ref NavPvt_u8Fields::Day field.
    ///     @li @b field_hour() for @ref NavPvt_u8Fields::Hour field.
    ///     @li @b field_min() for @ref NavPvt_u8Fields::Min field.
    ///     @li @b field_sec() for @ref NavPvt_u8Fields::Sec field.
    ///     @li @b field_valid() for @ref NavPvt_u8Fields::Valid field.
    ///     @li @b field_tAcc() for @ref NavPvt_u8Fields::TAcc field.
    ///     @li @b field_nano() for @ref NavPvt_u8Fields::Nano field.
    ///     @li @b field_fixType() for @ref NavPvt_u8Fields::FixType field.
    ///     @li @b field_flags() for @ref NavPvt_u8Fields::Flags field.
    ///     @li @b field_flags2() for @ref NavPvt_u8Fields::Flags2 field.
    ///     @li @b field_numSV() for @ref NavPvt_u8Fields::NumSV field.
    ///     @li @b field_lon() for @ref NavPvt_u8Fields::Lon field.
    ///     @li @b field_lat() for @ref NavPvt_u8Fields::Lat field.
    ///     @li @b field_height() for @ref NavPvt_u8Fields::Height field.
    ///     @li @b field_hMSL() for @ref NavPvt_u8Fields::HMSL field.
    ///     @li @b field_hAcc() for @ref NavPvt_u8Fields::HAcc field.
    ///     @li @b field_vAcc() for @ref NavPvt_u8Fields::VAcc field.
    ///     @li @b field_velN() for @ref NavPvt_u8Fields::VelN field.
    ///     @li @b field_velE() for @ref NavPvt_u8Fields::VelE field.
    ///     @li @b field_velD() for @ref NavPvt_u8Fields::VelD field.
    ///     @li @b field_gSpeed() for @ref NavPvt_u8Fields::GSpeed field.
    ///     @li @b field_heading() for @ref NavPvt_u8Fields::Heading field.
    ///     @li @b field_sAcc() for @ref NavPvt_u8Fields::SAcc field.
    ///     @li @b field_headingAcc() for @ref NavPvt_u8Fields::HeadingAcc field.
    ///     @li @b field_pDop() for @ref NavPvt_u8Fields::PDop field.
    ///     @li @b field_reserved2() for @ref NavPvt_u8Fields::Reserved2 field.
    ///     @li @b field_reserved3() for @ref NavPvt_u8Fields::Reserved3 field.
    ///     @li @b field_headVeh() for @ref NavPvt_u8Fields::HeadVeh field.
    ///     @li @b field_magDec() for @ref NavPvt_u8Fields::MagDec field.
    ///     @li @b field_magAcc() for @ref NavPvt_u8Fields::MagAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid,
        tAcc,
        nano,
        fixType,
        flags,
        flags2,
        numSV,
        lon,
        lat,
        height,
        hMSL,
        hAcc,
        vAcc,
        velN,
        velE,
        velD,
        gSpeed,
        heading,
        sAcc,
        headingAcc,
        pDop,
        reserved2,
        reserved3,
        headVeh,
        magDec,
        magAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 92U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 92U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-PVT (ublox-8)";
    }
    
    
};

} // namespace message

} // namespace ublox


