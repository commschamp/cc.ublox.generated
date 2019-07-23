/// @file
/// @brief Contains definition of <b>"MGA-GAL-UTC"</b> message and its fields.

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

/// @brief Fields of @ref MgaGalUtc.
/// @tparam TOpt Extra options
/// @see @ref MgaGalUtc
/// @headerfile "ublox/message/MgaGalUtc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaGalUtcFields
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
    
    /// @brief Definition of <b>"a0"</b> field.
    struct A0 : public
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
            return "a0";
        }
        
    };
    
    /// @brief Definition of <b>"a1"</b> field.
    struct A1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 0x4000000000000LL>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "a1";
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
    
    /// @brief Definition of <b>"tot"</b> field.
    struct Tot : public
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
            return "tot";
        }
        
    };
    
    /// @brief Definition of <b>"wnt"</b> field.
    struct Wnt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "wnt";
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
    
    /// @brief Definition of <b>"dTLSF"</b> field.
    struct DTLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dTLSF";
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
        A0,
        A1,
        DtLS,
        Tot,
        Wnt,
        WnLSF,
        DN,
        DTLSF,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GAL-UTC"</b> message class.
/// @details
///     See @ref MgaGalUtcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaGalUtc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaGalUtc : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGalUtc,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
        comms::option::def::FieldsImpl<typename MgaGalUtcFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGalUtc<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGalUtc,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaGal>,
            comms::option::def::FieldsImpl<typename MgaGalUtcFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGalUtc<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaGalUtcFields::Type field.
    ///     @li @b field_version() for @ref MgaGalUtcFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaGalUtcFields::Reserved1 field.
    ///     @li @b field_a0() for @ref MgaGalUtcFields::A0 field.
    ///     @li @b field_a1() for @ref MgaGalUtcFields::A1 field.
    ///     @li @b field_dtLS() for @ref MgaGalUtcFields::DtLS field.
    ///     @li @b field_tot() for @ref MgaGalUtcFields::Tot field.
    ///     @li @b field_wnt() for @ref MgaGalUtcFields::Wnt field.
    ///     @li @b field_wnLSF() for @ref MgaGalUtcFields::WnLSF field.
    ///     @li @b field_dN() for @ref MgaGalUtcFields::DN field.
    ///     @li @b field_dTLSF() for @ref MgaGalUtcFields::DTLSF field.
    ///     @li @b field_reserved2() for @ref MgaGalUtcFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        a0,
        a1,
        dtLS,
        tot,
        wnt,
        wnLSF,
        dN,
        dTLSF,
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
        return "MGA-GAL-UTC";
    }
    
    
};

} // namespace message

} // namespace ublox


