/// @file
/// @brief Contains definition of <b>"MGA-BDS-POS_XYZ"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/EcefX.h"
#include "ublox/field/EcefY.h"
#include "ublox/field/EcefZ.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniPosXyz.
/// @tparam TOpt Extra options
/// @see @ref MgaIniPosXyz
/// @headerfile "ublox/message/MgaIniPosXyz.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniPosXyzFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"ecefX"</b> field.
    using EcefX =
        ublox::field::EcefX<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefY"</b> field.
    using EcefY =
        ublox::field::EcefY<
            TOpt
        >;
    
    /// @brief Definition of <b>"ecefZ"</b> field.
    using EcefZ =
        ublox::field::EcefZ<
            TOpt
        >;
    
    /// @brief Definition of <b>"posAcc"</b> field.
    struct PosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "posAcc";
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
/// @headerfile "ublox/message/MgaIniPosXyz.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniPosXyz : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniPosXyz,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
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
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniPosXyzFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniPosXyz<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaIniPosXyzFields::Type field.
    ///     @li @b field_version() for @ref MgaIniPosXyzFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaIniPosXyzFields::Reserved1 field.
    ///     @li @b field_ecefX() for @ref MgaIniPosXyzFields::EcefX field.
    ///     @li @b field_ecefY() for @ref MgaIniPosXyzFields::EcefY field.
    ///     @li @b field_ecefZ() for @ref MgaIniPosXyzFields::EcefZ field.
    ///     @li @b field_posAcc() for @ref MgaIniPosXyzFields::PosAcc field.
    COMMS_MSG_FIELDS_ACCESS(
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
        return "MGA-BDS-POS_XYZ";
    }
    
    
};

} // namespace message

} // namespace ublox


