/// @file
/// @brief Contains definition of <b>"MGA-DBD"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaDbd.
/// @tparam TOpt Extra options
/// @see @ref MgaDbd
/// @headerfile "ublox/message/MgaDbd.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaDbdFields
{
    /// @brief Scope for all the member fields of ///     @ref Reserved1 list.
    struct Reserved1Members
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            ublox::field::Res1<
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
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename Reserved1Members::Element,
            typename TOpt::message::MgaDbdFields::Reserved1,
            comms::option::def::SequenceFixedSize<12U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaDbdFields::Data
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Reserved1,
        Data
    >;
};

/// @brief Definition of <b>"MGA-DBD"</b> message class.
/// @details
///     See @ref MgaDbdFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaDbd.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaDbd : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaDbd>,
        comms::option::def::FieldsImpl<typename MgaDbdFields<TOpt>::All>,
        comms::option::def::MsgType<MgaDbd<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaDbd>,
            comms::option::def::FieldsImpl<typename MgaDbdFields<TOpt>::All>,
            comms::option::def::MsgType<MgaDbd<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_reserved1() for @ref MgaDbdFields::Reserved1 field.
    ///     @li @b field_data() for @ref MgaDbdFields::Data field.
    COMMS_MSG_FIELDS_ACCESS(
        reserved1,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-DBD";
    }
    
    
};

} // namespace message

} // namespace ublox


