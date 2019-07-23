/// @file
/// @brief Contains definition of <b>"LOG-STRING"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref LogString.
/// @tparam TOpt Extra options
/// @see @ref LogString
/// @headerfile "ublox/message/LogString.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct LogStringFields
{
    /// @brief Definition of <b>"bytes"</b> field.
    struct Bytes : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::LogStringFields::Bytes
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "bytes";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Bytes
    >;
};

/// @brief Definition of <b>"LOG-STRING"</b> message class.
/// @details
///     See @ref LogStringFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/LogString.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class LogString : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogString,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_LogString>,
        comms::option::def::FieldsImpl<typename LogStringFields<TOpt>::All>,
        comms::option::def::MsgType<LogString<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogString,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_LogString>,
            comms::option::def::FieldsImpl<typename LogStringFields<TOpt>::All>,
            comms::option::def::MsgType<LogString<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_bytes() for @ref LogStringFields::Bytes field.
    COMMS_MSG_FIELDS_ACCESS(
        bytes
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "LOG-STRING";
    }
    
    
};

} // namespace message

} // namespace ublox


