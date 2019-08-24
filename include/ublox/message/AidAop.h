/// @file
/// @brief Contains definition of <b>"AID-AOP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidAop.
/// @tparam TOpt Extra options
/// @see @ref AidAop
/// @headerfile "ublox/message/AidAop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAopFields
{
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
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::AidAopFields::Data,
            comms::option::def::SequenceFixedSize<59U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Optionals optional.
    struct OptionalsMembers
    {
        /// @brief Scope for all the member fields of @ref OptionalsWrap bundle.
        struct OptionalsWrapMembers
        {
            /// @brief Definition of <b>"optional0"</b> field.
            struct Optional0 : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    typename TOpt::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional0,
                    comms::option::def::SequenceFixedSize<48U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "optional0";
                }
                
            };
            
            /// @brief Definition of <b>"optional1"</b> field.
            struct Optional1 : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    typename TOpt::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional1,
                    comms::option::def::SequenceFixedSize<48U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "optional1";
                }
                
            };
            
            /// @brief Definition of <b>"optional2"</b> field.
            struct Optional2 : public
                comms::field::ArrayList<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    typename TOpt::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional2,
                    comms::option::def::SequenceFixedSize<48U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "optional2";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Optional0,
                   Optional1,
                   Optional2
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class OptionalsWrap : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename OptionalsWrapMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename OptionalsWrapMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_optional0() - for OptionalsWrapMembers::Optional0 member field.
            ///     @li @b field_optional1() - for OptionalsWrapMembers::Optional1 member field.
            ///     @li @b field_optional2() - for OptionalsWrapMembers::Optional2 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                optional0,
                optional1,
                optional2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"optionals"</b> field.
    struct Optionals : public
        comms::field::Optional<
            typename OptionalsMembers::OptionalsWrap
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "optionals";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Svid,
        Data,
        Optionals
    >;
};

/// @brief Definition of <b>"AID-AOP"</b> message class.
/// @details
///     See @ref AidAopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAop : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAop>,
        comms::option::def::FieldsImpl<typename AidAopFields<TOpt>::All>,
        comms::option::def::MsgType<AidAop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAop>,
            comms::option::def::FieldsImpl<typename AidAopFields<TOpt>::All>,
            comms::option::def::MsgType<AidAop<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_svid() for @ref AidAopFields::Svid field.
    ///     @li @b field_data() for @ref AidAopFields::Data field.
    ///     @li @b field_optionals() for @ref AidAopFields::Optionals field.
    COMMS_MSG_FIELDS_ACCESS(
        svid,
        data,
        optionals
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 60U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 204U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-AOP";
    }
    
    
};

} // namespace message

} // namespace ublox


