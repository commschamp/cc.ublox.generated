/// @file
/// @brief Contains definition of <b>"MGA-GLO-TIMEOFFSET"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGloTimeoffset.
/// @tparam TOpt Extra options
/// @see @ref MgaGloTimeoffset
/// @headerfile "ublox/message/MgaGloTimeoffset.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGloTimeoffsetFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
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
    
    /// @brief Definition of <b>"N"</b> field.
    struct N : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "N";
        }
        
    };
    
    /// @brief Definition of <b>"tauC"</b> field.
    struct TauC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 134217728L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tauC";
        }
        
    };
    
    /// @brief Definition of <b>"tauGps"</b> field.
    struct TauGps : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x80000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tauGps";
        }
        
    };
    
    /// @brief Definition of <b>"B1"</b> field.
    struct B1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 1024>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "B1";
        }
        
    };
    
    /// @brief Definition of <b>"B2"</b> field.
    struct B2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "B2";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        N,
        TauC,
        TauGps,
        B1,
        B2,
        Reserved1
    >;
};

/// @brief Definition of <b>"MGA-GLO-TIMEOFFSET"</b> message class.
/// @details
///     See @ref MgaGloTimeoffsetFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGloTimeoffset.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGloTimeoffset : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloTimeoffset,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloTimeoffsetFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloTimeoffset<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloTimeoffset,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloTimeoffsetFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloTimeoffset<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGloTimeoffsetFields::Type field.
    ///     @li @b field_version() for @ref MgaGloTimeoffsetFields::Version field.
    ///     @li @b field_n() for @ref MgaGloTimeoffsetFields::N field.
    ///     @li @b field_tauC() for @ref MgaGloTimeoffsetFields::TauC field.
    ///     @li @b field_tauGps() for @ref MgaGloTimeoffsetFields::TauGps field.
    ///     @li @b field_b1() for @ref MgaGloTimeoffsetFields::B1 field.
    ///     @li @b field_b2() for @ref MgaGloTimeoffsetFields::B2 field.
    ///     @li @b field_reserved1() for @ref MgaGloTimeoffsetFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        n,
        tauC,
        tauGps,
        b1,
        b2,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GLO-TIMEOFFSET";
    }
    
    
};

} // namespace message

} // namespace ublox


