/// @file
/// @brief Contains definition of <b>"NAV-SBAS"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/SbasService.h"
#include "ublox/field/SbasSys.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavSbasFields.
/// @see @ref NavSbasFields
/// @headerfile "ublox/message/NavSbas.h"
struct NavSbasFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavSbasFields::Mode field.
    enum class ModeVal : std::uint8_t
    {
        Disabled = 0, ///< value @b Disabled
        Integrity = 1, ///< value <b>Enabled Integrity</b>.
        Testmode = 2, ///< value <b>Enabled Testmode</b>.
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 2, ///< Last defined value.
        ValuesLimit = 3, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::NavSbasFields::Mode field.
    struct ModeCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(ModeVal val)
        {
            static const char* Map[] = {
                "Disabled",
                "Enabled Integrity",
                "Enabled Testmode"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref NavSbas.
/// @tparam TOpt Extra options
/// @see @ref NavSbas
/// @headerfile "ublox/message/NavSbas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSbasFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"geo"</b> field.
    struct Geo : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "geo";
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::NavSbasFields::Mode field.
    using ModeVal = ublox::message::NavSbasFieldsCommon::ModeVal;
    
    /// @brief Definition of <b>"mode"</b> field.
    /// @see @ref ublox::message::NavSbasFields::ModeVal
    struct Mode : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            ModeVal,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "mode";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ModeVal val)
        {
            return ublox::message::NavSbasFieldsCommon::ModeCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"sys"</b> field.
    struct Sys : public
        ublox::field::SbasSys<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "sys";
        }
        
    };
    
    /// @brief Definition of <b>"service"</b> field.
    struct Service : public
        ublox::field::SbasService<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "service";
        }
        
    };
    
    /// @brief Definition of <b>"cnt"</b> field.
    struct Cnt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cnt";
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
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
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
            
            /// @brief Definition of <b>"flags"</b> field.
            struct Flags : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            /// @brief Definition of <b>"udre"</b> field.
            struct Udre : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "udre";
                }
                
            };
            
            /// @brief Definition of <b>"svSys"</b> field.
            struct SvSys : public
                ublox::field::SbasSys<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "svSys";
                }
                
            };
            
            /// @brief Definition of <b>"svService"</b> field.
            struct SvService : public
                ublox::field::SbasService<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "svService";
                }
                
            };
            
            /// @brief Definition of <b>"reserved2"</b> field.
            struct Reserved2 : public
                ublox::field::Res1<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved2";
                }
                
            };
            
            /// @brief Definition of <b>"prc"</b> field.
            struct Prc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prc";
                }
                
            };
            
            /// @brief Definition of <b>"reserved3"</b> field.
            struct Reserved3 : public
                ublox::field::Res2<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief Definition of <b>"ic"</b> field.
            struct Ic : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ic";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   Flags,
                   Udre,
                   SvSys,
                   SvService,
                   Reserved2,
                   Prc,
                   Reserved3,
                   Ic
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
            ///     @li @b field_svid() - for ElementMembers::Svid member field.
            ///     @li @b field_flags() - for ElementMembers::Flags member field.
            ///     @li @b field_udre() - for ElementMembers::Udre member field.
            ///     @li @b field_svSys() - for ElementMembers::SvSys member field.
            ///     @li @b field_svService() - for ElementMembers::SvService member field.
            ///     @li @b field_reserved2() - for ElementMembers::Reserved2 member field.
            ///     @li @b field_prc() - for ElementMembers::Prc member field.
            ///     @li @b field_reserved3() - for ElementMembers::Reserved3 member field.
            ///     @li @b field_ic() - for ElementMembers::Ic member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                svid,
                flags,
                udre,
                svSys,
                svService,
                reserved2,
                prc,
                reserved3,
                ic
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
            typename TOpt::message::NavSbasFields::List,
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
        Geo,
        Mode,
        Sys,
        Service,
        Cnt,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-SBAS"</b> message class.
/// @details
///     See @ref NavSbasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSbas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSbas : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSbas,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSbas>,
        comms::option::def::FieldsImpl<typename NavSbasFields<TOpt>::All>,
        comms::option::def::MsgType<NavSbas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSbas,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSbas>,
            comms::option::def::FieldsImpl<typename NavSbasFields<TOpt>::All>,
            comms::option::def::MsgType<NavSbas<TMsgBase, TOpt> >,
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
    ///     @li @b field_itow() for @ref NavSbasFields::Itow field.
    ///     @li @b field_geo() for @ref NavSbasFields::Geo field.
    ///     @li @b field_mode() for @ref NavSbasFields::Mode field.
    ///     @li @b field_sys() for @ref NavSbasFields::Sys field.
    ///     @li @b field_service() for @ref NavSbasFields::Service field.
    ///     @li @b field_cnt() for @ref NavSbasFields::Cnt field.
    ///     @li @b field_reserved1() for @ref NavSbasFields::Reserved1 field.
    ///     @li @b field_list() for @ref NavSbasFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        geo,
        mode,
        sys,
        service,
        cnt,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-SBAS";
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
            static_cast<std::size_t>(field_cnt().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_cnt().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_cnt().value())>::type;
                field_cnt().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


