// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"CFG-DAT (User)"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgDatD.h"
#include "ublox/field/CfgDatFlat.h"
#include "ublox/field/CfgDatMajA.h"
#include "ublox/field/CfgDatRot.h"
#include "ublox/field/CfgDatScale.h"
#include "ublox/field/FieldBase.h"
#include "ublox/message/CfgDatUserCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgDatUser.
/// @tparam TOpt Extra options
/// @see @ref CfgDatUser
/// @headerfile "ublox/message/CfgDatUser.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDatUserFields
{
    /// @brief Definition of <b>"majA"</b> field.
    struct MajA : public
        ublox::field::CfgDatMajA<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::MajACommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"flat"</b> field.
    struct Flat : public
        ublox::field::CfgDatFlat<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::FlatCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dX"</b> field.
    struct DX : public
        ublox::field::CfgDatD<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::DXCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dY"</b> field.
    struct DY : public
        ublox::field::CfgDatD<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::DYCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"dZ"</b> field.
    struct DZ : public
        ublox::field::CfgDatD<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::DZCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"rotX"</b> field.
    struct RotX : public
        ublox::field::CfgDatRot<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::RotXCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"rotY"</b> field.
    struct RotY : public
        ublox::field::CfgDatRot<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::RotYCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"rotZ"</b> field.
    struct RotZ : public
        ublox::field::CfgDatRot<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::RotZCommon::name();
        }
        
    };
    
    /// @brief Definition of <b>"scale"</b> field.
    struct Scale : public
        ublox::field::CfgDatScale<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::CfgDatUserFieldsCommon::ScaleCommon::name();
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
/// @headerfile "ublox/message/CfgDatUser.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDatUser : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgDatUser,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
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
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
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
    ///     The generated types and functions are:
    ///     @li @b Field_majA type and @b field_majA() access fuction
    ///         for @ref CfgDatUserFields::MajA field.
    ///     @li @b Field_flat type and @b field_flat() access fuction
    ///         for @ref CfgDatUserFields::Flat field.
    ///     @li @b Field_dX type and @b field_dX() access fuction
    ///         for @ref CfgDatUserFields::DX field.
    ///     @li @b Field_dY type and @b field_dY() access fuction
    ///         for @ref CfgDatUserFields::DY field.
    ///     @li @b Field_dZ type and @b field_dZ() access fuction
    ///         for @ref CfgDatUserFields::DZ field.
    ///     @li @b Field_rotX type and @b field_rotX() access fuction
    ///         for @ref CfgDatUserFields::RotX field.
    ///     @li @b Field_rotY type and @b field_rotY() access fuction
    ///         for @ref CfgDatUserFields::RotY field.
    ///     @li @b Field_rotZ type and @b field_rotZ() access fuction
    ///         for @ref CfgDatUserFields::RotZ field.
    ///     @li @b Field_scale type and @b field_scale() access fuction
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
        return ublox::message::CfgDatUserCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


