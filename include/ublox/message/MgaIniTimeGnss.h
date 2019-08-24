/// @file
/// @brief Contains definition of <b>"MGA-BDS-TIME_GNSS"</b> message and its fields.

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
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MgaIniTimeGnssFields.
/// @see @ref MgaIniTimeGnssFields
/// @headerfile "ublox/message/MgaIniTimeGnss.h"
struct MgaIniTimeGnssFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaIniTimeGnssFields::Ref bitfield.
    struct RefMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
        enum class SourceVal : std::uint8_t
        {
            None = 0, ///< value @b None
            EXTINT0 = 1, ///< value @b EXTINT0
            EXTINT1 = 2, ///< value @b EXTINT1
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
        struct SourceCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(SourceVal val)
            {
                static const char* Map[] = {
                    "None",
                    "EXTINT0",
                    "EXTINT1"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "fall",
                    "last"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref MgaIniTimeGnss.
/// @tparam TOpt Extra options
/// @see @ref MgaIniTimeGnss
/// @headerfile "ublox/message/MgaIniTimeGnss.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniTimeGnssFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<17>,
            comms::option::def::ValidNumValue<17>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
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
    
    /// @brief Scope for all the member fields of @ref Ref bitfield.
    struct RefMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaIniTimeGnssFields::RefMembers::Source field.
        using SourceVal = ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceVal;
        
        /// @brief Definition of <b>"source"</b> field.
        /// @see @ref ublox::message::MgaIniTimeGnssFields::RefMembers::SourceVal
        struct Source : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                SourceVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "source";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(SourceVal val)
            {
                return ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0xCU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0xCU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_fall, @b getBitValue_fall() and @b setBitValue_fall().
            ///      @li @b BitIdx_last, @b getBitValue_last() and @b setBitValue_last().
            COMMS_BITMASK_BITS_SEQ(
                fall,
                last
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
                    ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Source,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"ref"</b> field.
    class Ref : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename RefMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename RefMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_source() - for RefMembers::Source member field.
        ///     @li @b field_bits() - for RefMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            source,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "ref";
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
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Tow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"ns"</b> field.
    struct Ns : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ns";
        }
        
    };
    
    /// @brief Definition of <b>"tAccS"</b> field.
    struct TAccS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAccS";
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Ref,
        GnssId,
        Reserved1,
        Week,
        Tow,
        Ns,
        TAccS,
        Reserved2,
        TAccNs
    >;
};

/// @brief Definition of <b>"MGA-BDS-TIME_GNSS"</b> message class.
/// @details
///     See @ref MgaIniTimeGnssFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniTimeGnss.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniTimeGnss : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniTimeGnss,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniTimeGnssFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniTimeGnss<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniTimeGnss,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniTimeGnssFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniTimeGnss<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaIniTimeGnssFields::Type field.
    ///     @li @b field_version() for @ref MgaIniTimeGnssFields::Version field.
    ///     @li @b field_ref() for @ref MgaIniTimeGnssFields::Ref field.
    ///     @li @b field_gnssId() for @ref MgaIniTimeGnssFields::GnssId field.
    ///     @li @b field_reserved1() for @ref MgaIniTimeGnssFields::Reserved1 field.
    ///     @li @b field_week() for @ref MgaIniTimeGnssFields::Week field.
    ///     @li @b field_tow() for @ref MgaIniTimeGnssFields::Tow field.
    ///     @li @b field_ns() for @ref MgaIniTimeGnssFields::Ns field.
    ///     @li @b field_tAccS() for @ref MgaIniTimeGnssFields::TAccS field.
    ///     @li @b field_reserved2() for @ref MgaIniTimeGnssFields::Reserved2 field.
    ///     @li @b field_tAccNs() for @ref MgaIniTimeGnssFields::TAccNs field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        ref,
        gnssId,
        reserved1,
        week,
        tow,
        ns,
        tAccS,
        reserved2,
        tAccNs
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 24U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-TIME_GNSS";
    }
    
    
};

} // namespace message

} // namespace ublox


