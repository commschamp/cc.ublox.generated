/// @file
/// @brief Contains definition of <b>"CFG-PWR"</b> message and its fields.

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
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgPwrFields.
/// @see @ref CfgPwrFields
/// @headerfile "ublox/message/CfgPwr.h"
struct CfgPwrFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgPwrFields::State field.
    enum class StateVal : std::uint32_t
    {
        Backup = 0x42434B50UL, ///< value @b Backup
        Running = 0x52554E20UL, ///< value @b Running
        Stopped = 0x53544F50UL, ///< value @b Stopped
        
        // --- Extra values generated for convenience ---
        FirstValue = 0x42434B50UL, ///< First defined value.
        LastValue = 0x53544F50UL, ///< Last defined value.
        ValuesLimit = 0x53544F51UL, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgPwrFields::State field.
    struct StateCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(StateVal val)
        {
            using NameInfo = std::pair<StateVal, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(StateVal::Backup, "Backup"),
                std::make_pair(StateVal::Running, "Running"),
                std::make_pair(StateVal::Stopped, "Stopped")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, StateVal v) -> bool
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

/// @brief Fields of @ref CfgPwr.
/// @tparam TOpt Extra options
/// @see @ref CfgPwr
/// @headerfile "ublox/message/CfgPwr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPwrFields
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
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgPwrFields::State field.
    using StateVal = ublox::message::CfgPwrFieldsCommon::StateVal;
    
    /// @brief Definition of <b>"state"</b> field.
    /// @see @ref ublox::message::CfgPwrFields::StateVal
    struct State : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            StateVal,
            comms::option::def::DefaultNumValue<1381322272L>,
            comms::option::def::ValidNumValue<1111706448L>,
            comms::option::def::ValidNumValue<1381322272L>,
            comms::option::def::ValidNumValue<1398034256L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "state";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(StateVal val)
        {
            return ublox::message::CfgPwrFieldsCommon::StateCommon::valueName(val);
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        State
    >;
};

/// @brief Definition of <b>"CFG-PWR"</b> message class.
/// @details
///     See @ref CfgPwrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPwr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPwr : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgPwr,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPwr>,
        comms::option::def::FieldsImpl<typename CfgPwrFields<TOpt>::All>,
        comms::option::def::MsgType<CfgPwr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgPwr,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPwr>,
            comms::option::def::FieldsImpl<typename CfgPwrFields<TOpt>::All>,
            comms::option::def::MsgType<CfgPwr<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgPwrFields::Version field.
    ///     @li @b field_reserved1() for @ref CfgPwrFields::Reserved1 field.
    ///     @li @b field_state() for @ref CfgPwrFields::State field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        state
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PWR";
    }
    
    
};

} // namespace message

} // namespace ublox


