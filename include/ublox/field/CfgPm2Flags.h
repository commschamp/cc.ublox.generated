/// @file
/// @brief Contains definition of <b>"flags"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref ublox::field::CfgPm2Flags bitfield.
struct CfgPm2FlagsMembersCommon
{
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::BitsLow field.
    struct BitsLowCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                nullptr,
                "extintSel",
                "extintWake",
                "extintBackup",
                "extintInactive"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
    enum class LimitPeakCurrVal : std::uint8_t
    {
        Desabled = 0, ///< value @b Desabled
        Enabled = 1, ///< value @b Enabled
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
    struct LimitPeakCurrCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(LimitPeakCurrVal val)
        {
            static const char* Map[] = {
                "Desabled",
                "Enabled"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::BitsMid field.
    struct BitsMidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "waitTimeFix",
                "updateRTC",
                "updateEPH",
                nullptr,
                nullptr,
                nullptr,
                "doNotEnterOff"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
    enum class ModeVal : std::uint8_t
    {
        OnOff = 0, ///< value <b>ON/OFF</b>.
        Cyclic = 1, ///< value @b Cyclic
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
    struct ModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(ModeVal val)
        {
            static const char* Map[] = {
                "ON/OFF",
                "Cyclic"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Scope for all the member fields of @ref CfgPm2Flags bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPm2FlagsMembers
{
    /// @brief Definition of <b>""</b> field.
    class BitsLow : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedBitLength<8U>,
            comms::option::def::BitmaskReservedBits<0xFU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<8U>,
                comms::option::def::BitmaskReservedBits<0xFU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_extintSel.
        ///      @li @b BitIdx_extintWake.
        ///      @li @b BitIdx_extintBackup.
        ///      @li @b BitIdx_extintInactive.
        COMMS_BITMASK_BITS(
            extintSel=4,
            extintWake=5,
            extintBackup=6,
            extintInactive=7
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_extintSel() and @b setBitValue_extintSel().
        ///      @li @b getBitValue_extintWake() and @b setBitValue_extintWake().
        ///      @li @b getBitValue_extintBackup() and @b setBitValue_extintBackup().
        ///      @li @b getBitValue_extintInactive() and @b setBitValue_extintInactive().
        COMMS_BITMASK_BITS_ACCESS(
            extintSel,
            extintWake,
            extintBackup,
            extintInactive
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
                ublox::field::CfgPm2FlagsMembersCommon::BitsLowCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurr field.
    using LimitPeakCurrVal = ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrVal;
    
    /// @brief Definition of <b>"limitPeakCurr"</b> field.
    /// @see @ref ublox::field::CfgPm2FlagsMembers::LimitPeakCurrVal
    struct LimitPeakCurr : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            LimitPeakCurrVal,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "limitPeakCurr";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(LimitPeakCurrVal val)
        {
            return ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>""</b> field.
    class BitsMid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedBitLength<7U>,
            comms::option::def::BitmaskReservedBits<0x38U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<7U>,
                comms::option::def::BitmaskReservedBits<0x38U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_waitTimeFix.
        ///      @li @b BitIdx_updateRTC.
        ///      @li @b BitIdx_updateEPH.
        ///      @li @b BitIdx_doNotEnterOff.
        COMMS_BITMASK_BITS(
            waitTimeFix=0,
            updateRTC=1,
            updateEPH=2,
            doNotEnterOff=6
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_waitTimeFix() and @b setBitValue_waitTimeFix().
        ///      @li @b getBitValue_updateRTC() and @b setBitValue_updateRTC().
        ///      @li @b getBitValue_updateEPH() and @b setBitValue_updateEPH().
        ///      @li @b getBitValue_doNotEnterOff() and @b setBitValue_doNotEnterOff().
        COMMS_BITMASK_BITS_ACCESS(
            waitTimeFix,
            updateRTC,
            updateEPH,
            doNotEnterOff
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
                ublox::field::CfgPm2FlagsMembersCommon::BitsMidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::field::CfgPm2FlagsMembers::Mode field.
    using ModeVal = ublox::field::CfgPm2FlagsMembersCommon::ModeVal;
    
    /// @brief Definition of <b>"mode"</b> field.
    /// @see @ref ublox::field::CfgPm2FlagsMembers::ModeVal
    struct Mode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ModeVal,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "mode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ModeVal val)
        {
            return ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"reserved"</b> field.
    /// @details
    ///     Reserved field with 2 bytes length
    struct Reserved : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::FixedBitLength<13U>,
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
           BitsLow,
           LimitPeakCurr,
           BitsMid,
           Mode,
           Reserved
        >;
};

/// @brief Definition of <b>"flags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPm2Flags : public
    comms::field::Bitfield<
        ublox::field::FieldBase<>,
        typename CfgPm2FlagsMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename CfgPm2FlagsMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///      The generated access functions are:
    ///     @li @b field_bitsLow() - for CfgPm2FlagsMembers::BitsLow member field.
    ///     @li @b field_limitPeakCurr() - for CfgPm2FlagsMembers::LimitPeakCurr member field.
    ///     @li @b field_bitsMid() - for CfgPm2FlagsMembers::BitsMid member field.
    ///     @li @b field_mode() - for CfgPm2FlagsMembers::Mode member field.
    ///     @li @b field_reserved() - for CfgPm2FlagsMembers::Reserved member field.
    COMMS_FIELD_MEMBERS_ACCESS(
        bitsLow,
        limitPeakCurr,
        bitsMid,
        mode,
        reserved
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "flags";
    }
    
};

} // namespace field

} // namespace ublox


