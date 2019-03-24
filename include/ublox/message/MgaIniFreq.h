/// @file
/// @brief Contains definition of <b>"MGA-BDS-FREQ"</b> message and its fields.

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
#include "ublox/field/Res1.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniFreq.
/// @tparam TOpt Extra options
/// @see @ref MgaIniFreq
/// @headerfile "ublox/message/MgaIniFreq.h"
template <typename TOpt = ublox::DefaultOptions>
struct MgaIniFreqFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::FailOnInvalid<>,
            comms::option::DefaultNumValue<33>,
            comms::option::ValidNumValue<33>
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
            comms::option::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
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
        /// @brief Values enumerator for @ref ublox::message::MgaIniFreqFields::FlagsMembers::Source field.
        enum class SourceVal : std::uint8_t
        {
            EXTINT0 = 0, ///< value @b EXTINT0
            EXTINT1 = 1, ///< value @b EXTINT1
            
        };
        
        /// @brief Definition of <b>"source"</b> field.
        /// @see @ref ublox::message::MgaIniFreqFields::FlagsMembers::SourceVal
        struct Source : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                SourceVal,
                comms::option::FixedBitLength<4U>,
                comms::option::ValidNumValueRange<0, 1>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "source";
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedBitLength<4U>,
                comms::option::BitmaskReservedBits<0xEU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::FixedBitLength<4U>,
                    comms::option::BitmaskReservedBits<0xEU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_fall, @b getBitValue_fall() and @b setBitValue_fall().
            COMMS_BITMASK_BITS_SEQ(
                fall
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Source,
               Bits
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
        ///     @li @b field_source() - for FlagsMembers::Source member field.
        ///     @li @b field_bits() - for FlagsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            source,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"freq"</b> field.
    struct Freq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::ScalingRatio<1, 100>,
            comms::option::UnitsHertz
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freq";
        }
        
    };
    
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        Flags,
        Freq,
        FreqAcc
    >;
};

/// @brief Definition of <b>"MGA-BDS-FREQ"</b> message class.
/// @details
///     See @ref MgaIniFreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniFreq.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class MgaIniFreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniFreq,
        comms::option::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::FieldsImpl<typename MgaIniFreqFields<TOpt>::All>,
        comms::option::MsgType<MgaIniFreq<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniFreq,
            comms::option::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::FieldsImpl<typename MgaIniFreqFields<TOpt>::All>,
            comms::option::MsgType<MgaIniFreq<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaIniFreqFields::Type field.
    ///     @li @b field_version() for @ref MgaIniFreqFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaIniFreqFields::Reserved1 field.
    ///     @li @b field_flags() for @ref MgaIniFreqFields::Flags field.
    ///     @li @b field_freq() for @ref MgaIniFreqFields::Freq field.
    ///     @li @b field_freqAcc() for @ref MgaIniFreqFields::FreqAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        flags,
        freq,
        freqAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-FREQ";
    }
    
    
};

} // namespace message

} // namespace ublox


