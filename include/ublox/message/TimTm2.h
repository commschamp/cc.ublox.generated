/// @file
/// @brief Contains definition of <b>"TIM-TM2"</b> message and its fields.

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
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimTm2Fields.
/// @see @ref TimTm2Fields
/// @headerfile "ublox/message/TimTm2.h"
struct TimTm2FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimTm2Fields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "mode",
                    "run",
                    "newFallingEdge"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
        enum class TimeBaseVal : std::uint8_t
        {
            Receiver = 0, ///< value @b Receiver
            GNSS = 1, ///< value @b GNSS
            UTC = 2, ///< value @b UTC
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
        struct TimeBaseCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeBaseVal val)
            {
                static const char* Map[] = {
                    "Receiver",
                    "GNSS",
                    "UTC"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "utc",
                    "time",
                    "newRisingEdge"
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

/// @brief Fields of @ref TimTm2.
/// @tparam TOpt Extra options
/// @see @ref TimTm2
/// @headerfile "ublox/message/TimTm2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimTm2Fields
{
    /// @brief Definition of <b>"ch"</b> field.
    struct Ch : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ch";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_mode, @b getBitValue_mode() and @b setBitValue_mode().
            ///      @li @b BitIdx_run, @b getBitValue_run() and @b setBitValue_run().
            ///      @li @b BitIdx_newFallingEdge, @b getBitValue_newFallingEdge() and @b setBitValue_newFallingEdge().
            COMMS_BITMASK_BITS_SEQ(
                mode,
                run,
                newFallingEdge
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
                    ublox::message::TimTm2FieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBase field.
        using TimeBaseVal = ublox::message::TimTm2FieldsCommon::FlagsMembersCommon::TimeBaseVal;
        
        /// @brief Definition of <b>"timeBase"</b> field.
        /// @see @ref ublox::message::TimTm2Fields::FlagsMembers::TimeBaseVal
        struct TimeBase : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                TimeBaseVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "timeBase";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeBaseVal val)
            {
                return ublox::message::TimTm2FieldsCommon::FlagsMembersCommon::TimeBaseCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_utc, @b getBitValue_utc() and @b setBitValue_utc().
            ///      @li @b BitIdx_time, @b getBitValue_time() and @b setBitValue_time().
            ///      @li @b BitIdx_newRisingEdge, @b getBitValue_newRisingEdge() and @b setBitValue_newRisingEdge().
            COMMS_BITMASK_BITS_SEQ(
                utc,
                time,
                newRisingEdge
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
                    ublox::message::TimTm2FieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               TimeBase,
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
        ///     @li @b field_timeBase() - for FlagsMembers::TimeBase member field.
        ///     @li @b field_bitsHigh() - for FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bitsLow,
            timeBase,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"count"</b> field.
    struct Count : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "count";
        }
        
    };
    
    /// @brief Definition of <b>"wnR"</b> field.
    struct WnR : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wnR";
        }
        
    };
    
    /// @brief Definition of <b>"wnF"</b> field.
    struct WnF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wnF";
        }
        
    };
    
    /// @brief Definition of <b>"towMsR"</b> field.
    struct TowMsR : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towMsR";
        }
        
    };
    
    /// @brief Definition of <b>"towSubMsR"</b> field.
    struct TowSubMsR : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towSubMsR";
        }
        
    };
    
    /// @brief Definition of <b>"towMsF"</b> field.
    struct TowMsF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towMsF";
        }
        
    };
    
    /// @brief Definition of <b>"towSubMsF"</b> field.
    struct TowSubMsF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "towSubMsF";
        }
        
    };
    
    /// @brief Definition of <b>"accEst"</b> field.
    struct AccEst : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "accEst";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Ch,
        Flags,
        Count,
        WnR,
        WnF,
        TowMsR,
        TowSubMsR,
        TowMsF,
        TowSubMsF,
        AccEst
    >;
};

/// @brief Definition of <b>"TIM-TM2"</b> message class.
/// @details
///     See @ref TimTm2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimTm2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimTm2 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimTm2,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTm2>,
        comms::option::def::FieldsImpl<typename TimTm2Fields<TOpt>::All>,
        comms::option::def::MsgType<TimTm2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimTm2,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimTm2>,
            comms::option::def::FieldsImpl<typename TimTm2Fields<TOpt>::All>,
            comms::option::def::MsgType<TimTm2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_ch() for @ref TimTm2Fields::Ch field.
    ///     @li @b field_flags() for @ref TimTm2Fields::Flags field.
    ///     @li @b field_count() for @ref TimTm2Fields::Count field.
    ///     @li @b field_wnR() for @ref TimTm2Fields::WnR field.
    ///     @li @b field_wnF() for @ref TimTm2Fields::WnF field.
    ///     @li @b field_towMsR() for @ref TimTm2Fields::TowMsR field.
    ///     @li @b field_towSubMsR() for @ref TimTm2Fields::TowSubMsR field.
    ///     @li @b field_towMsF() for @ref TimTm2Fields::TowMsF field.
    ///     @li @b field_towSubMsF() for @ref TimTm2Fields::TowSubMsF field.
    ///     @li @b field_accEst() for @ref TimTm2Fields::AccEst field.
    COMMS_MSG_FIELDS_ACCESS(
        ch,
        flags,
        count,
        wnR,
        wnF,
        towMsR,
        towSubMsR,
        towMsF,
        towSubMsF,
        accEst
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-TM2";
    }
    
    
};

} // namespace message

} // namespace ublox


