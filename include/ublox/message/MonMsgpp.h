/// @file
/// @brief Contains definition of <b>"MON-MSGPP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MonMsgppCount.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonMsgpp.
/// @tparam TOpt Extra options
/// @see @ref MonMsgpp
/// @headerfile "ublox/message/MonMsgpp.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonMsgppFields
{
    /// @brief Definition of <b>"msg1"</b> field.
    struct Msg1 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg1,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg1";
        }
        
    };
    
    /// @brief Definition of <b>"msg2"</b> field.
    struct Msg2 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg2,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg2";
        }
        
    };
    
    /// @brief Definition of <b>"msg3"</b> field.
    struct Msg3 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg3,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg3";
        }
        
    };
    
    /// @brief Definition of <b>"msg4"</b> field.
    struct Msg4 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg4,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg4";
        }
        
    };
    
    /// @brief Definition of <b>"msg5"</b> field.
    struct Msg5 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg5,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg5";
        }
        
    };
    
    /// @brief Definition of <b>"msg6"</b> field.
    struct Msg6 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MonMsgppCount<TOpt>,
            typename TOpt::message::MonMsgppFields::Msg6,
            comms::option::def::SequenceFixedSize<8U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "msg6";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Skipped list.
    struct SkippedMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"skipped"</b> field.
    struct Skipped : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename SkippedMembers::Element,
            typename TOpt::message::MonMsgppFields::Skipped,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "skipped";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Msg1,
        Msg2,
        Msg3,
        Msg4,
        Msg5,
        Msg6,
        Skipped
    >;
};

/// @brief Definition of <b>"MON-MSGPP"</b> message class.
/// @details
///     See @ref MonMsgppFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonMsgpp.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonMsgpp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonMsgpp,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonMsgpp>,
        comms::option::def::FieldsImpl<typename MonMsgppFields<TOpt>::All>,
        comms::option::def::MsgType<MonMsgpp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonMsgpp,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonMsgpp>,
            comms::option::def::FieldsImpl<typename MonMsgppFields<TOpt>::All>,
            comms::option::def::MsgType<MonMsgpp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_msg1() for @ref MonMsgppFields::Msg1 field.
    ///     @li @b field_msg2() for @ref MonMsgppFields::Msg2 field.
    ///     @li @b field_msg3() for @ref MonMsgppFields::Msg3 field.
    ///     @li @b field_msg4() for @ref MonMsgppFields::Msg4 field.
    ///     @li @b field_msg5() for @ref MonMsgppFields::Msg5 field.
    ///     @li @b field_msg6() for @ref MonMsgppFields::Msg6 field.
    ///     @li @b field_skipped() for @ref MonMsgppFields::Skipped field.
    COMMS_MSG_FIELDS_ACCESS(
        msg1,
        msg2,
        msg3,
        msg4,
        msg5,
        msg6,
        skipped
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 120U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 120U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-MSGPP";
    }
    
    
};

} // namespace message

} // namespace ublox


