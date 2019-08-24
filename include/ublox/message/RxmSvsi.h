/// @file
/// @brief Contains definition of <b>"RXM-SVSI"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmSvsiFields.
/// @see @ref RxmSvsiFields
/// @headerfile "ublox/message/RxmSvsi.h"
struct RxmSvsiFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmSvsiFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmSvsiFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlag bitfield.
            struct SvFlagMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "healthy",
                            "ephVal",
                            "almVal",
                            "notAvail"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
            };
            
        };
        
    };
    
};

/// @brief Fields of @ref RxmSvsi.
/// @tparam TOpt Extra options
/// @see @ref RxmSvsi
/// @headerfile "ublox/message/RxmSvsi.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmSvsiFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Definition of <b>"numVis"</b> field.
    struct NumVis : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numVis";
        }
        
    };
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSV";
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
            
            /// @brief Scope for all the member fields of @ref SvFlag bitfield.
            struct SvFlagMembers
            {
                /// @brief Definition of <b>"ura"</b> field.
                struct Ura : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "ura";
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<4U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_healthy, @b getBitValue_healthy() and @b setBitValue_healthy().
                    ///      @li @b BitIdx_ephVal, @b getBitValue_ephVal() and @b setBitValue_ephVal().
                    ///      @li @b BitIdx_almVal, @b getBitValue_almVal() and @b setBitValue_almVal().
                    ///      @li @b BitIdx_notAvail, @b getBitValue_notAvail() and @b setBitValue_notAvail().
                    COMMS_BITMASK_BITS_SEQ(
                        healthy,
                        ephVal,
                        almVal,
                        notAvail
                    );
                    
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "";
                    }
                    
                    /// @brief Retrieve name of the bit
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Ura,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"svFlag"</b> field.
            class SvFlag : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename SvFlagMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename SvFlagMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_ura() - for SvFlagMembers::Ura member field.
                ///     @li @b field_bits() - for SvFlagMembers::Bits member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    ura,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "svFlag";
                }
                
            };
            
            /// @brief Definition of <b>"azim"</b> field.
            struct Azim : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "azim";
                }
                
            };
            
            /// @brief Definition of <b>"elev"</b> field.
            struct Elev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "elev";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Age bitfield.
            struct AgeMembers
            {
                /// @brief Definition of <b>"almAge"</b> field.
                struct AlmAge : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "almAge";
                    }
                    
                };
                
                /// @brief Definition of <b>"ephAge"</b> field.
                struct EphAge : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "ephAge";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AlmAge,
                       EphAge
                    >;
            };
            
            /// @brief Definition of <b>"age"</b> field.
            class Age : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename AgeMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename AgeMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_almAge() - for AgeMembers::AlmAge member field.
                ///     @li @b field_ephAge() - for AgeMembers::EphAge member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    almAge,
                    ephAge
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "age";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   SvFlag,
                   Azim,
                   Elev,
                   Age
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
            ///     @li @b field_svFlag() - for ElementMembers::SvFlag member field.
            ///     @li @b field_azim() - for ElementMembers::Azim member field.
            ///     @li @b field_elev() - for ElementMembers::Elev member field.
            ///     @li @b field_age() - for ElementMembers::Age member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                svid,
                svFlag,
                azim,
                elev,
                age
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
            typename TOpt::message::RxmSvsiFields::List,
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
        Week,
        NumVis,
        NumSV,
        List
    >;
};

/// @brief Definition of <b>"RXM-SVSI"</b> message class.
/// @details
///     See @ref RxmSvsiFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmSvsi.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmSvsi : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmSvsi,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmSvsi>,
        comms::option::def::FieldsImpl<typename RxmSvsiFields<TOpt>::All>,
        comms::option::def::MsgType<RxmSvsi<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmSvsi,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmSvsi>,
            comms::option::def::FieldsImpl<typename RxmSvsiFields<TOpt>::All>,
            comms::option::def::MsgType<RxmSvsi<TMsgBase, TOpt> >,
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
    ///     @li @b field_itow() for @ref RxmSvsiFields::Itow field.
    ///     @li @b field_week() for @ref RxmSvsiFields::Week field.
    ///     @li @b field_numVis() for @ref RxmSvsiFields::NumVis field.
    ///     @li @b field_numSV() for @ref RxmSvsiFields::NumSV field.
    ///     @li @b field_list() for @ref RxmSvsiFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        week,
        numVis,
        numSV,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-SVSI";
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
            static_cast<std::size_t>(field_numSV().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSV().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSV().value())>::type;
                field_numSV().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


