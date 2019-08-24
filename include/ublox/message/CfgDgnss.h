/// @file
/// @brief Contains definition of <b>"CFG-DGNSS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgDgnssFields.
/// @see @ref CfgDgnssFields
/// @headerfile "ublox/message/CfgDgnss.h"
struct CfgDgnssFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
    enum class DgnssModeVal : std::uint8_t
    {
        Float = 2, ///< value @b Float
        Fixed = 3, ///< value @b Fixed
        
        // --- Extra values generated for convenience ---
        FirstValue = 2, ///< First defined value.
        LastValue = 3, ///< Last defined value.
        ValuesLimit = 4, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
    struct DgnssModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(DgnssModeVal val)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                "Float",
                "Fixed"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref CfgDgnss.
/// @tparam TOpt Extra options
/// @see @ref CfgDgnss
/// @headerfile "ublox/message/CfgDgnss.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDgnssFields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgDgnssFields::DgnssMode field.
    using DgnssModeVal = ublox::message::CfgDgnssFieldsCommon::DgnssModeVal;
    
    /// @brief Definition of <b>"dgnssMode"</b> field.
    /// @see @ref ublox::message::CfgDgnssFields::DgnssModeVal
    struct DgnssMode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            DgnssModeVal,
            comms::option::def::ValidNumValueRange<2, 3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dgnssMode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(DgnssModeVal val)
        {
            return ublox::message::CfgDgnssFieldsCommon::DgnssModeCommon::valueName(val);
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        DgnssMode,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-DGNSS"</b> message class.
/// @details
///     See @ref CfgDgnssFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDgnss.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDgnss : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
        comms::option::def::FieldsImpl<typename CfgDgnssFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDgnss<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
            comms::option::def::FieldsImpl<typename CfgDgnssFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDgnss<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_dgnssMode() for @ref CfgDgnssFields::DgnssMode field.
    ///     @li @b field_reserved1() for @ref CfgDgnssFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        dgnssMode,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-DGNSS";
    }
    
    
};

} // namespace message

} // namespace ublox


