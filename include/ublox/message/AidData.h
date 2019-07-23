/// @file
/// @brief Contains definition of <b>"AID-DATA"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidData.
/// @tparam TOpt Extra options
/// @see @ref AidData
/// @headerfile "ublox/message/AidData.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidDataFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"AID-DATA"</b> message class.
/// @details
///     See @ref AidDataFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidData.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidData : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidData,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidData>,
        comms::option::def::FieldsImpl<typename AidDataFields<TOpt>::All>,
        comms::option::def::MsgType<AidData<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidData,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidData>,
            comms::option::def::FieldsImpl<typename AidDataFields<TOpt>::All>,
            comms::option::def::MsgType<AidData<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 0U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-DATA";
    }
    
    
};

} // namespace message

} // namespace ublox


