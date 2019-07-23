/// @file
/// @brief Contains definition of <b>"INF-ERROR"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref InfError.
/// @tparam TOpt Extra options
/// @see @ref InfError
/// @headerfile "ublox/message/InfError.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct InfErrorFields
{
    /// @brief Definition of <b>"str"</b> field.
    struct Str : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::InfErrorFields::Str
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "str";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Str
    >;
};

/// @brief Definition of <b>"INF-ERROR"</b> message class.
/// @details
///     See @ref InfErrorFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/InfError.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class InfError : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::InfError,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_InfError>,
        comms::option::def::FieldsImpl<typename InfErrorFields<TOpt>::All>,
        comms::option::def::MsgType<InfError<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::InfError,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_InfError>,
            comms::option::def::FieldsImpl<typename InfErrorFields<TOpt>::All>,
            comms::option::def::MsgType<InfError<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_str() for @ref InfErrorFields::Str field.
    COMMS_MSG_FIELDS_ACCESS(
        str
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "INF-ERROR";
    }
    
    
};

} // namespace message

} // namespace ublox


