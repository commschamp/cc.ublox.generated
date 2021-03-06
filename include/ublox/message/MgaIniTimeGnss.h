// Generated by commsdsl2comms v3.6.2

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
#include "ublox/message/MgaIniTimeGnssCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

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
            return ublox::message::MgaIniTimeGnssFieldsCommon::TypeCommon::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::VersionCommon::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Ref bitfield.
    struct RefMembers
    {
        /// @brief Definition of <b>"source"</b> field.
        /// @see @ref ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceVal
        class Source : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base = 
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceVal,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;
        
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceCommon::name();
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                return ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::SourceCommon::valueName(val);
            }
            
            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::value());
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
                return ublox::message::MgaIniTimeGnssFieldsCommon::RefMembersCommon::BitsCommon::name();
            }
            
            /// @brief Retrieve name of the bit.
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
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated types and access functions are:
        ///     @li @b Field_source type and @b field_source() access function -
        ///         for RefMembers::Source member field.
        ///     @li @b Field_bits type and @b field_bits() access function -
        ///         for RefMembers::Bits member field.
        COMMS_FIELD_MEMBERS_NAMES(
            source,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::MgaIniTimeGnssFieldsCommon::RefCommon::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::Reserved1Common::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::WeekCommon::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::NsCommon::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::TAccSCommon::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::Reserved2Common::name();
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
            return ublox::message::MgaIniTimeGnssFieldsCommon::TAccNsCommon::name();
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
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaIniTimeGnssFields::Type field.
    ///     @li @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaIniTimeGnssFields::Version field.
    ///     @li @b Field_ref type and @b field_ref() access fuction
    ///         for @ref MgaIniTimeGnssFields::Ref field.
    ///     @li @b Field_gnssId type and @b field_gnssId() access fuction
    ///         for @ref MgaIniTimeGnssFields::GnssId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaIniTimeGnssFields::Reserved1 field.
    ///     @li @b Field_week type and @b field_week() access fuction
    ///         for @ref MgaIniTimeGnssFields::Week field.
    ///     @li @b Field_tow type and @b field_tow() access fuction
    ///         for @ref MgaIniTimeGnssFields::Tow field.
    ///     @li @b Field_ns type and @b field_ns() access fuction
    ///         for @ref MgaIniTimeGnssFields::Ns field.
    ///     @li @b Field_tAccS type and @b field_tAccS() access fuction
    ///         for @ref MgaIniTimeGnssFields::TAccS field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaIniTimeGnssFields::Reserved2 field.
    ///     @li @b Field_tAccNs type and @b field_tAccNs() access fuction
    ///         for @ref MgaIniTimeGnssFields::TAccNs field.
    COMMS_MSG_FIELDS_NAMES(
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
        return ublox::message::MgaIniTimeGnssCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


