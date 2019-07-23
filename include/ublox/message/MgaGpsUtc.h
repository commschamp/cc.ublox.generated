/// @file
/// @brief Contains definition of <b>"MGA-GPS-UTC"</b> message and its fields.

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

/// @brief Fields of @ref MgaGpsUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaGpsUtc
/// @headerfile "ublox/message/MgaGpsUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGpsUtcFields
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
    
    /// @brief Definition of <b>"utcA0"</b> field.
    struct UtcA0 : public
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
            return "utcA0";
        }
        
    };
    
    /// @brief Definition of <b>"utcA1"</b> field.
    struct UtcA1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcA1";
        }
        
    };
    
    /// @brief Definition of <b>"utcDtLS"</b> field.
    struct UtcDtLS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcDtLS";
        }
        
    };
    
    /// @brief Definition of <b>"utcTot"</b> field.
    struct UtcTot : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<4096, 1>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcTot";
        }
        
    };
    
    /// @brief Definition of <b>"utcWNt"</b> field.
    struct UtcWNt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcWNt";
        }
        
    };
    
    /// @brief Definition of <b>"utcWNlsf"</b> field.
    struct UtcWNlsf : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcWNlsf";
        }
        
    };
    
    /// @brief Definition of <b>"utcDn"</b> field.
    struct UtcDn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcDn";
        }
        
    };
    
    /// @brief Definition of <b>"utcDtLSF"</b> field.
    struct UtcDtLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcDtLSF";
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
        UtcA0,
        UtcA1,
        UtcDtLS,
        UtcTot,
        UtcWNt,
        UtcWNlsf,
        UtcDn,
        UtcDtLSF,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GPS-UTC"</b> message class.
/// @details
///     See @ref MgaGpsUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGpsUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGpsUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGpsUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
        comms::option::def::FieldsImpl<typename MgaGpsUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGpsUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGpsUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGps>,
            comms::option::def::FieldsImpl<typename MgaGpsUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGpsUtc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGpsUtcFields::Type field.
    ///     @li @b field_version() for @ref MgaGpsUtcFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaGpsUtcFields::Reserved1 field.
    ///     @li @b field_utcA0() for @ref MgaGpsUtcFields::UtcA0 field.
    ///     @li @b field_utcA1() for @ref MgaGpsUtcFields::UtcA1 field.
    ///     @li @b field_utcDtLS() for @ref MgaGpsUtcFields::UtcDtLS field.
    ///     @li @b field_utcTot() for @ref MgaGpsUtcFields::UtcTot field.
    ///     @li @b field_utcWNt() for @ref MgaGpsUtcFields::UtcWNt field.
    ///     @li @b field_utcWNlsf() for @ref MgaGpsUtcFields::UtcWNlsf field.
    ///     @li @b field_utcDn() for @ref MgaGpsUtcFields::UtcDn field.
    ///     @li @b field_utcDtLSF() for @ref MgaGpsUtcFields::UtcDtLSF field.
    ///     @li @b field_reserved2() for @ref MgaGpsUtcFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        utcA0,
        utcA1,
        utcDtLS,
        utcTot,
        utcWNt,
        utcWNlsf,
        utcDn,
        utcDtLSF,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-GPS-UTC";
    }
    
    
};

} // namespace message

} // namespace ublox


