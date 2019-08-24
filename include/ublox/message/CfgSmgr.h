/// @file
/// @brief Contains definition of <b>"CFG-SMGR"</b> message and its fields.

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
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgSmgrFields.
/// @see @ref CfgSmgrFields
/// @headerfile "ublox/message/CfgSmgr.h"
struct CfgSmgrFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgSmgrFields::MessageCfg field.
    struct MessageCfgCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "measInternal",
                "measGNSS",
                "measEXTINT0",
                "measEXTINT1"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgSmgrFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgSmgrFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "disableInternal",
                    "disableExternal",
                    "preferenceMode",
                    "enableGNSS",
                    "enableEXTINT0",
                    "enableEXTINT1",
                    "enableHostMeasInt",
                    "enableHostMeasExt",
                    nullptr,
                    nullptr,
                    "useAnyFix",
                    "disableMaxSlewRate",
                    "issueFreqWarning",
                    "issueTimeWarning"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgSmgrFields::FlagsMembers::TPCoherent field.
        enum class TPCoherentVal : std::uint8_t
        {
            Coherent = 0, ///< value @b Coherent
            NonCoherent = 1, ///< value @b NonCoherent
            PostInitCoherent = 2, ///< value @b PostInitCoherent
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgSmgrFields::FlagsMembers::TPCoherent field.
        struct TPCoherentCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(TPCoherentVal val)
            {
                static const char* Map[] = {
                    "Coherent",
                    "NonCoherent",
                    "PostInitCoherent"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgSmgrFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "disableOffset"
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

/// @brief Fields of @ref CfgSmgr.
/// @tparam TOpt Extra options
/// @see @ref CfgSmgr
/// @headerfile "ublox/message/CfgSmgr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgSmgrFields
{
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
    
    /// @brief Definition of <b>"minGNSSFix"</b> field.
    struct MinGNSSFix : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minGNSSFix";
        }
        
    };
    
    /// @brief Definition of <b>"maxFreqChangeRate"</b> field.
    struct MaxFreqChangeRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxFreqChangeRate";
        }
        
    };
    
    /// @brief Definition of <b>"maxPhaseCorrRate"</b> field.
    struct MaxPhaseCorrRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxPhaseCorrRate";
        }
        
    };
    
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
    
    /// @brief Definition of <b>"freqTolerance"</b> field.
    struct FreqTolerance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freqTolerance";
        }
        
    };
    
    /// @brief Definition of <b>"timeTolerance"</b> field.
    struct TimeTolerance : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeTolerance";
        }
        
    };
    
    /// @brief Definition of <b>"messageCfg"</b> field.
    class MessageCfg : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_measInternal, @b getBitValue_measInternal() and @b setBitValue_measInternal().
        ///      @li @b BitIdx_measGNSS, @b getBitValue_measGNSS() and @b setBitValue_measGNSS().
        ///      @li @b BitIdx_measEXTINT0, @b getBitValue_measEXTINT0() and @b setBitValue_measEXTINT0().
        ///      @li @b BitIdx_measEXTINT1, @b getBitValue_measEXTINT1() and @b setBitValue_measEXTINT1().
        COMMS_BITMASK_BITS_SEQ(
            measInternal,
            measGNSS,
            measEXTINT0,
            measEXTINT1
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "messageCfg";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgSmgrFieldsCommon::MessageCfgCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"maxSlewRate"</b> field.
    struct MaxSlewRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsMicroseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxSlewRate";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<14U>,
                comms::option::def::BitmaskReservedBits<0x300U, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<14U>,
                    comms::option::def::BitmaskReservedBits<0x300U, 0x0U>
                >;
        public:
            /// @brief Provide names for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values:
            ///      @li @b BitIdx_disableInternal.
            ///      @li @b BitIdx_disableExternal.
            ///      @li @b BitIdx_preferenceMode.
            ///      @li @b BitIdx_enableGNSS.
            ///      @li @b BitIdx_enableEXTINT0.
            ///      @li @b BitIdx_enableEXTINT1.
            ///      @li @b BitIdx_enableHostMeasInt.
            ///      @li @b BitIdx_enableHostMeasExt.
            ///      @li @b BitIdx_useAnyFix.
            ///      @li @b BitIdx_disableMaxSlewRate.
            ///      @li @b BitIdx_issueFreqWarning.
            ///      @li @b BitIdx_issueTimeWarning.
            COMMS_BITMASK_BITS(
                disableInternal=0,
                disableExternal=1,
                preferenceMode=2,
                enableGNSS=3,
                enableEXTINT0=4,
                enableEXTINT1=5,
                enableHostMeasInt=6,
                enableHostMeasExt=7,
                useAnyFix=10,
                disableMaxSlewRate=11,
                issueFreqWarning=12,
                issueTimeWarning=13
            );
            
            /// @brief Generates independent access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///      @li @b getBitValue_disableInternal() and @b setBitValue_disableInternal().
            ///      @li @b getBitValue_disableExternal() and @b setBitValue_disableExternal().
            ///      @li @b getBitValue_preferenceMode() and @b setBitValue_preferenceMode().
            ///      @li @b getBitValue_enableGNSS() and @b setBitValue_enableGNSS().
            ///      @li @b getBitValue_enableEXTINT0() and @b setBitValue_enableEXTINT0().
            ///      @li @b getBitValue_enableEXTINT1() and @b setBitValue_enableEXTINT1().
            ///      @li @b getBitValue_enableHostMeasInt() and @b setBitValue_enableHostMeasInt().
            ///      @li @b getBitValue_enableHostMeasExt() and @b setBitValue_enableHostMeasExt().
            ///      @li @b getBitValue_useAnyFix() and @b setBitValue_useAnyFix().
            ///      @li @b getBitValue_disableMaxSlewRate() and @b setBitValue_disableMaxSlewRate().
            ///      @li @b getBitValue_issueFreqWarning() and @b setBitValue_issueFreqWarning().
            ///      @li @b getBitValue_issueTimeWarning() and @b setBitValue_issueTimeWarning().
            COMMS_BITMASK_BITS_ACCESS(
                disableInternal,
                disableExternal,
                preferenceMode,
                enableGNSS,
                enableEXTINT0,
                enableEXTINT1,
                enableHostMeasInt,
                enableHostMeasExt,
                useAnyFix,
                disableMaxSlewRate,
                issueFreqWarning,
                issueTimeWarning
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
                    ublox::message::CfgSmgrFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgSmgrFields::FlagsMembers::TPCoherent field.
        using TPCoherentVal = ublox::message::CfgSmgrFieldsCommon::FlagsMembersCommon::TPCoherentVal;
        
        /// @brief Definition of <b>"TPCoherent"</b> field.
        /// @see @ref ublox::message::CfgSmgrFields::FlagsMembers::TPCoherentVal
        struct TPCoherent : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                TPCoherentVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "TPCoherent";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(TPCoherentVal val)
            {
                return ublox::message::CfgSmgrFieldsCommon::FlagsMembersCommon::TPCoherentCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<16U>,
                comms::option::def::BitmaskReservedBits<0xFFFEU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<16U>,
                    comms::option::def::BitmaskReservedBits<0xFFFEU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_disableOffset, @b getBitValue_disableOffset() and @b setBitValue_disableOffset().
            COMMS_BITMASK_BITS_SEQ(
                disableOffset
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
                    ublox::message::CfgSmgrFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               TPCoherent,
               BitsHigh
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
        ///     @li @b field_bitsLow() - for FlagsMembers::BitsLow member field.
        ///     @li @b field_tPCoherent() - for FlagsMembers::TPCoherent member field.
        ///     @li @b field_bitsHigh() - for FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bitsLow,
            tPCoherent,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        MinGNSSFix,
        MaxFreqChangeRate,
        MaxPhaseCorrRate,
        Reserved1,
        FreqTolerance,
        TimeTolerance,
        MessageCfg,
        MaxSlewRate,
        Flags
    >;
};

/// @brief Definition of <b>"CFG-SMGR"</b> message class.
/// @details
///     See @ref CfgSmgrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgSmgr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgSmgr : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgSmgr>,
        comms::option::def::FieldsImpl<typename CfgSmgrFields<TOpt>::All>,
        comms::option::def::MsgType<CfgSmgr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgSmgr>,
            comms::option::def::FieldsImpl<typename CfgSmgrFields<TOpt>::All>,
            comms::option::def::MsgType<CfgSmgr<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgSmgrFields::Version field.
    ///     @li @b field_minGNSSFix() for @ref CfgSmgrFields::MinGNSSFix field.
    ///     @li @b field_maxFreqChangeRate() for @ref CfgSmgrFields::MaxFreqChangeRate field.
    ///     @li @b field_maxPhaseCorrRate() for @ref CfgSmgrFields::MaxPhaseCorrRate field.
    ///     @li @b field_reserved1() for @ref CfgSmgrFields::Reserved1 field.
    ///     @li @b field_freqTolerance() for @ref CfgSmgrFields::FreqTolerance field.
    ///     @li @b field_timeTolerance() for @ref CfgSmgrFields::TimeTolerance field.
    ///     @li @b field_messageCfg() for @ref CfgSmgrFields::MessageCfg field.
    ///     @li @b field_maxSlewRate() for @ref CfgSmgrFields::MaxSlewRate field.
    ///     @li @b field_flags() for @ref CfgSmgrFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        minGNSSFix,
        maxFreqChangeRate,
        maxPhaseCorrRate,
        reserved1,
        freqTolerance,
        timeTolerance,
        messageCfg,
        maxSlewRate,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-SMGR";
    }
    
    
};

} // namespace message

} // namespace ublox


