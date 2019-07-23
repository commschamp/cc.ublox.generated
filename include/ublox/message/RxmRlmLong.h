/// @file
/// @brief Contains definition of <b>"RXM-RLM (Long)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmRlmLong.
/// @tparam TOpt Extra options
/// @see @ref RxmRlmLong
/// @headerfile "ublox/message/RxmRlmLong.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRlmLongFields
{
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
    
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
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
    
    /// @brief Definition of <b>"beacon"</b> field.
    struct Beacon : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmLongFields::Beacon,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "beacon";
        }
        
    };
    
    /// @brief Definition of <b>"message"</b> field.
    struct Message : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "message";
        }
        
    };
    
    /// @brief Definition of <b>"params"</b> field.
    struct Params : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::RxmRlmLongFields::Params,
            comms::option::def::SequenceFixedSize<12U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "params";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res3<
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
        Version,
        Type,
        Svid,
        Reserved1,
        Beacon,
        Message,
        Params,
        Reserved2
    >;
};

/// @brief Definition of <b>"RXM-RLM (Long)"</b> message class.
/// @details
///     See @ref RxmRlmLongFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRlmLong.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRlmLong : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRlmLong,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
        comms::option::def::FieldsImpl<typename RxmRlmLongFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRlmLong<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRlmLong,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRlm>,
            comms::option::def::FieldsImpl<typename RxmRlmLongFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRlmLong<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref RxmRlmLongFields::Version field.
    ///     @li @b field_type() for @ref RxmRlmLongFields::Type field.
    ///     @li @b field_svid() for @ref RxmRlmLongFields::Svid field.
    ///     @li @b field_reserved1() for @ref RxmRlmLongFields::Reserved1 field.
    ///     @li @b field_beacon() for @ref RxmRlmLongFields::Beacon field.
    ///     @li @b field_message() for @ref RxmRlmLongFields::Message field.
    ///     @li @b field_params() for @ref RxmRlmLongFields::Params field.
    ///     @li @b field_reserved2() for @ref RxmRlmLongFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        type,
        svid,
        reserved1,
        beacon,
        message,
        params,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-RLM (Long)";
    }
    
    
};

} // namespace message

} // namespace ublox


