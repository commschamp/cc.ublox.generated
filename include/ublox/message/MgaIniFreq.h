/// @file
/// @brief Contains definition of <b>"MGA-BDS-FREQ"</b> message and its fields.

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
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MgaIniFreqFields.
/// @see @ref MgaIniFreqFields
/// @headerfile "ublox/message/MgaIniFreq.h"
struct MgaIniFreqFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MgaIniFreqFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaIniFreqFields::FlagsMembers::Source field.
        enum class SourceVal : std::uint8_t
        {
            EXTINT0 = 0, ///< value @b EXTINT0
            EXTINT1 = 1, ///< value @b EXTINT1
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MgaIniFreqFields::FlagsMembers::Source field.
        struct SourceCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(SourceVal val)
            {
                static const char* Map[] = {
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
        ///     @ref ublox::message::MgaIniFreqFields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "fall"
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

/// @brief Fields of @ref MgaIniFreq.
/// @tparam TOpt Extra options
/// @see @ref MgaIniFreq
/// @headerfile "ublox/message/MgaIniFreq.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniFreqFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<33>,
            comms::option::def::ValidNumValue<33>
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
        /// @brief Values enumerator for
        ///     @ref ublox::message::MgaIniFreqFields::FlagsMembers::Source field.
        using SourceVal = ublox::message::MgaIniFreqFieldsCommon::FlagsMembersCommon::SourceVal;
        
        /// @brief Definition of <b>"source"</b> field.
        /// @see @ref ublox::message::MgaIniFreqFields::FlagsMembers::SourceVal
        struct Source : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                SourceVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 1>
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
                return ublox::message::MgaIniFreqFieldsCommon::FlagsMembersCommon::SourceCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
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
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::MgaIniFreqFieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
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
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniFreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniFreq,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniFreqFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniFreq<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniFreq,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniFreqFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniFreq<TMsgBase, TOpt> >,
            comms::option::def::HasName
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


