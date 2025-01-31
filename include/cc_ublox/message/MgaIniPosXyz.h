// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"MGA-BDS-POS_XYZ"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/EcefX.h"
#include "cc_ublox/field/EcefY.h"
#include "cc_ublox/field/EcefZ.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res2.h"
#include "cc_ublox/message/MgaIniPosXyzCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniPosXyz.
/// @tparam TOpt Extra options
/// @see @ref MgaIniPosXyz
/// @headerfile cc_ublox/message/MgaIniPosXyz.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MgaIniPosXyzFields
{
    /// @brief Definition of <b>"type"</b> field.
    class Type : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::FixedValue,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::FixedValue,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::TypeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::TypeCommon::name();
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
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::VersionCommon::name();
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
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        cc_ublox::field::EcefX<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        cc_ublox::field::EcefY<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        cc_ublox::field::EcefZ<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"posAcc"</b> field.
    class PosAcc : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::HasName,
            comms::option::def::UnitsCentimeters
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::HasName,
                comms::option::def::UnitsCentimeters
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::PosAccCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaIniPosXyzFieldsCommon::PosAccCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        EcefX,
        EcefY,
        EcefZ,
        PosAcc
    >;
};

/// @brief Definition of <b>"MGA-BDS-POS_XYZ"</b> message class.
/// @details
///     See @ref MgaIniPosXyzFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MgaIniPosXyz.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MgaIniPosXyz : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniPosXyz,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniPosXyzFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniPosXyz<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniPosXyz,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniPosXyzFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniPosXyz<TMsgBase, TOpt> >,
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
    ///         for @ref MgaIniPosXyzFields::Type field.
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaIniPosXyzFields::Version field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaIniPosXyzFields::Reserved1 field.
    ///     @li @b FieldIdx_ecefX index, @b Field_ecefX type and @b field_ecefX() access fuction
    ///         for @ref MgaIniPosXyzFields::EcefX field.
    ///     @li @b FieldIdx_ecefY index, @b Field_ecefY type and @b field_ecefY() access fuction
    ///         for @ref MgaIniPosXyzFields::EcefY field.
    ///     @li @b FieldIdx_ecefZ index, @b Field_ecefZ type and @b field_ecefZ() access fuction
    ///         for @ref MgaIniPosXyzFields::EcefZ field.
    ///     @li @b FieldIdx_posAcc index, @b Field_posAcc type and @b field_posAcc() access fuction
    ///         for @ref MgaIniPosXyzFields::PosAcc field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        reserved1,
        ecefX,
        ecefY,
        ecefZ,
        posAcc
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MgaIniPosXyzCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
