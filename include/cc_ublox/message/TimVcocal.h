// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res3.h"
#include "cc_ublox/message/TimVcocalCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref TimVcocal.
/// @tparam TOpt Extra options
/// @see @ref TimVcocal
/// @headerfile cc_ublox/message/TimVcocal.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct TimVcocalFields
{
    /// @brief Definition of <b>"type"</b> field.
    class Type : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<3>,
                comms::option::def::ValidNumValue<3>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::TypeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::TypeCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(3);
            return true;
        }
    };

    /// @brief Definition of <b>"version"</b> field.
    class Version : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"oscId"</b> field.
    /// @see @ref cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueType
    class OscId : public
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueType,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueType,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::OscIdCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res3<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::Res3<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"gainUncertainty"</b> field.
    class GainUncertainty : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::ScalingRatio<1, 65536L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::GainUncertaintyCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 9U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::GainUncertaintyCommon::name();
        }
    };

    /// @brief Definition of <b>"gainVco"</b> field.
    class GainVco : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 65536L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::GainVcoCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 9U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimVcocalFieldsCommon::GainVcoCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        OscId,
        Reserved1,
        GainUncertainty,
        GainVco
    >;
};

/// @brief Definition of <b>"TIM-VCOCAL"</b> message class.
/// @details
///     See @ref TimVcocalFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/TimVcocal.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class TimVcocal : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocal,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimVcocal>,
        comms::option::def::FieldsImpl<typename TimVcocalFields<TOpt>::All>,
        comms::option::def::MsgType<TimVcocal<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocal,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocal<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_type index, @b Field_type type and @b field_type() access fuction
    ///         for @ref TimVcocalFields::Type field.
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref TimVcocalFields::Version field.
    ///     @li @b FieldIdx_oscId index, @b Field_oscId type and @b field_oscId() access fuction
    ///         for @ref TimVcocalFields::OscId field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref TimVcocalFields::Reserved1 field.
    ///     @li @b FieldIdx_gainUncertainty index, @b Field_gainUncertainty type and @b field_gainUncertainty() access fuction
    ///         for @ref TimVcocalFields::GainUncertainty field.
    ///     @li @b FieldIdx_gainVco index, @b Field_gainVco type and @b field_gainVco() access fuction
    ///         for @ref TimVcocalFields::GainVco field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        oscId,
        reserved1,
        gainUncertainty,
        gainVco
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::TimVcocalCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox