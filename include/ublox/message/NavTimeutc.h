/// @file
/// @brief Contains definition of <b>"NAV-TIMEUTC"</b> message and its fields.

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
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavTimeutcFields.
/// @see @ref NavTimeutcFields
/// @headerfile "ublox/message/NavTimeutc.h"
struct NavTimeutcFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavTimeutcFields::Valid bitfield.
    struct ValidMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "validTOW",
                    "validWKN",
                    "validUTC"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
        enum class UtcStandardVal : std::uint8_t
        {
            NotAvailable = 0, ///< value <b>Not Available</b>.
            CRL = 1, ///< value @b CRL
            NIST = 2, ///< value @b NIST
            USNO = 3, ///< value @b USNO
            BIPM = 4, ///< value @b BIPM
            EuLab = 5, ///< value @b EuLab
            SU = 6, ///< value @b SU
            NTSC = 7, ///< value @b NTSC
            Unknown = 15, ///< value @b Unknown
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 15, ///< Last defined value.
            ValuesLimit = 16, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
        struct UtcStandardCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(UtcStandardVal val)
            {
                using NameInfo = std::pair<UtcStandardVal, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(UtcStandardVal::NotAvailable, "Not Available"),
                    std::make_pair(UtcStandardVal::CRL, "CRL"),
                    std::make_pair(UtcStandardVal::NIST, "NIST"),
                    std::make_pair(UtcStandardVal::USNO, "USNO"),
                    std::make_pair(UtcStandardVal::BIPM, "BIPM"),
                    std::make_pair(UtcStandardVal::EuLab, "EuLab"),
                    std::make_pair(UtcStandardVal::SU, "SU"),
                    std::make_pair(UtcStandardVal::NTSC, "NTSC"),
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

/// @brief Fields of @ref NavTimeutc.
/// @tparam TOpt Extra options
/// @see @ref NavTimeutc
/// @headerfile "ublox/message/NavTimeutc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimeutcFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
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
            comms::option::def::UnitsNanoseconds,
            comms::option::def::ValidNumValueRange<-1000000000L, 100000000L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nano";
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
    
    /// @brief Scope for all the member fields of @ref Valid bitfield.
    struct ValidMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0x8U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0x8U, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_validTOW, @b getBitValue_validTOW() and @b setBitValue_validTOW().
            ///      @li @b BitIdx_validWKN, @b getBitValue_validWKN() and @b setBitValue_validWKN().
            ///      @li @b BitIdx_validUTC, @b getBitValue_validUTC() and @b setBitValue_validUTC().
            COMMS_BITMASK_BITS_SEQ(
                validTOW,
                validWKN,
                validUTC
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
                    ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandard field.
        using UtcStandardVal = ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardVal;
        
        /// @brief Definition of <b>"utcStandard"</b> field.
        /// @see @ref ublox::message::NavTimeutcFields::ValidMembers::UtcStandardVal
        struct UtcStandard : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                UtcStandardVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 7>,
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
                return ublox::message::NavTimeutcFieldsCommon::ValidMembersCommon::UtcStandardCommon::valueName(val);
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               UtcStandard
            >;
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ValidMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ValidMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_bits() - for ValidMembers::Bits member field.
        ///     @li @b field_utcStandard() - for ValidMembers::UtcStandard member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bits,
            utcStandard
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        TAcc,
        Nano,
        Year,
        Month,
        Day,
        Hour,
        Min,
        Sec,
        Valid
    >;
};

/// @brief Definition of <b>"NAV-TIMEUTC"</b> message class.
/// @details
///     See @ref NavTimeutcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimeutc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimeutc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimeutc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
        comms::option::def::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimeutc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimeutc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
            comms::option::def::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimeutc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavTimeutcFields::Itow field.
    ///     @li @b field_tAcc() for @ref NavTimeutcFields::TAcc field.
    ///     @li @b field_nano() for @ref NavTimeutcFields::Nano field.
    ///     @li @b field_year() for @ref NavTimeutcFields::Year field.
    ///     @li @b field_month() for @ref NavTimeutcFields::Month field.
    ///     @li @b field_day() for @ref NavTimeutcFields::Day field.
    ///     @li @b field_hour() for @ref NavTimeutcFields::Hour field.
    ///     @li @b field_min() for @ref NavTimeutcFields::Min field.
    ///     @li @b field_sec() for @ref NavTimeutcFields::Sec field.
    ///     @li @b field_valid() for @ref NavTimeutcFields::Valid field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        tAcc,
        nano,
        year,
        month,
        day,
        hour,
        min,
        sec,
        valid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-TIMEUTC";
    }
    
    
};

} // namespace message

} // namespace ublox


