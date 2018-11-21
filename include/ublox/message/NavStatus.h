/// @file
/// @brief Contains definition of <b>"NAV-STATUS"</b> message and its fields.

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
#include "ublox/field/FieldBase.h"
#include "ublox/field/GpsFix.h"
#include "ublox/field/Itow.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavStatus.
/// @tparam TOpt Extra options
/// @see @ref NavStatus
/// @headerfile "ublox/message/NavStatus.h"
template <typename TOpt = ublox::DefaultOptions>
struct NavStatusFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
           TOpt
       >;
    
    /// @brief Definition of <b>"gpsFix"</b> field.
    using GpsFix =
        ublox::field::GpsFix<
           TOpt
       >;
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::FixedLength<1U>,
            comms::option::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedLength<1U>,
                comms::option::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_gpsFixOk, @b getBitValue_gpsFixOk() and @b setBitValue_gpsFixOk().
        ///      @li @b BitIdx_diffSoln, @b getBitValue_diffSoln() and @b setBitValue_diffSoln().
        ///      @li @b BitIdx_wknSet, @b getBitValue_wknSet() and @b setBitValue_wknSet().
        ///      @li @b BitIdx_towSet, @b getBitValue_towSet() and @b setBitValue_towSet().
        COMMS_BITMASK_BITS_SEQ(
            gpsFixOk,
            diffSoln,
            wknSet,
            towSet
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref FixStat bitfield.
    struct FixStatMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedBitLength<6U>,
                comms::option::BitmaskReservedBits<0x3EU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::FixedBitLength<6U>,
                    comms::option::BitmaskReservedBits<0x3EU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_diffCorr, @b getBitValue_diffCorr() and @b setBitValue_diffCorr().
            COMMS_BITMASK_BITS_SEQ(
                diffCorr
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        /// @brief Values enumerator for @ref MapMatching field.
        enum class MapMatchingVal : std::uint8_t
        {
            None = 0, ///< value <b>none</b>.
            NotUsed = 1, ///< value <b>not used</b>.
            Used = 2, ///< value <b>used</b>.
            UsedDeadReckon = 3, ///< value <b>used + dead reckon</b>.
            
        };
        
        /// @brief Definition of <b>"mapMatching"</b> field.
        struct MapMatching : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                MapMatchingVal,
                comms::option::FixedBitLength<2U>,
                comms::option::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "mapMatching";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Bits,
               MapMatching
            >;
    };
    
    /// @brief Definition of <b>"fixStat"</b> field.
    class FixStat : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FixStatMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FixStatMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_bits() - for FixStatMembers::Bits member field.
        ///     @li @b field_mapMatching() - for FixStatMembers::MapMatching member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bits,
            mapMatching
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixStat";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags2 bitfield.
    struct Flags2Members
    {
        /// @brief Values enumerator for @ref PsmState field.
        enum class PsmStateVal : std::uint8_t
        {
            Acquisition = 0, ///< value <b>ACQUISITION</b>.
            Tracking = 1, ///< value <b>TRAKING</b>.
            PowerOptimizedTracking = 2, ///< value <b>POWER OPTIMIZED TRACKING</b>.
            Inactive = 3, ///< value <b>INACTIVE</b>.
            
        };
        
        /// @brief Definition of <b>"psmState"</b> field.
        struct PsmState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                PsmStateVal,
                comms::option::FixedBitLength<2U>,
                comms::option::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "psmState";
            }
            
        };
        
        /// @brief Definition of <b>"res1"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Res1 : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::FixedBitLength<1U>,
                comms::option::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "res1";
            }
            
        };
        
        /// @brief Values enumerator for @ref SpoofDetState field.
        enum class SpoofDetStateVal : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown
            NoSpoofing = 1, ///< value <b>No spoofing</b>.
            Spoofing = 2, ///< value @b Spoofing
            MultipleSpoofing = 3, ///< value <b>Multiple spoofing</b>.
            
        };
        
        /// @brief Definition of <b>"spoofDetState"</b> field.
        struct SpoofDetState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                SpoofDetStateVal,
                comms::option::FixedBitLength<2U>,
                comms::option::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "spoofDetState";
            }
            
        };
        
        /// @brief Definition of <b>"res2"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Res2 : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::FixedBitLength<3U>,
                comms::option::ValidNumValue<0>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "res2";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               PsmState,
               Res1,
               SpoofDetState,
               Res2
            >;
    };
    
    /// @brief Definition of <b>"flags2"</b> field.
    class Flags2 : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename Flags2Members::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename Flags2Members::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_psmState() - for Flags2Members::PsmState member field.
        ///     @li @b field_res1() - for Flags2Members::Res1 member field.
        ///     @li @b field_spoofDetState() - for Flags2Members::SpoofDetState member field.
        ///     @li @b field_res2() - for Flags2Members::Res2 member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            psmState,
            res1,
            spoofDetState,
            res2
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags2";
        }
        
    };
    
    /// @brief Definition of <b>"ttff"</b> field.
    struct Ttff : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ttff";
        }
        
    };
    
    /// @brief Definition of <b>"msss"</b> field.
    struct Msss : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msss";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        GpsFix,
        Flags,
        FixStat,
        Flags2,
        Ttff,
        Msss
    >;
};

/// @brief Definition of <b>"NAV-STATUS"</b> message class.
/// @details
///     See @ref NavStatusFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavStatus.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class NavStatus : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavStatus,
        comms::option::StaticNumIdImpl<ublox::MsgId_NavStatus>,
        comms::option::FieldsImpl<typename NavStatusFields<TOpt>::All>,
        comms::option::MsgType<NavStatus<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavStatus,
            comms::option::StaticNumIdImpl<ublox::MsgId_NavStatus>,
            comms::option::FieldsImpl<typename NavStatusFields<TOpt>::All>,
            comms::option::MsgType<NavStatus<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavStatusFields::Itow field.
    ///     @li @b field_gpsFix() for @ref NavStatusFields::GpsFix field.
    ///     @li @b field_flags() for @ref NavStatusFields::Flags field.
    ///     @li @b field_fixStat() for @ref NavStatusFields::FixStat field.
    ///     @li @b field_flags2() for @ref NavStatusFields::Flags2 field.
    ///     @li @b field_ttff() for @ref NavStatusFields::Ttff field.
    ///     @li @b field_msss() for @ref NavStatusFields::Msss field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        gpsFix,
        flags,
        fixStat,
        flags2,
        ttff,
        msss
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-STATUS";
    }
    
    
};

} // namespace message

} // namespace ublox


