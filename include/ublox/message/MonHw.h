/// @file
/// @brief Contains definition of <b>"MON-HW"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonHwFields.
/// @see @ref MonHwFields
/// @headerfile "ublox/message/MonHw.h"
struct MonHwFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHwFields::AStatus field.
    enum class AStatusVal : std::uint8_t
    {
        INIT = 0, ///< value @b INIT
        DONTKNOW = 1, ///< value @b DONTKNOW
        OK = 2, ///< value @b OK
        SHORT = 3, ///< value @b SHORT
        OPEN = 4, ///< value @b OPEN
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 4, ///< Last defined value.
        ValuesLimit = 5, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonHwFields::AStatus field.
    struct AStatusCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(AStatusVal val)
        {
            static const char* Map[] = {
                "INIT",
                "DONTKNOW",
                "OK",
                "SHORT",
                "OPEN"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHwFields::APower field.
    enum class APowerVal : std::uint8_t
    {
        OFF = 0, ///< value @b OFF
        ON = 1, ///< value @b ON
        DONTKNOW = 2, ///< value @b DONTKNOW
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonHwFields::APower field.
    struct APowerCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(APowerVal val)
        {
            static const char* Map[] = {
                "OFF",
                "ON",
                "DONTKNOW"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonHwFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::MonHwFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "rtcCalib",
                    "safeBoot"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonHwFields::FlagsMembers::JammingState field.
        enum class JammingStateVal : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown
            Ok = 1, ///< value @b Ok
            Warning = 2, ///< value @b Warning
            Critical = 3, ///< value @b Critical
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 3, ///< Last defined value.
            ValuesLimit = 4, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonHwFields::FlagsMembers::JammingState field.
        struct JammingStateCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(JammingStateVal val)
            {
                static const char* Map[] = {
                    "Unknown",
                    "Ok",
                    "Warning",
                    "Critical"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonHwFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "xtalAbsent"
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

/// @brief Fields of @ref MonHw.
/// @tparam TOpt Extra options
/// @see @ref MonHw
/// @headerfile "ublox/message/MonHw.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonHwFields
{
    /// @brief Definition of <b>"pinSel"</b> field.
    struct PinSel : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pinSel";
        }
        
    };
    
    /// @brief Definition of <b>"pinBank"</b> field.
    struct PinBank : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pinBank";
        }
        
    };
    
    /// @brief Definition of <b>"pinDir"</b> field.
    struct PinDir : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pinDir";
        }
        
    };
    
    /// @brief Definition of <b>"pinVal"</b> field.
    struct PinVal : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pinVal";
        }
        
    };
    
    /// @brief Definition of <b>"noisePerMS"</b> field.
    struct NoisePerMS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "noisePerMS";
        }
        
    };
    
    /// @brief Definition of <b>"agcCnt"</b> field.
    struct AgcCnt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "agcCnt";
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHwFields::AStatus field.
    using AStatusVal = ublox::message::MonHwFieldsCommon::AStatusVal;
    
    /// @brief Definition of <b>"aStatus"</b> field.
    /// @see @ref ublox::message::MonHwFields::AStatusVal
    struct AStatus : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            AStatusVal,
            comms::option::def::ValidNumValueRange<0, 4>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "aStatus";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(AStatusVal val)
        {
            return ublox::message::MonHwFieldsCommon::AStatusCommon::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHwFields::APower field.
    using APowerVal = ublox::message::MonHwFieldsCommon::APowerVal;
    
    /// @brief Definition of <b>"aPower"</b> field.
    /// @see @ref ublox::message::MonHwFields::APowerVal
    struct APower : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            APowerVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "aPower";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(APowerVal val)
        {
            return ublox::message::MonHwFieldsCommon::APowerCommon::valueName(val);
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
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
            ///      @li @b BitIdx_rtcCalib, @b getBitValue_rtcCalib() and @b setBitValue_rtcCalib().
            ///      @li @b BitIdx_safeBoot, @b getBitValue_safeBoot() and @b setBitValue_safeBoot().
            COMMS_BITMASK_BITS_SEQ(
                rtcCalib,
                safeBoot
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
                    ublox::message::MonHwFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonHwFields::FlagsMembers::JammingState field.
        using JammingStateVal = ublox::message::MonHwFieldsCommon::FlagsMembersCommon::JammingStateVal;
        
        /// @brief Definition of <b>"jammingState"</b> field.
        /// @see @ref ublox::message::MonHwFields::FlagsMembers::JammingStateVal
        struct JammingState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                JammingStateVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 3>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "jammingState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(JammingStateVal val)
            {
                return ublox::message::MonHwFieldsCommon::FlagsMembersCommon::JammingStateCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
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
            ///      @li @b BitIdx_xtalAbsent, @b getBitValue_xtalAbsent() and @b setBitValue_xtalAbsent().
            COMMS_BITMASK_BITS_SEQ(
                xtalAbsent
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
                    ublox::message::MonHwFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               JammingState,
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
        ///     @li @b field_jammingState() - for FlagsMembers::JammingState member field.
        ///     @li @b field_bitsHigh() - for FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bitsLow,
            jammingState,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
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
    
    /// @brief Definition of <b>"usedMask"</b> field.
    struct UsedMask : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "usedMask";
        }
        
    };
    
    /// @brief Definition of <b>"VP"</b> field.
    struct VP : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MonHwFields::VP,
            comms::option::def::SequenceFixedSize<17U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "VP";
        }
        
    };
    
    /// @brief Definition of <b>"jamInd"</b> field.
    struct JamInd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "jamInd";
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
    
    /// @brief Definition of <b>"pinIrq"</b> field.
    struct PinIrq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pinIrq";
        }
        
    };
    
    /// @brief Definition of <b>"pullH"</b> field.
    struct PullH : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pullH";
        }
        
    };
    
    /// @brief Definition of <b>"pullL"</b> field.
    struct PullL : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pullL";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        PinSel,
        PinBank,
        PinDir,
        PinVal,
        NoisePerMS,
        AgcCnt,
        AStatus,
        APower,
        Flags,
        Reserved1,
        UsedMask,
        VP,
        JamInd,
        Reserved2,
        PinIrq,
        PullH,
        PullL
    >;
};

/// @brief Definition of <b>"MON-HW"</b> message class.
/// @details
///     See @ref MonHwFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonHw.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonHw : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonHw,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw>,
        comms::option::def::FieldsImpl<typename MonHwFields<TOpt>::All>,
        comms::option::def::MsgType<MonHw<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonHw,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw>,
            comms::option::def::FieldsImpl<typename MonHwFields<TOpt>::All>,
            comms::option::def::MsgType<MonHw<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_pinSel() for @ref MonHwFields::PinSel field.
    ///     @li @b field_pinBank() for @ref MonHwFields::PinBank field.
    ///     @li @b field_pinDir() for @ref MonHwFields::PinDir field.
    ///     @li @b field_pinVal() for @ref MonHwFields::PinVal field.
    ///     @li @b field_noisePerMS() for @ref MonHwFields::NoisePerMS field.
    ///     @li @b field_agcCnt() for @ref MonHwFields::AgcCnt field.
    ///     @li @b field_aStatus() for @ref MonHwFields::AStatus field.
    ///     @li @b field_aPower() for @ref MonHwFields::APower field.
    ///     @li @b field_flags() for @ref MonHwFields::Flags field.
    ///     @li @b field_reserved1() for @ref MonHwFields::Reserved1 field.
    ///     @li @b field_usedMask() for @ref MonHwFields::UsedMask field.
    ///     @li @b field_vP() for @ref MonHwFields::VP field.
    ///     @li @b field_jamInd() for @ref MonHwFields::JamInd field.
    ///     @li @b field_reserved2() for @ref MonHwFields::Reserved2 field.
    ///     @li @b field_pinIrq() for @ref MonHwFields::PinIrq field.
    ///     @li @b field_pullH() for @ref MonHwFields::PullH field.
    ///     @li @b field_pullL() for @ref MonHwFields::PullL field.
    COMMS_MSG_FIELDS_ACCESS(
        pinSel,
        pinBank,
        pinDir,
        pinVal,
        noisePerMS,
        agcCnt,
        aStatus,
        aPower,
        flags,
        reserved1,
        usedMask,
        vP,
        jamInd,
        reserved2,
        pinIrq,
        pullH,
        pullL
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 60U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 60U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-HW";
    }
    
    
};

} // namespace message

} // namespace ublox


