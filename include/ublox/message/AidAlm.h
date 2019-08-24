/// @file
/// @brief Contains definition of <b>"AID-ALM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
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

/// @brief Fields of @ref AidAlm.
/// @tparam TOpt Extra options
/// @see @ref AidAlm
/// @headerfile "ublox/message/AidAlm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlmFields
{
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Dwrd optional.
    struct DwrdMembers
    {
        /// @brief Scope for all the member fields of ///     @ref List list.
        struct ListMembers
        {
            /// @brief Definition of <b>"element"</b> field.
            struct Element : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "element";
                }
                
            };
            
        };
        
        /// @brief Definition of <b>"dwrd"</b> field.
        struct List : public
            comms::field::ArrayList<
                ublox::field::FieldBase<>,
                typename ListMembers::Element,
                typename TOpt::message::AidAlmFields::DwrdMembers::List,
                comms::option::def::SequenceFixedSize<8U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "dwrd";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"dwrd"</b> field.
    struct Dwrd : public
        comms::field::Optional<
            typename DwrdMembers::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dwrd";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Svid,
        Week,
        Dwrd
    >;
};

/// @brief Definition of <b>"AID-ALM"</b> message class.
/// @details
///     See @ref AidAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidAlm,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlm>,
        comms::option::def::FieldsImpl<typename AidAlmFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidAlm,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlm>,
            comms::option::def::FieldsImpl<typename AidAlmFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_svid() for @ref AidAlmFields::Svid field.
    ///     @li @b field_week() for @ref AidAlmFields::Week field.
    ///     @li @b field_dwrd() for @ref AidAlmFields::Dwrd field.
    COMMS_MSG_FIELDS_ACCESS(
        svid,
        week,
        dwrd
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-ALM";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_dwrd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_dwrd();
        
        es = Base::template doReadFrom<FieldIdx_dwrd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_dwrd() || updated;
        return updated;
    }
    
    
private:
    bool refresh_dwrd()
    {
        auto mode = comms::field::OptionalMode::Missing;
        if (field_week().value() != 0U) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_dwrd().getMode() == mode) {
            return false;
        }
        
        field_dwrd().setMode(mode);
        return true;
        
    }
    
};

} // namespace message

} // namespace ublox


