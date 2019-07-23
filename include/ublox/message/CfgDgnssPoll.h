/// @file
/// @brief Contains definition of <b>"CFG-DGNSS (Poll)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "ublox/MsgId.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgDgnssPoll.
/// @tparam TOpt Extra options
/// @see @ref CfgDgnssPoll
/// @headerfile "ublox/message/CfgDgnssPoll.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDgnssPollFields
{
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
    >;
};

/// @brief Definition of <b>"CFG-DGNSS (Poll)"</b> message class.
/// @details
///     See @ref CfgDgnssPollFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDgnssPoll.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDgnssPoll : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgDgnssPoll,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
        comms::option::def::FieldsImpl<typename CfgDgnssPollFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDgnssPoll<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgDgnssPoll,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDgnss>,
            comms::option::def::FieldsImpl<typename CfgDgnssPollFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDgnssPoll<TMsgBase, TOpt> >,
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
        return "CFG-DGNSS (Poll)";
    }
    
    
};

} // namespace message

} // namespace ublox


