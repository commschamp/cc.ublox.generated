// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"AID-ALP (Data)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/AidAlpDataCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref AidAlpData.
/// @tparam TOpt Extra options
/// @see @ref AidAlpData
/// @headerfile cc_ublox/message/AidAlpData.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct AidAlpDataFields
{
    /// @brief Scope for all the member fields of
    ///     @ref AlpData field.
    struct AlpDataMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint16_t
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_ublox::message::AidAlpDataFieldsCommon::AlpDataMembersCommon::ElementCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::AidAlpDataFieldsCommon::AlpDataMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"alpData"</b> field.
    class AlpData : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename AlpDataMembers::Element,
            typename TOpt::message::AidAlpDataFields::AlpData
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename AlpDataMembers::Element,
                typename TOpt::message::AidAlpDataFields::AlpData
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::AidAlpDataFieldsCommon::AlpDataCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        AlpData
    >;
};

/// @brief Definition of <b>"AID-ALP (Data)"</b> message class.
/// @details
///     See @ref AidAlpDataFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/AidAlpData.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class AidAlpData : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidAlpData,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_AidAlp>,
        comms::option::def::FieldsImpl<typename AidAlpDataFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlpData<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidAlpData,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_AidAlp>,
            comms::option::def::FieldsImpl<typename AidAlpDataFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlpData<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_alpData index, @b Field_alpData type and @b field_alpData() access fuction
    ///         for @ref AidAlpDataFields::AlpData field.
    COMMS_MSG_FIELDS_NAMES(
        alpData
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::AidAlpDataCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox