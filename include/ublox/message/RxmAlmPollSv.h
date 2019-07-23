/// @file
/// @brief Contains definition of <b>"RXM-ALM (Poll SV)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmAlmPollSv.
/// @tparam TOpt Extra options
/// @see @ref RxmAlmPollSv
/// @headerfile "ublox/message/RxmAlmPollSv.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmAlmPollSvFields
{
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Svid
    >;
};

/// @brief Definition of <b>"RXM-ALM (Poll SV)"</b> message class.
/// @details
///     See @ref RxmAlmPollSvFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmAlmPollSv.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmAlmPollSv : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmAlmPollSv,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmAlm>,
        comms::option::def::FieldsImpl<typename RxmAlmPollSvFields<TOpt>::All>,
        comms::option::def::MsgType<RxmAlmPollSv<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmAlmPollSv,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmAlm>,
            comms::option::def::FieldsImpl<typename RxmAlmPollSvFields<TOpt>::All>,
            comms::option::def::MsgType<RxmAlmPollSv<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_svid() for @ref RxmAlmPollSvFields::Svid field.
    COMMS_MSG_FIELDS_ACCESS(
        svid
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-ALM (Poll SV)";
    }
    
    
};

} // namespace message

} // namespace ublox


