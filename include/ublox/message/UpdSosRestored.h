/// @file
/// @brief Contains definition of <b>"UPD-SOS (Restored)"</b> message and its fields.

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
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref UpdSosRestoredFields.
/// @see @ref UpdSosRestoredFields
/// @headerfile "ublox/message/UpdSosRestored.h"
struct UpdSosRestoredFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::UpdSosRestoredFields::Response field.
    enum class ResponseVal : std::uint8_t
    {
        Unknown = 0, ///< value @b Unknown
        Failed = 1, ///< value @b Failed
        Restored = 2, ///< value @b Restored
        NotRestored = 3, ///< value @b NotRestored
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 3, ///< Last defined value.
        ValuesLimit = 4, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::UpdSosRestoredFields::Response field.
    struct ResponseCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(ResponseVal val)
        {
            static const char* Map[] = {
                "Unknown",
                "Failed",
                "Restored",
                "NotRestored"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref UpdSosRestored.
/// @tparam TOpt Extra options
/// @see @ref UpdSosRestored
/// @headerfile "ublox/message/UpdSosRestored.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct UpdSosRestoredFields
{
    /// @brief Definition of <b>"cmd"</b> field.
    struct Cmd : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cmd";
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
    ///     @ref ublox::message::UpdSosRestoredFields::Response field.
    using ResponseVal = ublox::message::UpdSosRestoredFieldsCommon::ResponseVal;
    
    /// @brief Definition of <b>"response"</b> field.
    /// @see @ref ublox::message::UpdSosRestoredFields::ResponseVal
    struct Response : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ResponseVal,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "response";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ResponseVal val)
        {
            return ublox::message::UpdSosRestoredFieldsCommon::ResponseCommon::valueName(val);
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Cmd,
        Reserved1,
        Response,
        Reserved2
    >;
};

/// @brief Definition of <b>"UPD-SOS (Restored)"</b> message class.
/// @details
///     See @ref UpdSosRestoredFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/UpdSosRestored.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class UpdSosRestored : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::UpdSosRestored,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
        comms::option::def::FieldsImpl<typename UpdSosRestoredFields<TOpt>::All>,
        comms::option::def::MsgType<UpdSosRestored<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::UpdSosRestored,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_UpdSos>,
            comms::option::def::FieldsImpl<typename UpdSosRestoredFields<TOpt>::All>,
            comms::option::def::MsgType<UpdSosRestored<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_cmd() for @ref UpdSosRestoredFields::Cmd field.
    ///     @li @b field_reserved1() for @ref UpdSosRestoredFields::Reserved1 field.
    ///     @li @b field_response() for @ref UpdSosRestoredFields::Response field.
    ///     @li @b field_reserved2() for @ref UpdSosRestoredFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        cmd,
        reserved1,
        response,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "UPD-SOS (Restored)";
    }
    
    
};

} // namespace message

} // namespace ublox


