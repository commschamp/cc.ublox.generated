/// @file
/// @brief Contains definition of <b>"CFG-RATE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
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

/// @brief Fields of @ref CfgRate.
/// @tparam TOpt Extra options
/// @see @ref CfgRate
/// @headerfile "ublox/message/CfgRate.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRateFields
{
    /// @brief Definition of <b>"measRate"</b> field.
    struct MeasRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "measRate";
        }
        
    };
    
    /// @brief Definition of <b>"navRate"</b> field.
    struct NavRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "navRate";
        }
        
    };
    
    /// @brief Values enumerator for @ref ublox::message::CfgRateFields::TimeRef field.
    enum class TimeRefVal : std::uint16_t
    {
        UTC = 0, ///< value @b UTC
        GPS = 1, ///< value @b GPS
        GLONASS = 2, ///< value @b GLONASS
        BeiDou = 3, ///< value @b BeiDou
        Galileo = 4, ///< value @b Galileo
        
    };
    
    /// @brief Definition of <b>"timeRef"</b> field.
    /// @see @ref ublox::message::CfgRateFields::TimeRefVal
    struct TimeRef : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            TimeRefVal,
            comms::option::ValidNumValueRange<0, 4>
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MeasRate,
        NavRate,
        TimeRef
    >;
};

/// @brief Definition of <b>"CFG-RATE"</b> message class.
/// @details
///     See @ref CfgRateFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRate.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRate : public
    comms::MessageBase<
        TMsgBase,
        comms::option::StaticNumIdImpl<ublox::MsgId_CfgRate>,
        comms::option::FieldsImpl<typename CfgRateFields<TOpt>::All>,
        comms::option::MsgType<CfgRate<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::StaticNumIdImpl<ublox::MsgId_CfgRate>,
            comms::option::FieldsImpl<typename CfgRateFields<TOpt>::All>,
            comms::option::MsgType<CfgRate<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_measRate() for @ref CfgRateFields::MeasRate field.
    ///     @li @b field_navRate() for @ref CfgRateFields::NavRate field.
    ///     @li @b field_timeRef() for @ref CfgRateFields::TimeRef field.
    COMMS_MSG_FIELDS_ACCESS(
        measRate,
        navRate,
        timeRef
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 6U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 6U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-RATE";
    }
    
    
};

} // namespace message

} // namespace ublox


