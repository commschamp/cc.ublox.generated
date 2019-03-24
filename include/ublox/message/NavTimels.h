/// @file
/// @brief Contains definition of <b>"NAV-TIMELS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavTimels.
/// @tparam TOpt Extra options
/// @see @ref NavTimels
/// @headerfile "ublox/message/NavTimels.h"
template <typename TOpt = ublox::DefaultOptions>
struct NavTimelsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
           TOpt
       >;
    
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
    
    /// @brief Values enumerator for @ref ublox::message::NavTimelsFields::SrcOfCurrLs field.
    enum class SrcOfCurrLsVal : std::uint8_t
    {
        Default = 0, ///< value @b Default
        Derived = 1, ///< value @b Derived
        GPS = 2, ///< value @b GPS
        SBAS = 3, ///< value @b SBAS
        BeiDou = 4, ///< value @b BeiDou
        Galileo = 5, ///< value @b Galileo
        AidedData = 6, ///< value <b>Aided data</b>.
        Configured = 7, ///< value @b Configured
        Unknown = 255, ///< value @b Unknown
        
    };
    
    /// @brief Definition of <b>"srcOfCurrLs"</b> field.
    /// @see @ref ublox::message::NavTimelsFields::SrcOfCurrLsVal
    struct SrcOfCurrLs : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            SrcOfCurrLsVal,
            comms::option::ValidNumValueRange<0, 7>,
            comms::option::ValidNumValue<255>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "srcOfCurrLs";
        }
        
    };
    
    /// @brief Definition of <b>"currLs"</b> field.
    struct CurrLs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "currLs";
        }
        
    };
    
    /// @brief Values enumerator for @ref ublox::message::NavTimelsFields::SrcOfLsChange field.
    enum class SrcOfLsChangeVal : std::uint8_t
    {
        NoSource = 0, ///< value <b>No source</b>.
        GPS = 2, ///< value @b GPS
        SBAS = 3, ///< value @b SBAS
        BeiDou = 4, ///< value @b BeiDou
        Galileo = 5, ///< value @b Galileo
        GLONASS = 6, ///< value @b GLONASS
        
    };
    
    /// @brief Definition of <b>"srcOfLsChange"</b> field.
    /// @see @ref ublox::message::NavTimelsFields::SrcOfLsChangeVal
    struct SrcOfLsChange : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            SrcOfLsChangeVal,
            comms::option::ValidNumValue<0>,
            comms::option::ValidNumValueRange<2, 6>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "srcOfLsChange";
        }
        
    };
    
    /// @brief Definition of <b>"lsChange"</b> field.
    struct LsChange : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lsChange";
        }
        
    };
    
    /// @brief Definition of <b>"timeToLsEvent"</b> field.
    struct TimeToLsEvent : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeToLsEvent";
        }
        
    };
    
    /// @brief Definition of <b>"dateOfLsGpsWn"</b> field.
    struct DateOfLsGpsWn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dateOfLsGpsWn";
        }
        
    };
    
    /// @brief Definition of <b>"dateOfLsGpsDn"</b> field.
    struct DateOfLsGpsDn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dateOfLsGpsDn";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res3<
           TOpt
       >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::FixedLength<1U>,
            comms::option::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedLength<1U>,
                comms::option::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_validCurrLs, @b getBitValue_validCurrLs() and @b setBitValue_validCurrLs().
        ///      @li @b BitIdx_validTimeToLsEvent, @b getBitValue_validTimeToLsEvent() and @b setBitValue_validTimeToLsEvent().
        COMMS_BITMASK_BITS_SEQ(
            validCurrLs,
            validTimeToLsEvent
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        Reserved1,
        SrcOfCurrLs,
        CurrLs,
        SrcOfLsChange,
        LsChange,
        TimeToLsEvent,
        DateOfLsGpsWn,
        DateOfLsGpsDn,
        Reserved2,
        Valid
    >;
};

/// @brief Definition of <b>"NAV-TIMELS"</b> message class.
/// @details
///     See @ref NavTimelsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimels.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class NavTimels : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimels,
        comms::option::StaticNumIdImpl<ublox::MsgId_NavTimels>,
        comms::option::FieldsImpl<typename NavTimelsFields<TOpt>::All>,
        comms::option::MsgType<NavTimels<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimels,
            comms::option::StaticNumIdImpl<ublox::MsgId_NavTimels>,
            comms::option::FieldsImpl<typename NavTimelsFields<TOpt>::All>,
            comms::option::MsgType<NavTimels<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavTimelsFields::Itow field.
    ///     @li @b field_version() for @ref NavTimelsFields::Version field.
    ///     @li @b field_reserved1() for @ref NavTimelsFields::Reserved1 field.
    ///     @li @b field_srcOfCurrLs() for @ref NavTimelsFields::SrcOfCurrLs field.
    ///     @li @b field_currLs() for @ref NavTimelsFields::CurrLs field.
    ///     @li @b field_srcOfLsChange() for @ref NavTimelsFields::SrcOfLsChange field.
    ///     @li @b field_lsChange() for @ref NavTimelsFields::LsChange field.
    ///     @li @b field_timeToLsEvent() for @ref NavTimelsFields::TimeToLsEvent field.
    ///     @li @b field_dateOfLsGpsWn() for @ref NavTimelsFields::DateOfLsGpsWn field.
    ///     @li @b field_dateOfLsGpsDn() for @ref NavTimelsFields::DateOfLsGpsDn field.
    ///     @li @b field_reserved2() for @ref NavTimelsFields::Reserved2 field.
    ///     @li @b field_valid() for @ref NavTimelsFields::Valid field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        version,
        reserved1,
        srcOfCurrLs,
        currLs,
        srcOfLsChange,
        lsChange,
        timeToLsEvent,
        dateOfLsGpsWn,
        dateOfLsGpsDn,
        reserved2,
        valid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 24U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 24U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-TIMELS";
    }
    
    
};

} // namespace message

} // namespace ublox


