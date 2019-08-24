/// @file
/// @brief Contains definition of <b>"CFG-PM2"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgPm2Flags.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgPm2.
/// @tparam TOpt Extra options
/// @see @ref CfgPm2
/// @headerfile "ublox/message/CfgPm2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPm2Fields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
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
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"maxStartupStateDur"</b> field.
    struct MaxStartupStateDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxStartupStateDur";
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
    
    /// @brief Definition of <b>"flags"</b> field.
    using Flags =
        ublox::field::CfgPm2Flags<
            TOpt
        >;
    
    /// @brief Definition of <b>"updatePeriod"</b> field.
    struct UpdatePeriod : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "updatePeriod";
        }
        
    };
    
    /// @brief Definition of <b>"searchPeriod"</b> field.
    struct SearchPeriod : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "searchPeriod";
        }
        
    };
    
    /// @brief Definition of <b>"gridOffset"</b> field.
    struct GridOffset : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gridOffset";
        }
        
    };
    
    /// @brief Definition of <b>"onTime"</b> field.
    struct OnTime : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "onTime";
        }
        
    };
    
    /// @brief Definition of <b>"minAcqTime"</b> field.
    struct MinAcqTime : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "minAcqTime";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Reserved3 list.
    struct Reserved3Members
    {
        /// @brief Definition of <b>""</b> field.
        struct Reserved3 : public
            ublox::field::Res4<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename Reserved3Members::Reserved3,
            typename TOpt::message::CfgPm2Fields::Reserved3,
            comms::option::def::SequenceFixedSize<5U>
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
        Version,
        Reserved1,
        MaxStartupStateDur,
        Reserved2,
        Flags,
        UpdatePeriod,
        SearchPeriod,
        GridOffset,
        OnTime,
        MinAcqTime,
        Reserved3
    >;
};

/// @brief Definition of <b>"CFG-PM2"</b> message class.
/// @details
///     See @ref CfgPm2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgPm2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgPm2 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPm2>,
        comms::option::def::FieldsImpl<typename CfgPm2Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgPm2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgPm2>,
            comms::option::def::FieldsImpl<typename CfgPm2Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgPm2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref CfgPm2Fields::Version field.
    ///     @li @b field_reserved1() for @ref CfgPm2Fields::Reserved1 field.
    ///     @li @b field_maxStartupStateDur() for @ref CfgPm2Fields::MaxStartupStateDur field.
    ///     @li @b field_reserved2() for @ref CfgPm2Fields::Reserved2 field.
    ///     @li @b field_flags() for @ref CfgPm2Fields::Flags field.
    ///     @li @b field_updatePeriod() for @ref CfgPm2Fields::UpdatePeriod field.
    ///     @li @b field_searchPeriod() for @ref CfgPm2Fields::SearchPeriod field.
    ///     @li @b field_gridOffset() for @ref CfgPm2Fields::GridOffset field.
    ///     @li @b field_onTime() for @ref CfgPm2Fields::OnTime field.
    ///     @li @b field_minAcqTime() for @ref CfgPm2Fields::MinAcqTime field.
    ///     @li @b field_reserved3() for @ref CfgPm2Fields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        maxStartupStateDur,
        reserved2,
        flags,
        updatePeriod,
        searchPeriod,
        gridOffset,
        onTime,
        minAcqTime,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 44U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 44U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-PM2";
    }
    
    
};

} // namespace message

} // namespace ublox


