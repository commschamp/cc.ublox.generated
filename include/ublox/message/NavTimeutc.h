/// @file
/// @brief Contains definition of <b>"NAV-TIMEUTC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavTimeutc.
/// @tparam TOpt Extra options
/// @see @ref NavTimeutc
/// @headerfile "ublox/message/NavTimeutc.h"
template <typename TOpt = ublox::DefaultOptions>
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
            comms::option::UnitsNanoseconds
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
            comms::option::UnitsNanoseconds,
            comms::option::ValidNumValueRange<-1000000000L, 100000000L>
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
                comms::option::FixedBitLength<4U>,
                comms::option::BitmaskReservedBits<0x8U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::FixedBitLength<4U>,
                    comms::option::BitmaskReservedBits<0x8U, 0x0U>
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
            
        };
        
        /// @brief Values enumerator for @ref UtcStandard field.
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
            
        };
        
        /// @brief Definition of <b>"utcStandard"</b> field.
        struct UtcStandard : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                UtcStandardVal,
                comms::option::FixedBitLength<4U>,
                comms::option::ValidNumValueRange<0, 7>,
                comms::option::ValidNumValue<15>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "utcStandard";
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
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class NavTimeutc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimeutc,
        comms::option::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
        comms::option::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
        comms::option::MsgType<NavTimeutc<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimeutc,
            comms::option::StaticNumIdImpl<ublox::MsgId_NavTimeutc>,
            comms::option::FieldsImpl<typename NavTimeutcFields<TOpt>::All>,
            comms::option::MsgType<NavTimeutc<TMsgBase, TOpt> >,
            comms::option::HasName
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


