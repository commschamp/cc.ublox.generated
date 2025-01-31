// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"CFG-VALGET"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/CfgValLayer.h"
#include "cc_ublox/field/CfgValPairSimple.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/CfgValgetCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref CfgValget.
/// @tparam TOpt Extra options
/// @see @ref CfgValget
/// @headerfile cc_ublox/message/CfgValget.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct CfgValgetFields
{
    /// @brief Definition of <b>"version"</b> field.
    class Version : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::FixedValue,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue,
                comms::option::def::DefaultNumValue<1>,
                comms::option::def::ValidNumValue<1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"layer"</b> field.
    class Layer : public
        cc_ublox::field::CfgValLayer<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::CfgValLayer<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::LayerCommon::name();
        }
    };

    /// @brief Definition of <b>"position"</b> field.
    class Position : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::PositionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::PositionCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Cfgdata field.
    struct CfgdataMembers
    {
        /// @brief Definition of <b>"Element"</b> field.
        class Element : public
            cc_ublox::field::CfgValPairSimple<
                TOpt,
                comms::option::def::HasName
            >
        {
            using Base =
                cc_ublox::field::CfgValPairSimple<
                    TOpt,
                    comms::option::def::HasName
                >;
        public:
            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::CfgValgetFieldsCommon::CfgdataMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"cfgdata"</b> field.
    class Cfgdata : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename CfgdataMembers::Element,
            typename TOpt::message::CfgValgetFields::Cfgdata,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename CfgdataMembers::Element,
                typename TOpt::message::CfgValgetFields::Cfgdata,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgValgetFieldsCommon::CfgdataCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Layer,
        Position,
        Cfgdata
    >;
};

/// @brief Definition of <b>"CFG-VALGET"</b> message class.
/// @details
///     See @ref CfgValgetFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/CfgValget.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class CfgValget : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgValget,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgValget>,
        comms::option::def::FieldsImpl<typename CfgValgetFields<TOpt>::All>,
        comms::option::def::MsgType<CfgValget<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgValget,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgValget>,
            comms::option::def::FieldsImpl<typename CfgValgetFields<TOpt>::All>,
            comms::option::def::MsgType<CfgValget<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref CfgValgetFields::Version field.
    ///     @li @b FieldIdx_layer index, @b Field_layer type and @b field_layer() access fuction
    ///         for @ref CfgValgetFields::Layer field.
    ///     @li @b FieldIdx_position index, @b Field_position type and @b field_position() access fuction
    ///         for @ref CfgValgetFields::Position field.
    ///     @li @b FieldIdx_cfgdata index, @b Field_cfgdata type and @b field_cfgdata() access fuction
    ///         for @ref CfgValgetFields::Cfgdata field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        layer,
        position,
        cfgdata
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::CfgValgetCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
