// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"MGA-GPS-IONO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res2.h"
#include "cc_ublox/field/Res4.h"
#include "cc_ublox/message/MgaGpsIonoCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MgaGpsIono.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsIono
/// @headerfile cc_ublox/message/MgaGpsIono.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MgaGpsIonoFields
{
    /// @brief Definition of <b>"type"</b> field.
    class Type : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::FixedValue,
            comms::option::def::DefaultNumValue<6>,
            comms::option::def::ValidNumValue<6>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue,
                comms::option::def::DefaultNumValue<6>,
                comms::option::def::ValidNumValue<6>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::TypeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::TypeCommon::name();
        }
    };

    /// @brief Definition of <b>"version"</b> field.
    class Version : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res2<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res2<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"ionoAlpha0"</b> field.
    class IonoAlpha0 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 1073741824L>,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha0Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha0Common::name();
        }
    };

    /// @brief Definition of <b>"ionoAlpha1"</b> field.
    class IonoAlpha1 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 134217728L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 134217728L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha1Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha1Common::name();
        }
    };

    /// @brief Definition of <b>"ionoAlpha2"</b> field.
    class IonoAlpha2 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 16777216L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha2Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha2Common::name();
        }
    };

    /// @brief Definition of <b>"ionoAlpha3"</b> field.
    class IonoAlpha3 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 16777216L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 16777216L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha3Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoAlpha3Common::name();
        }
    };

    /// @brief Definition of <b>"ionoBeta0"</b> field.
    class IonoBeta0 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 2048>,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 2048>,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta0Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta0Common::name();
        }
    };

    /// @brief Definition of <b>"ionoBeta1"</b> field.
    class IonoBeta1 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 16384>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta1Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta1Common::name();
        }
    };

    /// @brief Definition of <b>"ionoBeta2"</b> field.
    class IonoBeta2 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 65536L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta2Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta2Common::name();
        }
    };

    /// @brief Definition of <b>"ionoBeta3"</b> field.
    class IonoBeta3 : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 65536L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta3Common::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::IonoBeta3Common::name();
        }
    };

    /// @brief Definition of <b>"reserved2"</b> field.
    class Reserved2 : public
        cc_ublox::field::Res4<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res4<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGpsIonoFieldsCommon::Reserved2Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        IonoAlpha0,
        IonoAlpha1,
        IonoAlpha2,
        IonoAlpha3,
        IonoBeta0,
        IonoBeta1,
        IonoBeta2,
        IonoBeta3,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GPS-IONO"</b> message class.
/// @details
///     See @ref MgaGpsIonoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MgaGpsIono.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MgaGpsIono : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsIono,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsIonoFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsIono<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsIono,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsIonoFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsIono<TMsgBase, TOpt> >,
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
    ///         for @ref MgaGpsIonoFields::Type field.
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaGpsIonoFields::Version field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaGpsIonoFields::Reserved1 field.
    ///     @li @b FieldIdx_ionoAlpha0 index, @b Field_ionoAlpha0 type and @b field_ionoAlpha0() access fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha0 field.
    ///     @li @b FieldIdx_ionoAlpha1 index, @b Field_ionoAlpha1 type and @b field_ionoAlpha1() access fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha1 field.
    ///     @li @b FieldIdx_ionoAlpha2 index, @b Field_ionoAlpha2 type and @b field_ionoAlpha2() access fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha2 field.
    ///     @li @b FieldIdx_ionoAlpha3 index, @b Field_ionoAlpha3 type and @b field_ionoAlpha3() access fuction
    ///         for @ref MgaGpsIonoFields::IonoAlpha3 field.
    ///     @li @b FieldIdx_ionoBeta0 index, @b Field_ionoBeta0 type and @b field_ionoBeta0() access fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta0 field.
    ///     @li @b FieldIdx_ionoBeta1 index, @b Field_ionoBeta1 type and @b field_ionoBeta1() access fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta1 field.
    ///     @li @b FieldIdx_ionoBeta2 index, @b Field_ionoBeta2 type and @b field_ionoBeta2() access fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta2 field.
    ///     @li @b FieldIdx_ionoBeta3 index, @b Field_ionoBeta3 type and @b field_ionoBeta3() access fuction
    ///         for @ref MgaGpsIonoFields::IonoBeta3 field.
    ///     @li @b FieldIdx_reserved2 index, @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaGpsIonoFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        ionoAlpha0,
        ionoAlpha1,
        ionoAlpha2,
        ionoAlpha3,
        ionoBeta0,
        ionoBeta1,
        ionoBeta2,
        ionoBeta3,
        reserved2
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MgaGpsIonoCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
