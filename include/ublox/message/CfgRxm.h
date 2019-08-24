/// @file
/// @brief Contains definition of <b>"CFG-RXM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgRxmFields.
/// @see @ref CfgRxmFields
/// @headerfile "ublox/message/CfgRxm.h"
struct CfgRxmFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgRxmFields::LpMode field.
    enum class LpModeVal : std::uint8_t
    {
        Continuous = 0, ///< value @b Continuous
        PowerSave = 1, ///< value <b>Power Save</b>.
        Continuous2 = 4, ///< value <b>Continuous (2)</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 4, ///< Last defined value.
        ValuesLimit = 5, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgRxmFields::LpMode field.
    struct LpModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(LpModeVal val)
        {
            static const char* Map[] = {
                "Continuous",
                "Power Save",
                nullptr,
                nullptr,
                "Continuous (2)"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref CfgRxm.
/// @tparam TOpt Extra options
/// @see @ref CfgRxm
/// @headerfile "ublox/message/CfgRxm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRxmFields
{
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
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
    ///     @ref ublox::message::CfgRxmFields::LpMode field.
    using LpModeVal = ublox::message::CfgRxmFieldsCommon::LpModeVal;
    
    /// @brief Definition of <b>"lpMode"</b> field.
    /// @see @ref ublox::message::CfgRxmFields::LpModeVal
    struct LpMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            LpModeVal,
            comms::option::def::ValidNumValueRange<0, 1>,
            comms::option::def::ValidNumValue<4>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lpMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(LpModeVal val)
        {
            return ublox::message::CfgRxmFieldsCommon::LpModeCommon::valueName(val);
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Reserved1,
        LpMode
    >;
};

/// @brief Definition of <b>"CFG-RXM"</b> message class.
/// @details
///     See @ref CfgRxmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRxm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRxm : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRxm>,
        comms::option::def::FieldsImpl<typename CfgRxmFields<TOpt>::All>,
        comms::option::def::MsgType<CfgRxm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRxm>,
            comms::option::def::FieldsImpl<typename CfgRxmFields<TOpt>::All>,
            comms::option::def::MsgType<CfgRxm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_reserved1() for @ref CfgRxmFields::Reserved1 field.
    ///     @li @b field_lpMode() for @ref CfgRxmFields::LpMode field.
    COMMS_MSG_FIELDS_ACCESS(
        reserved1,
        lpMode
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 2U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 2U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-RXM";
    }
    
    
};

} // namespace message

} // namespace ublox


