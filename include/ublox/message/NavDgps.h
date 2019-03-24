/// @file
/// @brief Contains definition of <b>"NAV-DGPS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref NavDgps.
/// @tparam TOpt Extra options
/// @see @ref NavDgps
/// @headerfile "ublox/message/NavDgps.h"
template <typename TOpt = ublox::DefaultOptions>
struct NavDgpsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
           TOpt
       >;
    
    /// @brief Definition of <b>"age"</b> field.
    struct Age : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "age";
        }
        
    };
    
    /// @brief Definition of <b>"baseId"</b> field.
    struct BaseId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "baseId";
        }
        
    };
    
    /// @brief Definition of <b>"baseHealth"</b> field.
    struct BaseHealth : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "baseHealth";
        }
        
    };
    
    /// @brief Definition of <b>"numCh"</b> field.
    struct NumCh : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numCh";
        }
        
    };
    
    /// @brief Values enumerator for @ref ublox::message::NavDgpsFields::Status field.
    enum class StatusVal : std::uint8_t
    {
        None = 0, ///< value @b None
        PR_PRR = 1, ///< value <b>PR + PRR correction</b>.
        
    };
    
    /// @brief Definition of <b>"status"</b> field.
    /// @see @ref ublox::message::NavDgpsFields::StatusVal
    struct Status : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            StatusVal,
            comms::option::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "status";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
           TOpt
       >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bitfield.
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
            
            /// @brief Scope for all the member fields of @ref Flags bitfield.
            struct FlagsMembers
            {
                /// @brief Definition of <b>"channel"</b> field.
                struct Channel : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::FixedBitLength<4U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "channel";
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::FixedBitLength<4U>,
                        comms::option::BitmaskReservedBits<0xEU, 0x0U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::FixedBitLength<4U>,
                            comms::option::BitmaskReservedBits<0xEU, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_dgpsUsed, @b getBitValue_dgpsUsed() and @b setBitValue_dgpsUsed().
                    COMMS_BITMASK_BITS_SEQ(
                        dgpsUsed
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Channel,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename FlagsMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename FlagsMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_channel() - for FlagsMembers::Channel member field.
                ///     @li @b field_bits() - for FlagsMembers::Bits member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    channel,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "flags";
                }
                
            };
            
            /// @brief Definition of <b>"ageC"</b> field.
            struct AgeC : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ageC";
                }
                
            };
            
            /// @brief Definition of <b>"prc"</b> field.
            struct Prc : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prc";
                }
                
            };
            
            /// @brief Definition of <b>"prrc"</b> field.
            struct Prrc : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::UnitsMetersPerSecond
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prrc";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   Flags,
                   AgeC,
                   Prc,
                   Prrc
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
            ///     @li @b field_ageC() - for ElementMembers::AgeC member field.
            ///     @li @b field_prc() - for ElementMembers::Prc member field.
            ///     @li @b field_prrc() - for ElementMembers::Prrc member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                svid,
                flags,
                ageC,
                prc,
                prrc
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
            typename TOpt::message::NavDgpsFields::List,
            comms::option::SequenceSizeForcingEnabled
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
        Age,
        BaseId,
        BaseHealth,
        NumCh,
        Status,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-DGPS"</b> message class.
/// @details
///     See @ref NavDgpsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavDgps.h"
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class NavDgps : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavDgps,
        comms::option::StaticNumIdImpl<ublox::MsgId_NavDgps>,
        comms::option::FieldsImpl<typename NavDgpsFields<TOpt>::All>,
        comms::option::MsgType<NavDgps<TMsgBase, TOpt> >,
        comms::option::HasName,
        comms::option::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavDgps,
            comms::option::StaticNumIdImpl<ublox::MsgId_NavDgps>,
            comms::option::FieldsImpl<typename NavDgpsFields<TOpt>::All>,
            comms::option::MsgType<NavDgps<TMsgBase, TOpt> >,
            comms::option::HasName,
            comms::option::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavDgpsFields::Itow field.
    ///     @li @b field_age() for @ref NavDgpsFields::Age field.
    ///     @li @b field_baseId() for @ref NavDgpsFields::BaseId field.
    ///     @li @b field_baseHealth() for @ref NavDgpsFields::BaseHealth field.
    ///     @li @b field_numCh() for @ref NavDgpsFields::NumCh field.
    ///     @li @b field_status() for @ref NavDgpsFields::Status field.
    ///     @li @b field_reserved1() for @ref NavDgpsFields::Reserved1 field.
    ///     @li @b field_list() for @ref NavDgpsFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        age,
        baseId,
        baseHealth,
        numCh,
        status,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-DGPS";
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
            static_cast<std::size_t>(field_numCh().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numCh().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numCh().value())>::type;
                field_numCh().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


