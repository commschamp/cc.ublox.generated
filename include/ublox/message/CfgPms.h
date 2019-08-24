/// @file
/// @brief Contains definition of <b>"CFG-PMS"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
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

/// @brief Common definitions for fields from @ref CfgPmsFields.
/// @see @ref CfgPmsFields
/// @headerfile "ublox/message/CfgPms.h"
struct CfgPmsFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
    enum class PowerSetupValueVal : std::uint8_t
    {
        FullPower = 0, ///< value <b>Full power</b>.
        Balanced = 1, ///< value @b Balanced
        Interval = 2, ///< value @b Interval
        Agressive1Hz = 3, ///< value <b>Aggressive with 1Hz</b>.
        Agressive2Hz = 4, ///< value <b>Aggressive with 2Hz</b>.
        Agressive4Hz = 5, ///< value <b>Aggressive with 4Hz</b>.
        Invalid = 255, ///< value @b Invalid
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 255, ///< Last defined value.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
    struct PowerSetupValueCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(PowerSetupValueVal val)
        {
            using NameInfo = std::pair<PowerSetupValueVal, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(PowerSetupValueVal::FullPower, "Full power"),
                std::make_pair(PowerSetupValueVal::Balanced, "Balanced"),
                std::make_pair(PowerSetupValueVal::Interval, "Interval"),
                std::make_pair(PowerSetupValueVal::Agressive1Hz, "Aggressive with 1Hz"),
                std::make_pair(PowerSetupValueVal::Agressive2Hz, "Aggressive with 2Hz"),
                std::make_pair(PowerSetupValueVal::Agressive4Hz, "Aggressive with 4Hz"),
                std::make_pair(PowerSetupValueVal::Invalid, "Invalid")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, PowerSetupValueVal v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
};

/// @brief Fields of @ref CfgPms.
/// @tparam TOpt Extra options
/// @see @ref CfgPms
/// @headerfile "ublox/message/CfgPms.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPmsFields
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
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgPmsFields::PowerSetupValue field.
    using PowerSetupValueVal = ublox::message::CfgPmsFieldsCommon::PowerSetupValueVal;
    
    /// @brief Definition of <b>"powerSetupValue"</b> field.
    /// @see @ref ublox::message::CfgPmsFields::PowerSetupValueVal
    struct PowerSetupValue : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            PowerSetupValueVal,
            comms::option::def::ValidNumValueRange<0, 5>,
            comms::option::def::ValidNumValue<255>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "powerSetupValue";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(PowerSetupValueVal val)
        {
            return ublox::message::CfgPmsFieldsCommon::PowerSetupValueCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"period"</b> field.
    struct Period : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "period";
        }
        
    };
    
    /// @brief Definition of <b>"onTime"</b> field.
    struct OnTime : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "onTime";
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        PowerSetupValue,
        Period,
        OnTime,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-PMS"</b> message class.
/// @details
///     See @ref CfgPmsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPms.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPms : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPms>,
        comms::option::def::FieldsImpl<typename CfgPmsFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPms<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPms>,
            comms::option::def::FieldsImpl<typename CfgPmsFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPms<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgPmsFields::Version field.
    ///     @li @b field_powerSetupValue() for @ref CfgPmsFields::PowerSetupValue field.
    ///     @li @b field_period() for @ref CfgPmsFields::Period field.
    ///     @li @b field_onTime() for @ref CfgPmsFields::OnTime field.
    ///     @li @b field_reserved1() for @ref CfgPmsFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        powerSetupValue,
        period,
        onTime,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PMS";
    }
    
    
};

} // namespace message

} // namespace ublox


