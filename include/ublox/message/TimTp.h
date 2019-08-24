/// @file
/// @brief Contains definition of <b>"TIM-TP"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimTpFields.
/// @see @ref TimTpFields
/// @headerfile "ublox/message/TimTp.h"
struct TimTpFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTpFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "timeBase",
                    "utc"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
        enum class RaimVal : std::uint8_t
        {
            NotAvailable = 0, ///< value @b NotAvailable
            NotActive = 1, ///< value @b NotActive
            Active = 2, ///< value @b Active
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
        struct RaimCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(RaimVal val)
            {
                static const char* Map[] = {
                    "NotAvailable",
                    "NotActive",
                    "Active"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTpFields::RefInfo bitfield.
    struct RefInfoMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
        enum class TimeRefGnssVal : std::uint8_t
        {
            GPS = 0, ///< value @b GPS
            GLONASS = 1, ///< value @b GLONASS
            BeiDou = 2, ///< value @b BeiDou
            Unknown = 15, ///< value @b Unknown
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 15, ///< Last defined value.
            ValuesLimit = 16, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
        struct TimeRefGnssCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeRefGnssVal val)
            {
                using NameInfo = std::pair<TimeRefGnssVal, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(TimeRefGnssVal::GPS, "GPS"),
                    std::make_pair(TimeRefGnssVal::GLONASS, "GLONASS"),
                    std::make_pair(TimeRefGnssVal::BeiDou, "BeiDou"),
                    std::make_pair(TimeRefGnssVal::Unknown, "Unknown")
                };
                
                auto iter = std::lower_bound(
                    std::begin(Map), std::end(Map), val,
                    [](const NameInfo& info, TimeRefGnssVal v) -> bool
                    {
                        return info.first < v;
                    });
                
                if ((iter == std::end(Map)) || (iter->first != val)) {
                    return nullptr;
                }
                
                return iter->second;
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
        enum class UtcStandardVal : std::uint8_t
        {
            NotAvailable = 0, ///< value @b NotAvailable
            CRL = 1, ///< value @b CRL
            NIST = 2, ///< value @b NIST
            USNO = 3, ///< value @b USNO
            BIMP = 4, ///< value @b BIMP
            EuLab = 5, ///< value @b EuLab
            SU = 6, ///< value @b SU
            Unknown = 15, ///< value @b Unknown
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 15, ///< Last defined value.
            ValuesLimit = 16, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
        struct UtcStandardCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(UtcStandardVal val)
            {
                using NameInfo = std::pair<UtcStandardVal, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(UtcStandardVal::NotAvailable, "NotAvailable"),
                    std::make_pair(UtcStandardVal::CRL, "CRL"),
                    std::make_pair(UtcStandardVal::NIST, "NIST"),
                    std::make_pair(UtcStandardVal::USNO, "USNO"),
                    std::make_pair(UtcStandardVal::BIMP, "BIMP"),
                    std::make_pair(UtcStandardVal::EuLab, "EuLab"),
                    std::make_pair(UtcStandardVal::SU, "SU"),
                    std::make_pair(UtcStandardVal::Unknown, "Unknown")
                };
                
                auto iter = std::lower_bound(
                    std::begin(Map), std::end(Map), val,
                    [](const NameInfo& info, UtcStandardVal v) -> bool
                    {
                        return info.first < v;
                    });
                
                if ((iter == std::end(Map)) || (iter->first != val)) {
                    return nullptr;
                }
                
                return iter->second;
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref TimTp.
/// @tparam TOpt Extra options
/// @see @ref TimTp
/// @headerfile "ublox/message/TimTp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimTpFields
{
    /// @brief Definition of <b>"towMS"</b> field.
    struct TowMS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towMS";
        }
        
    };
    
    /// @brief Definition of <b>"towSubMS"</b> field.
    struct TowSubMS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x100000000LL>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towSubMS";
        }
        
    };
    
    /// @brief Definition of <b>"qErr"</b> field.
    struct QErr : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "qErr";
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
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
            ///      @li @b BitIdx_timeBase, @b getBitValue_timeBase() and @b setBitValue_timeBase().
            ///      @li @b BitIdx_utc, @b getBitValue_utc() and @b setBitValue_utc().
            COMMS_BITMASK_BITS_SEQ(
                timeBase,
                utc
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
                    ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::FlagsMembers::Raim field.
        using RaimVal = ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimVal;
        
        /// @brief Definition of <b>"raim"</b> field.
        /// @see @ref ublox::message::TimTpFields::FlagsMembers::RaimVal
        struct Raim : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                RaimVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "raim";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(RaimVal val)
            {
                return ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               Raim,
               Reserved
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
        ///     @li @b field_bits() - for FlagsMembers::Bits member field.
        ///     @li @b field_raim() - for FlagsMembers::Raim member field.
        ///     @li @b field_reserved() - for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bits,
            raim,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RefInfo bitfield.
    struct RefInfoMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss field.
        using TimeRefGnssVal = ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssVal;
        
        /// @brief Definition of <b>"timeRefGnss"</b> field.
        /// @see @ref ublox::message::TimTpFields::RefInfoMembers::TimeRefGnssVal
        struct TimeRefGnss : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                TimeRefGnssVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<15>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "timeRefGnss";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeRefGnssVal val)
            {
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName(val);
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandard field.
        using UtcStandardVal = ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardVal;
        
        /// @brief Definition of <b>"utcStandard"</b> field.
        /// @see @ref ublox::message::TimTpFields::RefInfoMembers::UtcStandardVal
        struct UtcStandard : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                UtcStandardVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 6>,
                comms::option::def::ValidNumValue<15>
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
                return ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName(val);
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               TimeRefGnss,
               UtcStandard
            >;
    };
    
    /// @brief Definition of <b>"refInfo"</b> field.
    class RefInfo : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename RefInfoMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename RefInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_timeRefGnss() - for RefInfoMembers::TimeRefGnss member field.
        ///     @li @b field_utcStandard() - for RefInfoMembers::UtcStandard member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            timeRefGnss,
            utcStandard
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "refInfo";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TowMS,
        TowSubMS,
        QErr,
        Week,
        Flags,
        RefInfo
    >;
};

/// @brief Definition of <b>"TIM-TP"</b> message class.
/// @details
///     See @ref TimTpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimTp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimTp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimTp,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTp>,
        comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
        comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimTp,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTp>,
            comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
            comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_towMS() for @ref TimTpFields::TowMS field.
    ///     @li @b field_towSubMS() for @ref TimTpFields::TowSubMS field.
    ///     @li @b field_qErr() for @ref TimTpFields::QErr field.
    ///     @li @b field_week() for @ref TimTpFields::Week field.
    ///     @li @b field_flags() for @ref TimTpFields::Flags field.
    ///     @li @b field_refInfo() for @ref TimTpFields::RefInfo field.
    COMMS_MSG_FIELDS_ACCESS(
        towMS,
        towSubMS,
        qErr,
        week,
        flags,
        refInfo
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-TP";
    }
    
    
};

} // namespace message

} // namespace ublox


