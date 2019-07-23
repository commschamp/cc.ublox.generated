/// @file
/// @brief Contains definition of <b>"MGA-GAL-TIMEOFFSET"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaGalTimeoffset.
/// @tparam TOpt Extra options
/// @see @ref MgaGalTimeoffset
/// @headerfile "ublox/message/MgaGalTimeoffset.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGalTimeoffsetFields
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
    
    /// @brief Definition of <b>"a0G"</b> field.
    struct A0G : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x800000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a0G";
        }
        
    };
    
    /// @brief Definition of <b>"a1G"</b> field.
    struct A1G : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 0x8000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a1G";
        }
        
    };
    
    /// @brief Definition of <b>"t0G"</b> field.
    struct T0G : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ScalingRatio<3600, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "t0G";
        }
        
    };
    
    /// @brief Definition of <b>"wn0G"</b> field.
    struct Wn0G : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wn0G";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        A0G,
        A1G,
        T0G,
        Wn0G,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GAL-TIMEOFFSET"</b> message class.
/// @details
///     See @ref MgaGalTimeoffsetFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGalTimeoffset.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGalTimeoffset : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGalTimeoffset,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
        comms::option::def::FieldsImpl<typename MgaGalTimeoffsetFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGalTimeoffset<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGalTimeoffset,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
            comms::option::def::FieldsImpl<typename MgaGalTimeoffsetFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGalTimeoffset<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGalTimeoffsetFields::Type field.
    ///     @li @b field_version() for @ref MgaGalTimeoffsetFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaGalTimeoffsetFields::Reserved1 field.
    ///     @li @b field_a0G() for @ref MgaGalTimeoffsetFields::A0G field.
    ///     @li @b field_a1G() for @ref MgaGalTimeoffsetFields::A1G field.
    ///     @li @b field_t0G() for @ref MgaGalTimeoffsetFields::T0G field.
    ///     @li @b field_wn0G() for @ref MgaGalTimeoffsetFields::Wn0G field.
    ///     @li @b field_reserved2() for @ref MgaGalTimeoffsetFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        a0G,
        a1G,
        t0G,
        wn0G,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GAL-TIMEOFFSET";
    }
    
    
};

} // namespace message

} // namespace ublox


