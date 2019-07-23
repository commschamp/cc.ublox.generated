/// @file
/// @brief Contains definition of <b>"SEC-SIGN"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref SecSign.
/// @tparam TOpt Extra options
/// @see @ref SecSign
/// @headerfile "ublox/message/SecSign.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct SecSignFields
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
    
    /// @brief Definition of <b>"msgId"</b> field.
    struct MsgId : public
        ublox::field::MsgId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msgId";
        }
        
    };
    
    /// @brief Definition of <b>"checksum"</b> field.
    struct Checksum : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "checksum";
        }
        
    };
    
    /// @brief Definition of <b>"hash"</b> field.
    struct Hash : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::SecSignFields::Hash,
            comms::option::def::SequenceFixedSize<32U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "hash";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        MsgId,
        Checksum,
        Hash
    >;
};

/// @brief Definition of <b>"SEC-SIGN"</b> message class.
/// @details
///     See @ref SecSignFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/SecSign.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class SecSign : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::SecSign,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_SecSign>,
        comms::option::def::FieldsImpl<typename SecSignFields<TOpt>::All>,
        comms::option::def::MsgType<SecSign<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::SecSign,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_SecSign>,
            comms::option::def::FieldsImpl<typename SecSignFields<TOpt>::All>,
            comms::option::def::MsgType<SecSign<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref SecSignFields::Version field.
    ///     @li @b field_reserved1() for @ref SecSignFields::Reserved1 field.
    ///     @li @b field_msgId() for @ref SecSignFields::MsgId field.
    ///     @li @b field_checksum() for @ref SecSignFields::Checksum field.
    ///     @li @b field_hash() for @ref SecSignFields::Hash field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        msgId,
        checksum,
        hash
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "SEC-SIGN";
    }
    
    
};

} // namespace message

} // namespace ublox


