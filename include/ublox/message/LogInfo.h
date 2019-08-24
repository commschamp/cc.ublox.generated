/// @file
/// @brief Contains definition of <b>"LOG-INFO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Hour.h"
#include "ublox/field/Min.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res8.h"
#include "ublox/field/Sec.h"
#include "ublox/field/Year.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref LogInfoFields.
/// @see @ref LogInfoFields
/// @headerfile "ublox/message/LogInfo.h"
struct LogInfoFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::LogInfoFields::Status field.
    struct StatusCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                "recording",
                "inactive",
                "circular"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref LogInfo.
/// @tparam TOpt Extra options
/// @see @ref LogInfo
/// @headerfile "ublox/message/LogInfo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogInfoFields
{
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
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"filestoreCapacity"</b> field.
    struct FilestoreCapacity : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "filestoreCapacity";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"currentMaxLogSize"</b> field.
    struct CurrentMaxLogSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "currentMaxLogSize";
        }
        
    };
    
    /// @brief Definition of <b>"currentLogSize"</b> field.
    struct CurrentLogSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "currentLogSize";
        }
        
    };
    
    /// @brief Definition of <b>"entryCount"</b> field.
    struct EntryCount : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "entryCount";
        }
        
    };
    
    /// @brief Definition of <b>"oldestYear"</b> field.
    struct OldestYear : public
        ublox::field::Year<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestYear";
        }
        
    };
    
    /// @brief Definition of <b>"oldestMonth"</b> field.
    struct OldestMonth : public
        ublox::field::Month<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestMonth";
        }
        
    };
    
    /// @brief Definition of <b>"oldestDay"</b> field.
    struct OldestDay : public
        ublox::field::Day<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestDay";
        }
        
    };
    
    /// @brief Definition of <b>"oldestHour"</b> field.
    struct OldestHour : public
        ublox::field::Hour<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestHour";
        }
        
    };
    
    /// @brief Definition of <b>"oldestMinute"</b> field.
    struct OldestMinute : public
        ublox::field::Min<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestMinute";
        }
        
    };
    
    /// @brief Definition of <b>"oldestSecond"</b> field.
    struct OldestSecond : public
        ublox::field::Sec<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oldestSecond";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Definition of <b>"newestYear"</b> field.
    struct NewestYear : public
        ublox::field::Year<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestYear";
        }
        
    };
    
    /// @brief Definition of <b>"newestMonth"</b> field.
    struct NewestMonth : public
        ublox::field::Month<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestMonth";
        }
        
    };
    
    /// @brief Definition of <b>"newestDay"</b> field.
    struct NewestDay : public
        ublox::field::Day<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestDay";
        }
        
    };
    
    /// @brief Definition of <b>"newestHour"</b> field.
    struct NewestHour : public
        ublox::field::Hour<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestHour";
        }
        
    };
    
    /// @brief Definition of <b>"newestMinute"</b> field.
    struct NewestMinute : public
        ublox::field::Min<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestMinute";
        }
        
    };
    
    /// @brief Definition of <b>"newestSecond"</b> field.
    struct NewestSecond : public
        ublox::field::Sec<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "newestSecond";
        }
        
    };
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    class Status : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xC7U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xC7U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_recording.
        ///      @li @b BitIdx_inactive.
        ///      @li @b BitIdx_circular.
        COMMS_BITMASK_BITS(
            recording=3,
            inactive=4,
            circular=5
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_recording() and @b setBitValue_recording().
        ///      @li @b getBitValue_inactive() and @b setBitValue_inactive().
        ///      @li @b getBitValue_circular() and @b setBitValue_circular().
        COMMS_BITMASK_BITS_ACCESS(
            recording,
            inactive,
            circular
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::LogInfoFieldsCommon::StatusCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"reserved5"</b> field.
    struct Reserved5 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved5";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        FilestoreCapacity,
        Reserved2,
        CurrentMaxLogSize,
        CurrentLogSize,
        EntryCount,
        OldestYear,
        OldestMonth,
        OldestDay,
        OldestHour,
        OldestMinute,
        OldestSecond,
        Reserved3,
        NewestYear,
        NewestMonth,
        NewestDay,
        NewestHour,
        NewestMinute,
        NewestSecond,
        Reserved4,
        Status,
        Reserved5
    >;
};

/// @brief Definition of <b>"LOG-INFO"</b> message class.
/// @details
///     See @ref LogInfoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogInfo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogInfo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogInfo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogInfo>,
        comms::option::def::FieldsImpl<typename LogInfoFields<TOpt>::All>,
        comms::option::def::MsgType<LogInfo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogInfo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogInfo>,
            comms::option::def::FieldsImpl<typename LogInfoFields<TOpt>::All>,
            comms::option::def::MsgType<LogInfo<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref LogInfoFields::Version field.
    ///     @li @b field_reserved1() for @ref LogInfoFields::Reserved1 field.
    ///     @li @b field_filestoreCapacity() for @ref LogInfoFields::FilestoreCapacity field.
    ///     @li @b field_reserved2() for @ref LogInfoFields::Reserved2 field.
    ///     @li @b field_currentMaxLogSize() for @ref LogInfoFields::CurrentMaxLogSize field.
    ///     @li @b field_currentLogSize() for @ref LogInfoFields::CurrentLogSize field.
    ///     @li @b field_entryCount() for @ref LogInfoFields::EntryCount field.
    ///     @li @b field_oldestYear() for @ref LogInfoFields::OldestYear field.
    ///     @li @b field_oldestMonth() for @ref LogInfoFields::OldestMonth field.
    ///     @li @b field_oldestDay() for @ref LogInfoFields::OldestDay field.
    ///     @li @b field_oldestHour() for @ref LogInfoFields::OldestHour field.
    ///     @li @b field_oldestMinute() for @ref LogInfoFields::OldestMinute field.
    ///     @li @b field_oldestSecond() for @ref LogInfoFields::OldestSecond field.
    ///     @li @b field_reserved3() for @ref LogInfoFields::Reserved3 field.
    ///     @li @b field_newestYear() for @ref LogInfoFields::NewestYear field.
    ///     @li @b field_newestMonth() for @ref LogInfoFields::NewestMonth field.
    ///     @li @b field_newestDay() for @ref LogInfoFields::NewestDay field.
    ///     @li @b field_newestHour() for @ref LogInfoFields::NewestHour field.
    ///     @li @b field_newestMinute() for @ref LogInfoFields::NewestMinute field.
    ///     @li @b field_newestSecond() for @ref LogInfoFields::NewestSecond field.
    ///     @li @b field_reserved4() for @ref LogInfoFields::Reserved4 field.
    ///     @li @b field_status() for @ref LogInfoFields::Status field.
    ///     @li @b field_reserved5() for @ref LogInfoFields::Reserved5 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        filestoreCapacity,
        reserved2,
        currentMaxLogSize,
        currentLogSize,
        entryCount,
        oldestYear,
        oldestMonth,
        oldestDay,
        oldestHour,
        oldestMinute,
        oldestSecond,
        reserved3,
        newestYear,
        newestMonth,
        newestDay,
        newestHour,
        newestMinute,
        newestSecond,
        reserved4,
        status,
        reserved5
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 48U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 48U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "LOG-INFO";
    }
    
    
};

} // namespace message

} // namespace ublox


