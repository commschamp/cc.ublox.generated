/// @file
/// @brief Contains definition of <b>"CFG-TMODE"</b> message and its fields.

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

/// @brief Common definitions for fields from @ref CfgTmodeFields.
/// @see @ref CfgTmodeFields
/// @headerfile "ublox/message/CfgTmode.h"
struct CfgTmodeFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
    enum class TimeModeVal : std::uint32_t
    {
        Disabled = 0, ///< value @b Disabled
        SurveyIn = 1, ///< value <b>Survey In</b>.
        FixedMode = 2, ///< value <b>Fixed Mode</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
    struct TimeModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeModeVal val)
        {
            static const char* Map[] = {
                "Disabled",
                "Survey In",
                "Fixed Mode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref CfgTmode.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode
/// @headerfile "ublox/message/CfgTmode.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmodeFields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgTmodeFields::TimeMode field.
    using TimeModeVal = ublox::message::CfgTmodeFieldsCommon::TimeModeVal;
    
    /// @brief Definition of <b>"timeMode"</b> field.
    /// @see @ref ublox::message::CfgTmodeFields::TimeModeVal
    struct TimeMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            TimeModeVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(TimeModeVal val)
        {
            return ublox::message::CfgTmodeFieldsCommon::TimeModeCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosX"</b> field.
    struct FixedPosX : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosX";
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosY"</b> field.
    struct FixedPosY : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosY";
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosZ"</b> field.
    struct FixedPosZ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosZ";
        }
        
    };
    
    /// @brief Definition of <b>"fixedPosVar"</b> field.
    struct FixedPosVar : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosVar";
        }
        
    };
    
    /// @brief Definition of <b>"svinMinDur"</b> field.
    struct SvinMinDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Definition of <b>"svinVarLimit"</b> field.
    struct SvinVarLimit : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TimeMode,
        FixedPosX,
        FixedPosY,
        FixedPosZ,
        FixedPosVar,
        SvinMinDur,
        SvinVarLimit
    >;
};

/// @brief Definition of <b>"CFG-TMODE"</b> message class.
/// @details
///     See @ref CfgTmodeFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmode.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmode : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
        comms::option::def::FieldsImpl<typename CfgTmodeFields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode>,
            comms::option::def::FieldsImpl<typename CfgTmodeFields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_timeMode() for @ref CfgTmodeFields::TimeMode field.
    ///     @li @b field_fixedPosX() for @ref CfgTmodeFields::FixedPosX field.
    ///     @li @b field_fixedPosY() for @ref CfgTmodeFields::FixedPosY field.
    ///     @li @b field_fixedPosZ() for @ref CfgTmodeFields::FixedPosZ field.
    ///     @li @b field_fixedPosVar() for @ref CfgTmodeFields::FixedPosVar field.
    ///     @li @b field_svinMinDur() for @ref CfgTmodeFields::SvinMinDur field.
    ///     @li @b field_svinVarLimit() for @ref CfgTmodeFields::SvinVarLimit field.
    COMMS_MSG_FIELDS_ACCESS(
        timeMode,
        fixedPosX,
        fixedPosY,
        fixedPosZ,
        fixedPosVar,
        svinMinDur,
        svinVarLimit
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TMODE";
    }
    
    
};

} // namespace message

} // namespace ublox


