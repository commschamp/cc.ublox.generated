// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"CFG-DAT (User)"</b> message and its fields.

#pragma once

#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/CfgDatD.h"
#include "cc_ublox/field/CfgDatFlat.h"
#include "cc_ublox/field/CfgDatMajA.h"
#include "cc_ublox/field/CfgDatRot.h"
#include "cc_ublox/field/CfgDatScale.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/CfgDatUserCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref CfgDatUser.
/// @tparam TOpt Extra options
/// @see @ref CfgDatUser
/// @headerfile cc_ublox/message/CfgDatUser.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct CfgDatUserFields
{
    /// @brief Definition of <b>"majA"</b> field.
    class MajA : public
        cc_ublox::field::CfgDatMajA<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatMajA<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::MajACommon::name();
        }
    };

    /// @brief Definition of <b>"flat"</b> field.
    class Flat : public
        cc_ublox::field::CfgDatFlat<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatFlat<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::FlatCommon::name();
        }
    };

    /// @brief Definition of <b>"dX"</b> field.
    class DX : public
        cc_ublox::field::CfgDatD<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatD<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::DXCommon::name();
        }
    };

    /// @brief Definition of <b>"dY"</b> field.
    class DY : public
        cc_ublox::field::CfgDatD<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatD<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::DYCommon::name();
        }
    };

    /// @brief Definition of <b>"dZ"</b> field.
    class DZ : public
        cc_ublox::field::CfgDatD<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatD<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::DZCommon::name();
        }
    };

    /// @brief Definition of <b>"rotX"</b> field.
    class RotX : public
        cc_ublox::field::CfgDatRot<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatRot<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::RotXCommon::name();
        }
    };

    /// @brief Definition of <b>"rotY"</b> field.
    class RotY : public
        cc_ublox::field::CfgDatRot<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatRot<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::RotYCommon::name();
        }
    };

    /// @brief Definition of <b>"rotZ"</b> field.
    class RotZ : public
        cc_ublox::field::CfgDatRot<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatRot<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::RotZCommon::name();
        }
    };

    /// @brief Definition of <b>"scale"</b> field.
    class Scale : public
        cc_ublox::field::CfgDatScale<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::CfgDatScale<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgDatUserFieldsCommon::ScaleCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        MajA,
        Flat,
        DX,
        DY,
        DZ,
        RotX,
        RotY,
        RotZ,
        Scale
    >;
};

/// @brief Definition of <b>"CFG-DAT (User)"</b> message class.
/// @details
///     See @ref CfgDatUserFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/CfgDatUser.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class CfgDatUser : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgDatUser,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgDat>,
        comms::option::def::FieldsImpl<typename CfgDatUserFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDatUser<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgDatUser,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgDat>,
            comms::option::def::FieldsImpl<typename CfgDatUserFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDatUser<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_majA index, @b Field_majA type and @b field_majA() access fuction
    ///         for @ref CfgDatUserFields::MajA field.
    ///     @li @b FieldIdx_flat index, @b Field_flat type and @b field_flat() access fuction
    ///         for @ref CfgDatUserFields::Flat field.
    ///     @li @b FieldIdx_dX index, @b Field_dX type and @b field_dX() access fuction
    ///         for @ref CfgDatUserFields::DX field.
    ///     @li @b FieldIdx_dY index, @b Field_dY type and @b field_dY() access fuction
    ///         for @ref CfgDatUserFields::DY field.
    ///     @li @b FieldIdx_dZ index, @b Field_dZ type and @b field_dZ() access fuction
    ///         for @ref CfgDatUserFields::DZ field.
    ///     @li @b FieldIdx_rotX index, @b Field_rotX type and @b field_rotX() access fuction
    ///         for @ref CfgDatUserFields::RotX field.
    ///     @li @b FieldIdx_rotY index, @b Field_rotY type and @b field_rotY() access fuction
    ///         for @ref CfgDatUserFields::RotY field.
    ///     @li @b FieldIdx_rotZ index, @b Field_rotZ type and @b field_rotZ() access fuction
    ///         for @ref CfgDatUserFields::RotZ field.
    ///     @li @b FieldIdx_scale index, @b Field_scale type and @b field_scale() access fuction
    ///         for @ref CfgDatUserFields::Scale field.
    COMMS_MSG_FIELDS_NAMES(
        majA,
        flat,
        dX,
        dY,
        dZ,
        rotX,
        rotY,
        rotZ,
        scale
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 44U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 44U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::CfgDatUserCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox