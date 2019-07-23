/// @file
/// @brief Contains definition of <b>"SEC-UNIQID"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref SecUniqid.
/// @tparam TOpt Extra options
/// @see @ref SecUniqid
/// @headerfile "ublox/message/SecUniqid.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct SecUniqidFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
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
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"uniqueId"</b> field.
    struct UniqueId : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::SecUniqidFields::UniqueId,
            comms::option::def::SequenceFixedSize<5U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "uniqueId";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        UniqueId
    >;
};

/// @brief Definition of <b>"SEC-UNIQID"</b> message class.
/// @details
///     See @ref SecUniqidFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/SecUniqid.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class SecUniqid : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::SecUniqid,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_SecUniqid>,
        comms::option::def::FieldsImpl<typename SecUniqidFields<TOpt>::All>,
        comms::option::def::MsgType<SecUniqid<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::SecUniqid,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_SecUniqid>,
            comms::option::def::FieldsImpl<typename SecUniqidFields<TOpt>::All>,
            comms::option::def::MsgType<SecUniqid<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref SecUniqidFields::Version field.
    ///     @li @b field_reserved1() for @ref SecUniqidFields::Reserved1 field.
    ///     @li @b field_uniqueId() for @ref SecUniqidFields::UniqueId field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        uniqueId
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 9U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 9U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SEC-UNIQID";
    }
    
    
};

} // namespace message

} // namespace ublox


