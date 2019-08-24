/// @file
/// @brief Contains definition of <b>"AID-ALP (Status)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref AidAlpStatusFields.
/// @see @ref AidAlpStatusFields
/// @headerfile "ublox/message/AidAlpStatus.h"
struct AidAlpStatusFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::AidAlpStatusFields::Status field.
    enum class StatusVal : std::uint8_t
    {
        nak = 0, ///< value @b nak
        ack = 1, ///< value @b ack
        
        // --- Extra values generated for convenience ---
        firstValue = 0, ///< First defined value.
        lastValue = 1, ///< Last defined value.
        valuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::AidAlpStatusFields::Status field.
    struct StatusCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(StatusVal val)
        {
            static const char* Map[] = {
                "nak",
                "ack"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref AidAlpStatus.
/// @tparam TOpt Extra options
/// @see @ref AidAlpStatus
/// @headerfile "ublox/message/AidAlpStatus.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlpStatusFields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::AidAlpStatusFields::Status field.
    using StatusVal = ublox::message::AidAlpStatusFieldsCommon::StatusVal;
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::AidAlpStatusFields::StatusVal
    struct Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            StatusVal,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValueRange<0, 1>
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
            return ublox::message::AidAlpStatusFieldsCommon::StatusCommon::valueName(val);
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Status
    >;
};

/// @brief Definition of <b>"AID-ALP (Status)"</b> message class.
/// @details
///     See @ref AidAlpStatusFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlpStatus.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlpStatus : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
        comms::option::def::FieldsImpl<typename AidAlpStatusFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlpStatus<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
            comms::option::def::FieldsImpl<typename AidAlpStatusFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlpStatus<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_status() for @ref AidAlpStatusFields::Status field.
    COMMS_MSG_FIELDS_ACCESS(
        status
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-ALP (Status)";
    }
    
    
};

} // namespace message

} // namespace ublox


