/// @file
/// @brief Contains definition of <b>"CFG-TP5"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgTp5TpIdx.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgTp5Fields.
/// @see @ref CfgTp5Fields
/// @headerfile "ublox/message/CfgTp5.h"
struct CfgTp5FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTp5Fields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "active",
                    "lockGnssFreq",
                    "lockedOtherSet",
                    "isFreq",
                    "isLength",
                    "alignToTow",
                    "polarity"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
        enum class GridUtcGnssVal : std::uint8_t
        {
            UTC = 0, ///< value @b UTC
            GPS = 1, ///< value @b GPS
            GLONASS = 2, ///< value @b GLONASS
            BeiDou = 3, ///< value @b BeiDou
            Galileo = 4, ///< value @b Galileo
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 4, ///< Last defined value.
            ValuesLimit = 5, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
        struct GridUtcGnssCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(GridUtcGnssVal val)
            {
                static const char* Map[] = {
                    "UTC",
                    "GPS",
                    "GLONASS",
                    "BeiDou",
                    "Galileo"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref CfgTp5.
/// @tparam TOpt Extra options
/// @see @ref CfgTp5
/// @headerfile "ublox/message/CfgTp5.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTp5Fields
{
    /// @brief Definition of <b>"tpIdx"</b> field.
    using TpIdx =
        ublox::field::CfgTp5TpIdx<
            TOpt
        >;
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
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
    
    /// @brief Definition of <b>"antCableDelay"</b> field.
    struct AntCableDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "antCableDelay";
        }
        
    };
    
    /// @brief Definition of <b>"rfGroupDelay"</b> field.
    struct RfGroupDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "rfGroupDelay";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Freq optional.
    struct FreqMembers
    {
        /// @brief Definition of <b>"freq"</b> field.
        struct Freq : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsHertz
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "freq";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freq"</b> field.
    struct Freq : public
        comms::field::Optional<
            typename FreqMembers::Freq,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freq";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Period optional.
    struct PeriodMembers
    {
        /// @brief Definition of <b>"period"</b> field.
        struct Period : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMicroseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "period";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"period"</b> field.
    struct Period : public
        comms::field::Optional<
            typename PeriodMembers::Period,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "period";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref FreqLock optional.
    struct FreqLockMembers
    {
        /// @brief Definition of <b>"freqLock"</b> field.
        struct FreqLock : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsHertz
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "freqLock";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"freqLock"</b> field.
    struct FreqLock : public
        comms::field::Optional<
            typename FreqLockMembers::FreqLock,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freqLock";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref PeriodLock optional.
    struct PeriodLockMembers
    {
        /// @brief Definition of <b>"periodLock"</b> field.
        struct PeriodLock : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMicroseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "periodLock";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"periodLock"</b> field.
    struct PeriodLock : public
        comms::field::Optional<
            typename PeriodLockMembers::PeriodLock,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "periodLock";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref PulseLen optional.
    struct PulseLenMembers
    {
        /// @brief Definition of <b>"pulseLen"</b> field.
        struct PulseLen : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMicroseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "pulseLen";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"pulseLen"</b> field.
    struct PulseLen : public
        comms::field::Optional<
            typename PulseLenMembers::PulseLen,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pulseLen";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Ratio optional.
    struct RatioMembers
    {
        /// @brief Definition of <b>"ratio"</b> field.
        struct Ratio : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::ScalingRatio<1, 0x100000000LL>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ratio";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ratio"</b> field.
    struct Ratio : public
        comms::field::Optional<
            typename RatioMembers::Ratio,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ratio";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref PulseLenLock optional.
    struct PulseLenLockMembers
    {
        /// @brief Definition of <b>"pulseLenLock"</b> field.
        struct PulseLenLock : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMicroseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "pulseLenLock";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"pulseLenLock"</b> field.
    struct PulseLenLock : public
        comms::field::Optional<
            typename PulseLenLockMembers::PulseLenLock,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pulseLenLock";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref RatioLock optional.
    struct RatioLockMembers
    {
        /// @brief Definition of <b>"ratioLock"</b> field.
        struct RatioLock : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::ScalingRatio<1, 0x100000000LL>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "ratioLock";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ratioLock"</b> field.
    struct RatioLock : public
        comms::field::Optional<
            typename RatioLockMembers::RatioLock,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ratioLock";
        }
        
    };
    
    /// @brief Definition of <b>"userConfigDelay"</b> field.
    struct UserConfigDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "userConfigDelay";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>"bits"</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<7U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<7U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_active, @b getBitValue_active() and @b setBitValue_active().
            ///      @li @b BitIdx_lockGnssFreq, @b getBitValue_lockGnssFreq() and @b setBitValue_lockGnssFreq().
            ///      @li @b BitIdx_lockedOtherSet, @b getBitValue_lockedOtherSet() and @b setBitValue_lockedOtherSet().
            ///      @li @b BitIdx_isFreq, @b getBitValue_isFreq() and @b setBitValue_isFreq().
            ///      @li @b BitIdx_isLength, @b getBitValue_isLength() and @b setBitValue_isLength().
            ///      @li @b BitIdx_alignToTow, @b getBitValue_alignToTow() and @b setBitValue_alignToTow().
            ///      @li @b BitIdx_polarity, @b getBitValue_polarity() and @b setBitValue_polarity().
            COMMS_BITMASK_BITS_SEQ(
                active,
                lockGnssFreq,
                lockedOtherSet,
                isFreq,
                isLength,
                alignToTow,
                polarity
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "bits";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::CfgTp5FieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnss field.
        using GridUtcGnssVal = ublox::message::CfgTp5FieldsCommon::FlagsMembersCommon::GridUtcGnssVal;
        
        /// @brief Definition of <b>"gridUtcGnss"</b> field.
        /// @see @ref ublox::message::CfgTp5Fields::FlagsMembers::GridUtcGnssVal
        struct GridUtcGnss : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                GridUtcGnssVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 4>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "gridUtcGnss";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(GridUtcGnssVal val)
            {
                return ublox::message::CfgTp5FieldsCommon::FlagsMembersCommon::GridUtcGnssCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"syncMode"</b> field.
        struct SyncMode : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<3U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "syncMode";
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        /// @details
        ///     Reserved field with 3 bytes length
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::FixedBitLength<18U>,
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
               Bits,
               GridUtcGnss,
               SyncMode,
               Reserved
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
        ///     @li @b field_bits() - for FlagsMembers::Bits member field.
        ///     @li @b field_gridUtcGnss() - for FlagsMembers::GridUtcGnss member field.
        ///     @li @b field_syncMode() - for FlagsMembers::SyncMode member field.
        ///     @li @b field_reserved() - for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bits,
            gridUtcGnss,
            syncMode,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TpIdx,
        Version,
        Reserved1,
        AntCableDelay,
        RfGroupDelay,
        Freq,
        Period,
        FreqLock,
        PeriodLock,
        PulseLen,
        Ratio,
        PulseLenLock,
        RatioLock,
        UserConfigDelay,
        Flags
    >;
};

/// @brief Definition of <b>"CFG-TP5"</b> message class.
/// @details
///     See @ref CfgTp5Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTp5.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTp5 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp5>,
        comms::option::def::FieldsImpl<typename CfgTp5Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgTp5<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp5>,
            comms::option::def::FieldsImpl<typename CfgTp5Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgTp5<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_tpIdx() for @ref CfgTp5Fields::TpIdx field.
    ///     @li @b field_version() for @ref CfgTp5Fields::Version field.
    ///     @li @b field_reserved1() for @ref CfgTp5Fields::Reserved1 field.
    ///     @li @b field_antCableDelay() for @ref CfgTp5Fields::AntCableDelay field.
    ///     @li @b field_rfGroupDelay() for @ref CfgTp5Fields::RfGroupDelay field.
    ///     @li @b field_freq() for @ref CfgTp5Fields::Freq field.
    ///     @li @b field_period() for @ref CfgTp5Fields::Period field.
    ///     @li @b field_freqLock() for @ref CfgTp5Fields::FreqLock field.
    ///     @li @b field_periodLock() for @ref CfgTp5Fields::PeriodLock field.
    ///     @li @b field_pulseLen() for @ref CfgTp5Fields::PulseLen field.
    ///     @li @b field_ratio() for @ref CfgTp5Fields::Ratio field.
    ///     @li @b field_pulseLenLock() for @ref CfgTp5Fields::PulseLenLock field.
    ///     @li @b field_ratioLock() for @ref CfgTp5Fields::RatioLock field.
    ///     @li @b field_userConfigDelay() for @ref CfgTp5Fields::UserConfigDelay field.
    ///     @li @b field_flags() for @ref CfgTp5Fields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        tpIdx,
        version,
        reserved1,
        antCableDelay,
        rfGroupDelay,
        freq,
        period,
        freqLock,
        periodLock,
        pulseLen,
        ratio,
        pulseLenLock,
        ratioLock,
        userConfigDelay,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 48U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TP5";
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::doRead(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        refresh_freqPeriod(true);
        refresh_freqPeriodLock(true);
        refresh_pulseLenRatio(true);
        refresh_pulseLenRatioLock(true);
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_freqPeriod(false) || updated;
        updated = refresh_freqPeriodLock(false) || updated;
        updated = refresh_pulseLenRatio(false) || updated;
        updated = refresh_pulseLenRatioLock(false) || updated;
        return updated;
    }
    
    
private:
    template <typename TFirst, typename TSecond>
    static bool refreshFields(TFirst& first, TSecond& second, bool enableFirst, bool updateValue)
    {
        if ((first.doesExist() == enableFirst) &&
            (second.isMissing() == enableFirst)) {
            return false;
        }
    
        auto firstMode = comms::field::OptionalMode::Exists;
        auto secondMode = comms::field::OptionalMode::Missing;
        if (!enableFirst) {
            std::swap(firstMode, secondMode);
        }
    
        first.setMode(firstMode);
        second.setMode(secondMode);
    
        if (!updateValue) {
            return true;
        }
    
        if (enableFirst) {
            first.field().value() = second.field().value();
        }
        else {
            second.field().value() = first.field().value();
        }
    
        return true;
    }
    
    bool refresh_freqPeriod(bool updateValue)
    {
        return refreshFields(field_freq(), field_period(), field_flags().field_bits().getBitValue_isFreq(), updateValue);
    }
    
    bool refresh_freqPeriodLock(bool updateValue)
    {
        return refreshFields(field_freqLock(), field_periodLock(), field_flags().field_bits().getBitValue_isFreq(), updateValue);
    } 
    
    bool refresh_pulseLenRatio(bool updateValue)
    {
        return refreshFields(field_pulseLen(), field_ratio(), field_flags().field_bits().getBitValue_isLength(), updateValue);
    }   
    
    bool refresh_pulseLenRatioLock(bool updateValue)
    {
        return refreshFields(field_pulseLenLock(), field_ratioLock(), field_flags().field_bits().getBitValue_isLength(), updateValue);
    }       
};

} // namespace message

} // namespace ublox


