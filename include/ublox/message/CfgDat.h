/// @file
/// @brief Contains definition of <b>"CFG-DAT"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgDatD.h"
#include "ublox/field/CfgDatDatumNum.h"
#include "ublox/field/CfgDatFlat.h"
#include "ublox/field/CfgDatMajA.h"
#include "ublox/field/CfgDatRot.h"
#include "ublox/field/CfgDatScale.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgDat.
/// @tparam TOpt Extra options
/// @see @ref CfgDat
/// @headerfile "ublox/message/CfgDat.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDatFields
{
    /// @brief Definition of <b>"datumNum"</b> field.
    struct DatumNum : public
        ublox::field::CfgDatDatumNum<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "datumNum";
        }
        
    };
    
    /// @brief Definition of <b>"datumName"</b> field.
    struct DatumName : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::CfgDatFields::DatumName,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "datumName";
        }
        
    };
    
    /// @brief Definition of <b>"majA"</b> field.
    struct MajA : public
        ublox::field::CfgDatMajA<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "majA";
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
            return "flat";
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
            return "dX";
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
            return "dY";
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
            return "dZ";
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
            return "rotX";
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
            return "rotY";
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
            return "rotZ";
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
            return "scale";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        DatumNum,
        DatumName,
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

/// @brief Definition of <b>"CFG-DAT"</b> message class.
/// @details
///     See @ref CfgDatFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDat.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDat : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgDat,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
        comms::option::def::FieldsImpl<typename CfgDatFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDat<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgDat,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDat>,
            comms::option::def::FieldsImpl<typename CfgDatFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDat<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_datumNum() for @ref CfgDatFields::DatumNum field.
    ///     @li @b field_datumName() for @ref CfgDatFields::DatumName field.
    ///     @li @b field_majA() for @ref CfgDatFields::MajA field.
    ///     @li @b field_flat() for @ref CfgDatFields::Flat field.
    ///     @li @b field_dX() for @ref CfgDatFields::DX field.
    ///     @li @b field_dY() for @ref CfgDatFields::DY field.
    ///     @li @b field_dZ() for @ref CfgDatFields::DZ field.
    ///     @li @b field_rotX() for @ref CfgDatFields::RotX field.
    ///     @li @b field_rotY() for @ref CfgDatFields::RotY field.
    ///     @li @b field_rotZ() for @ref CfgDatFields::RotZ field.
    ///     @li @b field_scale() for @ref CfgDatFields::Scale field.
    COMMS_MSG_FIELDS_ACCESS(
        datumNum,
        datumName,
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
    static_assert(MsgMinLen == 52U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 52U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-DAT";
    }
    
    
};

} // namespace message

} // namespace ublox


