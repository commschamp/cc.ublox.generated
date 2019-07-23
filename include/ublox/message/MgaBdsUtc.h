/// @file
/// @brief Contains definition of <b>"MGA-BDS-UTC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaBdsUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsUtc
/// @headerfile "ublox/message/MgaBdsUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsUtcFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<5>,
            comms::option::def::ValidNumValue<5>
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
    
    /// @brief Definition of <b>"a0UTC"</b> field.
    struct A0UTC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a0UTC";
        }
        
    };
    
    /// @brief Definition of <b>"a1UTC"</b> field.
    struct A1UTC : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a1UTC";
        }
        
    };
    
    /// @brief Definition of <b>"dtLS"</b> field.
    struct DtLS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dtLS";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"wnRec"</b> field.
    struct WnRec : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wnRec";
        }
        
    };
    
    /// @brief Definition of <b>"wnLSF"</b> field.
    struct WnLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wnLSF";
        }
        
    };
    
    /// @brief Definition of <b>"dN"</b> field.
    struct DN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dN";
        }
        
    };
    
    /// @brief Definition of <b>"dtLSF"</b> field.
    struct DtLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dtLSF";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        A0UTC,
        A1UTC,
        DtLS,
        Reserved2,
        WnRec,
        WnLSF,
        DN,
        DtLSF,
        Reserved3
    >;
};

/// @brief Definition of <b>"MGA-BDS-UTC"</b> message class.
/// @details
///     See @ref MgaBdsUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsUtc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaBdsUtcFields::Type field.
    ///     @li @b field_version() for @ref MgaBdsUtcFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaBdsUtcFields::Reserved1 field.
    ///     @li @b field_a0UTC() for @ref MgaBdsUtcFields::A0UTC field.
    ///     @li @b field_a1UTC() for @ref MgaBdsUtcFields::A1UTC field.
    ///     @li @b field_dtLS() for @ref MgaBdsUtcFields::DtLS field.
    ///     @li @b field_reserved2() for @ref MgaBdsUtcFields::Reserved2 field.
    ///     @li @b field_wnRec() for @ref MgaBdsUtcFields::WnRec field.
    ///     @li @b field_wnLSF() for @ref MgaBdsUtcFields::WnLSF field.
    ///     @li @b field_dN() for @ref MgaBdsUtcFields::DN field.
    ///     @li @b field_dtLSF() for @ref MgaBdsUtcFields::DtLSF field.
    ///     @li @b field_reserved3() for @ref MgaBdsUtcFields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        a0UTC,
        a1UTC,
        dtLS,
        reserved2,
        wnRec,
        wnLSF,
        dN,
        dtLSF,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-UTC";
    }
    
    
};

} // namespace message

} // namespace ublox


