/// @file
/// @brief Contains definition of <b>"NAV-GEOFENCE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GeofenceState.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavGeofenceFields.
/// @see @ref NavGeofenceFields
/// @headerfile "ublox/message/NavGeofence.h"
struct NavGeofenceFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavGeofenceFields::Status field.
    enum class StatusVal : std::uint8_t
    {
        NotAvailable = 0, ///< value <b>Not available</b>.
        Active = 1, ///< value @b Active
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavGeofenceFields::Status field.
    struct StatusCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(StatusVal val)
        {
            static const char* Map[] = {
                "Not available",
                "Active"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref NavGeofence.
/// @tparam TOpt Extra options
/// @see @ref NavGeofence
/// @headerfile "ublox/message/NavGeofence.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavGeofenceFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
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
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavGeofenceFields::Status field.
    using StatusVal = ublox::message::NavGeofenceFieldsCommon::StatusVal;
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::NavGeofenceFields::StatusVal
    struct Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            StatusVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "status";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(StatusVal val)
        {
            return ublox::message::NavGeofenceFieldsCommon::StatusCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"numFences"</b> field.
    struct NumFences : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numFences";
        }
        
    };
    
    /// @brief Definition of <b>"combState"</b> field.
    struct CombState : public
        ublox::field::GeofenceState<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "combState";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"state"</b> field.
            struct State : public
                ublox::field::GeofenceState<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "state";
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
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   State,
                   Reserved1
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
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_state() - for ElementMembers::State member field.
            ///     @li @b field_reserved1() - for ElementMembers::Reserved1 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                state,
                reserved1
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavGeofenceFields::List,
            comms::option::def::SequenceSizeForcingEnabled
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
        Itow,
        Version,
        Status,
        NumFences,
        CombState,
        List
    >;
};

/// @brief Definition of <b>"NAV-GEOFENCE"</b> message class.
/// @details
///     See @ref NavGeofenceFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavGeofence.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavGeofence : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavGeofence,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavGeofence>,
        comms::option::def::FieldsImpl<typename NavGeofenceFields<TOpt>::All>,
        comms::option::def::MsgType<NavGeofence<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavGeofence,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavGeofence>,
            comms::option::def::FieldsImpl<typename NavGeofenceFields<TOpt>::All>,
            comms::option::def::MsgType<NavGeofence<TMsgBase, TOpt> >,
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
    ///     @li @b field_itow() for @ref NavGeofenceFields::Itow field.
    ///     @li @b field_version() for @ref NavGeofenceFields::Version field.
    ///     @li @b field_status() for @ref NavGeofenceFields::Status field.
    ///     @li @b field_numFences() for @ref NavGeofenceFields::NumFences field.
    ///     @li @b field_combState() for @ref NavGeofenceFields::CombState field.
    ///     @li @b field_list() for @ref NavGeofenceFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        version,
        status,
        numFences,
        combState,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-GEOFENCE";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_list().forceReadElemCount(
            static_cast<std::size_t>(field_numFences().value()));
        
        es = Base::template doReadFrom<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_list() || updated;
        return updated;
    }
    
    
private:
    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_numFences().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numFences().value())>::type;
                field_numFences().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


