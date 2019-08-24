/// @file
/// @brief Contains definition of <b>"CFG-TP"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
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

/// @brief Common definitions for fields from @ref CfgTpFields.
/// @see @ref CfgTpFields
/// @headerfile "ublox/message/CfgTp.h"
struct CfgTpFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTpFields::Status field.
    enum class StatusVal : std::int8_t
    {
        Negative = -1, ///< value @b Negative
        Off = 0, ///< value @b Off
        Positive = 1, ///< value @b Positive
        
        // --- Extra values generated for convenience ---
        FirstValue = -1, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTpFields::Status field.
    struct StatusCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(StatusVal val)
        {
            using NameInfo = std::pair<StatusVal, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(StatusVal::Negative, "Negative"),
                std::make_pair(StatusVal::Off, "Off"),
                std::make_pair(StatusVal::Positive, "Positive")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, StatusVal v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTpFields::TimeRef field.
    enum class TimeRefVal : std::uint8_t
    {
        UTC = 0, ///< value @b UTC
        GPS = 1, ///< value @b GPS
        Local = 2, ///< value @b Local
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTpFields::TimeRef field.
    struct TimeRefCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeRefVal val)
        {
            static const char* Map[] = {
                "UTC",
                "GPS",
                "Local"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTpFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "syncMode"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgTp.
/// @tparam TOpt Extra options
/// @see @ref CfgTp
/// @headerfile "ublox/message/CfgTp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTpFields
{
    /// @brief Definition of <b>"interval"</b> field.
    struct Interval : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMicroseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "interval";
        }
        
    };
    
    /// @brief Definition of <b>"length"</b> field.
    struct Length : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMicroseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "length";
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTpFields::Status field.
    using StatusVal = ublox::message::CfgTpFieldsCommon::StatusVal;
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::CfgTpFields::StatusVal
    struct Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            StatusVal,
            comms::option::def::ValidNumValueRange<-1, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(StatusVal val)
        {
            return ublox::message::CfgTpFieldsCommon::StatusCommon::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTpFields::TimeRef field.
    using TimeRefVal = ublox::message::CfgTpFieldsCommon::TimeRefVal;
    
    /// @brief Definition of <b>"timeRef"</b> field.
    /// @see @ref ublox::message::CfgTpFields::TimeRefVal
    struct TimeRef : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            TimeRefVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeRef";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeRefVal val)
        {
            return ublox::message::CfgTpFieldsCommon::TimeRefCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_syncMode, @b getBitValue_syncMode() and @b setBitValue_syncMode().
        COMMS_BITMASK_BITS_SEQ(
            syncMode
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgTpFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"res"</b> field.
    struct Res : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "res";
        }
        
    };
    
    /// @brief Definition of <b>"antennaCableDelay"</b> field.
    struct AntennaCableDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "antennaCableDelay";
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
    
    /// @brief Definition of <b>"userDelay"</b> field.
    struct UserDelay : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "userDelay";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Interval,
        Length,
        Status,
        TimeRef,
        Flags,
        Res,
        AntennaCableDelay,
        RfGroupDelay,
        UserDelay
    >;
};

/// @brief Definition of <b>"CFG-TP"</b> message class.
/// @details
///     See @ref CfgTpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTp : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp>,
        comms::option::def::FieldsImpl<typename CfgTpFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTp>,
            comms::option::def::FieldsImpl<typename CfgTpFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_interval() for @ref CfgTpFields::Interval field.
    ///     @li @b field_length() for @ref CfgTpFields::Length field.
    ///     @li @b field_status() for @ref CfgTpFields::Status field.
    ///     @li @b field_timeRef() for @ref CfgTpFields::TimeRef field.
    ///     @li @b field_flags() for @ref CfgTpFields::Flags field.
    ///     @li @b field_res() for @ref CfgTpFields::Res field.
    ///     @li @b field_antennaCableDelay() for @ref CfgTpFields::AntennaCableDelay field.
    ///     @li @b field_rfGroupDelay() for @ref CfgTpFields::RfGroupDelay field.
    ///     @li @b field_userDelay() for @ref CfgTpFields::UserDelay field.
    COMMS_MSG_FIELDS_ACCESS(
        interval,
        length,
        status,
        timeRef,
        flags,
        res,
        antennaCableDelay,
        rfGroupDelay,
        userDelay
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TP";
    }
    
    
};

} // namespace message

} // namespace ublox


