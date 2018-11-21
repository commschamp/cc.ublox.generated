/// @file
/// @brief Contains definition of <b>"CFG-LOGFILTER"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgLogfilter.
/// @tparam TOpt Extra options
/// @see @ref CfgLogfilter
/// @headerfile "ublox/message/CfgLogfilter.h"
template <typename TOpt = ublox::DefaultOptions>
struct CfgLogfilterFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::DefaultNumValue<1>,
            comms::option::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::FixedLength<1U>,
            comms::option::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedLength<1U>,
                comms::option::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_recordEnabled, @b getBitValue_recordEnabled() and @b setBitValue_recordEnabled().
        ///      @li @b BitIdx_psmOncePerWakupEnabled, @b getBitValue_psmOncePerWakupEnabled() and @b setBitValue_psmOncePerWakupEnabled().
        ///      @li @b BitIdx_applyAllFilterSettings, @b getBitValue_applyAllFilterSettings() and @b setBitValue_applyAllFilterSettings().
        COMMS_BITMASK_BITS_SEQ(
            recordEnabled,
            psmOncePerWakupEnabled,
            applyAllFilterSettings
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"minInterval"</b> field.
    struct MinInterval : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minInterval";
        }
        
    };
    
    /// @brief Definition of <b>"timeThreshold"</b> field.
    struct TimeThreshold : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeThreshold";
        }
        
    };
    
    /// @brief Definition of <b>"speedThreshold"</b> field.
    struct SpeedThreshold : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::UnitsMetersPerSecond
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "speedThreshold";
        }
        
    };
    
    /// @brief Definition of <b>"positionThres"</b> field.
    struct PositionThres : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::UnitsMeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "positionThres";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Flags,
        MinInterval,
        TimeThreshold,
        SpeedThreshold,
        PositionThres
    >;
};

/// @brief Definition of <b>"CFG-LOGFILTER"</b> message class.
/// @details
///     See @ref CfgLogfilterFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgLogfilter.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class CfgLogfilter : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<ublox::MsgId_CfgLogfilter>,
        comms::option::FieldsImpl<typename CfgLogfilterFields<TOpt>::All>,
        comms::option::MsgType<CfgLogfilter<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<ublox::MsgId_CfgLogfilter>,
            comms::option::FieldsImpl<typename CfgLogfilterFields<TOpt>::All>,
            comms::option::MsgType<CfgLogfilter<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgLogfilterFields::Version field.
    ///     @li @b field_flags() for @ref CfgLogfilterFields::Flags field.
    ///     @li @b field_minInterval() for @ref CfgLogfilterFields::MinInterval field.
    ///     @li @b field_timeThreshold() for @ref CfgLogfilterFields::TimeThreshold field.
    ///     @li @b field_speedThreshold() for @ref CfgLogfilterFields::SpeedThreshold field.
    ///     @li @b field_positionThres() for @ref CfgLogfilterFields::PositionThres field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        flags,
        minInterval,
        timeThreshold,
        speedThreshold,
        positionThres
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-LOGFILTER";
    }
    
    
};

} // namespace message

} // namespace ublox


