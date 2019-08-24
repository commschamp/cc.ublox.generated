/// @file
/// @brief Contains definition of <b>"MON-VER"</b> message and its fields.

#pragma once

#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/String.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonVer.
/// @tparam TOpt Extra options
/// @see @ref MonVer
/// @headerfile "ublox/message/MonVer.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonVerFields
{
    /// @brief Definition of <b>"swVersion"</b> field.
    struct SwVersion : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::MonVerFields::SwVersion,
            comms::option::def::SequenceFixedSize<30U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "swVersion";
        }
        
    };
    
    /// @brief Definition of <b>"hwVersion"</b> field.
    struct HwVersion : public
        comms::field::String<
            ublox::field::FieldBase<>,
            typename TOpt::message::MonVerFields::HwVersion,
            comms::option::def::SequenceFixedSize<10U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "hwVersion";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Definition of <b>"extension"</b> field.
        struct Extension : public
            comms::field::String<
                ublox::field::FieldBase<>,
                typename TOpt::message::MonVerFields::ListMembers::Extension,
                comms::option::def::SequenceFixedSize<30U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "extension";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Extension,
            typename TOpt::message::MonVerFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        SwVersion,
        HwVersion,
        List
    >;
};

/// @brief Definition of <b>"MON-VER"</b> message class.
/// @details
///     See @ref MonVerFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonVer.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonVer : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonVer,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonVer>,
        comms::option::def::FieldsImpl<typename MonVerFields<TOpt>::All>,
        comms::option::def::MsgType<MonVer<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonVer,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonVer>,
            comms::option::def::FieldsImpl<typename MonVerFields<TOpt>::All>,
            comms::option::def::MsgType<MonVer<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_swVersion() for @ref MonVerFields::SwVersion field.
    ///     @li @b field_hwVersion() for @ref MonVerFields::HwVersion field.
    ///     @li @b field_list() for @ref MonVerFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        swVersion,
        hwVersion,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-VER";
    }
    
    
};

} // namespace message

} // namespace ublox


