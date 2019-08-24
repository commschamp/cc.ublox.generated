/// @file
/// @brief Contains definition of <b>"TIM-SMEAS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimSmeasFields.
/// @see @ref TimSmeasFields
/// @headerfile "ublox/message/TimSmeas.h"
struct TimSmeasFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::TimSmeasFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::TimSmeasFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Common functions for
            ///     @ref ublox::message::TimSmeasFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Retrieve name of the bit
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "freqValid",
                        "phaseValid"
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

/// @brief Fields of @ref TimSmeas.
/// @tparam TOpt Extra options
/// @see @ref TimSmeas
/// @headerfile "ublox/message/TimSmeas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimSmeasFields
{
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
    
    /// @brief Definition of <b>"numMeas"</b> field.
    struct NumMeas : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numMeas";
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
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"sourceId"</b> field.
            struct SourceId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "sourceId";
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>,
                        comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_freqValid, @b getBitValue_freqValid() and @b setBitValue_freqValid().
                ///      @li @b BitIdx_phaseValid, @b getBitValue_phaseValid() and @b setBitValue_phaseValid().
                COMMS_BITMASK_BITS_SEQ(
                    freqValid,
                    phaseValid
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "flags";
                }
                
                /// @brief Retrieve name of the bit
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::TimSmeasFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"phaseOffsetFrac"</b> field.
            struct PhaseOffsetFrac : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 256>,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "phaseOffsetFrac";
                }
                
            };
            
            /// @brief Definition of <b>"phaseUncFrac"</b> field.
            struct PhaseUncFrac : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ScalingRatio<1, 256>,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "phaseUncFrac";
                }
                
            };
            
            /// @brief Definition of <b>"phaseOffset"</b> field.
            struct PhaseOffset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "phaseOffset";
                }
                
            };
            
            /// @brief Definition of <b>"phaseUnc"</b> field.
            struct PhaseUnc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "phaseUnc";
                }
                
            };
            
            /// @brief Definition of <b>"reserved3"</b> field.
            struct Reserved3 : public
                ublox::field::Res4<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief Definition of <b>"freqOffset"</b> field.
            struct FreqOffset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "freqOffset";
                }
                
            };
            
            /// @brief Definition of <b>"freqUnc"</b> field.
            struct FreqUnc : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "freqUnc";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   SourceId,
                   Flags,
                   PhaseOffsetFrac,
                   PhaseUncFrac,
                   PhaseOffset,
                   PhaseUnc,
                   Reserved3,
                   FreqOffset,
                   FreqUnc
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
            ///     @li @b field_sourceId() - for ElementMembers::SourceId member field.
            ///     @li @b field_flags() - for ElementMembers::Flags member field.
            ///     @li @b field_phaseOffsetFrac() - for ElementMembers::PhaseOffsetFrac member field.
            ///     @li @b field_phaseUncFrac() - for ElementMembers::PhaseUncFrac member field.
            ///     @li @b field_phaseOffset() - for ElementMembers::PhaseOffset member field.
            ///     @li @b field_phaseUnc() - for ElementMembers::PhaseUnc member field.
            ///     @li @b field_reserved3() - for ElementMembers::Reserved3 member field.
            ///     @li @b field_freqOffset() - for ElementMembers::FreqOffset member field.
            ///     @li @b field_freqUnc() - for ElementMembers::FreqUnc member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                sourceId,
                flags,
                phaseOffsetFrac,
                phaseUncFrac,
                phaseOffset,
                phaseUnc,
                reserved3,
                freqOffset,
                freqUnc
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
            typename TOpt::message::TimSmeasFields::List,
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
        Version,
        NumMeas,
        Reserved1,
        Itow,
        Reserved2,
        List
    >;
};

/// @brief Definition of <b>"TIM-SMEAS"</b> message class.
/// @details
///     See @ref TimSmeasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimSmeas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimSmeas : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSmeas>,
        comms::option::def::FieldsImpl<typename TimSmeasFields<TOpt>::All>,
        comms::option::def::MsgType<TimSmeas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSmeas>,
            comms::option::def::FieldsImpl<typename TimSmeasFields<TOpt>::All>,
            comms::option::def::MsgType<TimSmeas<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref TimSmeasFields::Version field.
    ///     @li @b field_numMeas() for @ref TimSmeasFields::NumMeas field.
    ///     @li @b field_reserved1() for @ref TimSmeasFields::Reserved1 field.
    ///     @li @b field_itow() for @ref TimSmeasFields::Itow field.
    ///     @li @b field_reserved2() for @ref TimSmeasFields::Reserved2 field.
    ///     @li @b field_list() for @ref TimSmeasFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        numMeas,
        reserved1,
        itow,
        reserved2,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-SMEAS";
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
            static_cast<std::size_t>(field_numMeas().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numMeas().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numMeas().value())>::type;
                field_numMeas().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


