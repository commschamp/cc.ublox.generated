// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"RXM-ALM (Poll SV)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/RxmAlmPollSvCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref RxmAlmPollSv.
/// @tparam TOpt Extra options
/// @see @ref RxmAlmPollSv
/// @headerfile cc_ublox/message/RxmAlmPollSv.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct RxmAlmPollSvFields
{
    /// @brief Definition of <b>"svid"</b> field.
    class Svid : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::RxmAlmPollSvFieldsCommon::SvidCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmAlmPollSvFieldsCommon::SvidCommon::name();
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
/// @headerfile cc_ublox/message/RxmAlmPollSv.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class RxmAlmPollSv : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmAlmPollSv,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmAlm>,
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
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmAlm>,
            comms::option::def::FieldsImpl<typename RxmAlmPollSvFields<TOpt>::All>,
            comms::option::def::MsgType<RxmAlmPollSv<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_svid index, @b Field_svid type and @b field_svid() access fuction
    ///         for @ref RxmAlmPollSvFields::Svid field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_ublox::message::RxmAlmPollSvCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox