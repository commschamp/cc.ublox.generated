/// @file
/// @brief Contains definition of <b>"MGA-BDS-HEALTH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaBdsHealth.
/// @tparam TOpt Extra options
/// @see @ref MgaBdsHealth
/// @headerfile "ublox/message/MgaBdsHealth.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaBdsHealthFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<4>,
            comms::option::def::ValidNumValue<4>
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
    
    /// @brief Scope for all the member fields of ///     @ref HealthCode list.
    struct HealthCodeMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"healthCode"</b> field.
    struct HealthCode : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename HealthCodeMembers::Element,
            typename TOpt::message::MgaBdsHealthFields::HealthCode,
            comms::option::def::SequenceFixedSize<30U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "healthCode";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
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
        HealthCode,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-HEALTH"</b> message class.
/// @details
///     See @ref MgaBdsHealthFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaBdsHealth.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaBdsHealth : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaBdsHealth,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
        comms::option::def::FieldsImpl<typename MgaBdsHealthFields<TOpt>::All>,
        comms::option::def::MsgType<MgaBdsHealth<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaBdsHealth,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaBds>,
            comms::option::def::FieldsImpl<typename MgaBdsHealthFields<TOpt>::All>,
            comms::option::def::MsgType<MgaBdsHealth<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaBdsHealthFields::Type field.
    ///     @li @b field_version() for @ref MgaBdsHealthFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaBdsHealthFields::Reserved1 field.
    ///     @li @b field_healthCode() for @ref MgaBdsHealthFields::HealthCode field.
    ///     @li @b field_reserved2() for @ref MgaBdsHealthFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        healthCode,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 68U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 68U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-HEALTH";
    }
    
    
};

} // namespace message

} // namespace ublox


