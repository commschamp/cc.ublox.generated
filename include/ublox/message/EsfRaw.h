// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains definition of <b>"ESF-RAW"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/message/EsfRawCommon.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref EsfRaw.
/// @tparam TOpt Extra options
/// @see @ref EsfRaw
/// @headerfile "ublox/message/EsfRaw.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfRawFields
{
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfRawFieldsCommon::Reserved1Common::name();
        }
        
    };
    
    /// @brief Scope for all the member fields of
    ///     @ref Data list.
    struct DataMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"dataField"</b> field.
            struct DataField : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::FixedLength<3U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfRawFieldsCommon::DataMembersCommon::ElementMembersCommon::DataFieldCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"dataType"</b> field.
            struct DataType : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfRawFieldsCommon::DataMembersCommon::ElementMembersCommon::DataTypeCommon::name();
                }
                
            };
            
            /// @brief Definition of <b>"sTtag"</b> field.
            struct STtag : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return ublox::message::EsfRawFieldsCommon::DataMembersCommon::ElementMembersCommon::STtagCommon::name();
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   DataField,
                   DataType,
                   STtag
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access types and functions functions are:
            ///     @li @b Field_dataFieldtype and @b field_dataField() access function -
            ///         for ElementMembers::DataField member field.
            ///     @li @b Field_dataTypetype and @b field_dataType() access function -
            ///         for ElementMembers::DataType member field.
            ///     @li @b Field_sTtagtype and @b field_sTtag() access function -
            ///         for ElementMembers::STtag member field.
            COMMS_FIELD_MEMBERS_NAMES(
                dataField,
                dataType,
                sTtag
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return ublox::message::EsfRawFieldsCommon::DataMembersCommon::ElementCommon::name();
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename DataMembers::Element,
            typename TOpt::message::EsfRawFields::Data
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return ublox::message::EsfRawFieldsCommon::DataCommon::name();
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Reserved1,
        Data
    >;
};

/// @brief Definition of <b>"ESF-RAW"</b> message class.
/// @details
///     See @ref EsfRawFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfRaw.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfRaw : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfRaw,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfRaw>,
        comms::option::def::FieldsImpl<typename EsfRawFields<TOpt>::All>,
        comms::option::def::MsgType<EsfRaw<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::EsfRaw,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfRaw>,
            comms::option::def::FieldsImpl<typename EsfRawFields<TOpt>::All>,
            comms::option::def::MsgType<EsfRaw<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref EsfRawFields::Reserved1 field.
    ///     @li @b Field_data type and @b field_data() access fuction
    ///         for @ref EsfRawFields::Data field.
    COMMS_MSG_FIELDS_NAMES(
        reserved1,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return ublox::message::EsfRawCommon::name();
    }
    
    
};

} // namespace message

} // namespace ublox


