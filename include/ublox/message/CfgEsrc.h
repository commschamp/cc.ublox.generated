/// @file
/// @brief Contains definition of <b>"CFG-ESRC"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgEsrcFields.
/// @see @ref CfgEsrcFields
/// @headerfile "ublox/message/CfgEsrc.h"
struct CfgEsrcFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgEsrcFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgEsrcFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::ExtInt field.
            enum class ExtIntVal : std::uint8_t
            {
                EXTINT0 = 0, ///< value @b EXTINT0
                EXTINT1 = 1, ///< value @b EXTINT1
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 1, ///< Last defined value.
                ValuesLimit = 2, ///< Upper limit for defined values.
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::ExtInt field.
            struct ExtIntCommon
            {
                /// @brief Retrieve name of the enum value
                static const char* valueName(ExtIntVal val)
                {
                    static const char* Map[] = {
                        "EXTINT0",
                        "EXTINT1"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::SourceType field.
            enum class SourceTypeVal : std::uint8_t
            {
                None = 0, ///< value @b None
                Frequency = 1, ///< value @b Frequency
                Time = 2, ///< value @b Time
                ExternalOsc = 3, ///< value @b ExternalOsc
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::SourceType field.
            struct SourceTypeCommon
            {
                /// @brief Retrieve name of the enum value
                static const char* valueName(SourceTypeVal val)
                {
                    static const char* Map[] = {
                        "None",
                        "Frequency",
                        "Time",
                        "ExternalOsc"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Retrieve name of the bit
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "polarity",
                        "gnssUtc"
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

/// @brief Fields of @ref CfgEsrc.
/// @tparam TOpt Extra options
/// @see @ref CfgEsrc
/// @headerfile "ublox/message/CfgEsrc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgEsrcFields
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
    
    /// @brief Definition of <b>"numSources"</b> field.
    struct NumSources : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSources";
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
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::ExtInt field.
            using ExtIntVal = ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntVal;
            
            /// @brief Definition of <b>"extInt"</b> field.
            /// @see @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::ExtIntVal
            struct ExtInt : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    ExtIntVal,
                    comms::option::def::ValidNumValueRange<0, 1>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "extInt";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(ExtIntVal val)
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::ExtIntCommon::valueName(val);
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::SourceType field.
            using SourceTypeVal = ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeVal;
            
            /// @brief Definition of <b>"sourceType"</b> field.
            /// @see @ref ublox::message::CfgEsrcFields::ListMembers::ElementMembers::SourceTypeVal
            struct SourceType : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    SourceTypeVal,
                    comms::option::def::ValidNumValueRange<0, 3>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "sourceType";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(SourceTypeVal val)
                {
                    return ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::SourceTypeCommon::valueName(val);
                }
                
            };
            
            /// @brief Definition of <b>"flags"</b> field.
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<2U>,
                    comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<2U>,
                        comms::option::def::BitmaskReservedBits<0xFFFCU, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_polarity, @b getBitValue_polarity() and @b setBitValue_polarity().
                ///      @li @b BitIdx_gnssUtc, @b getBitValue_gnssUtc() and @b setBitValue_gnssUtc().
                COMMS_BITMASK_BITS_SEQ(
                    polarity,
                    gnssUtc
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
                        ublox::message::CfgEsrcFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"freq"</b> field.
            struct Freq : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 4>,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "freq";
                }
                
            };
            
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
            
            /// @brief Definition of <b>"withTemp"</b> field.
            struct WithTemp : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "withTemp";
                }
                
            };
            
            /// @brief Definition of <b>"withAge"</b> field.
            struct WithAge : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "withAge";
                }
                
            };
            
            /// @brief Definition of <b>"timeToTemp"</b> field.
            struct TimeToTemp : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::UnitsSeconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "timeToTemp";
                }
                
            };
            
            /// @brief Definition of <b>"maxDevLifeTime"</b> field.
            struct MaxDevLifeTime : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "maxDevLifeTime";
                }
                
            };
            
            /// @brief Definition of <b>"offset"</b> field.
            struct Offset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "offset";
                }
                
            };
            
            /// @brief Definition of <b>"offsetUncertainty"</b> field.
            struct OffsetUncertainty : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "offsetUncertainty";
                }
                
            };
            
            /// @brief Definition of <b>"jitter"</b> field.
            struct Jitter : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::UnitsNanoseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "jitter";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   ExtInt,
                   SourceType,
                   Flags,
                   Freq,
                   Reserved2,
                   WithTemp,
                   WithAge,
                   TimeToTemp,
                   MaxDevLifeTime,
                   Offset,
                   OffsetUncertainty,
                   Jitter
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
            ///     @li @b field_extInt() - for ElementMembers::ExtInt member field.
            ///     @li @b field_sourceType() - for ElementMembers::SourceType member field.
            ///     @li @b field_flags() - for ElementMembers::Flags member field.
            ///     @li @b field_freq() - for ElementMembers::Freq member field.
            ///     @li @b field_reserved2() - for ElementMembers::Reserved2 member field.
            ///     @li @b field_withTemp() - for ElementMembers::WithTemp member field.
            ///     @li @b field_withAge() - for ElementMembers::WithAge member field.
            ///     @li @b field_timeToTemp() - for ElementMembers::TimeToTemp member field.
            ///     @li @b field_maxDevLifeTime() - for ElementMembers::MaxDevLifeTime member field.
            ///     @li @b field_offset() - for ElementMembers::Offset member field.
            ///     @li @b field_offsetUncertainty() - for ElementMembers::OffsetUncertainty member field.
            ///     @li @b field_jitter() - for ElementMembers::Jitter member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                extInt,
                sourceType,
                flags,
                freq,
                reserved2,
                withTemp,
                withAge,
                timeToTemp,
                maxDevLifeTime,
                offset,
                offsetUncertainty,
                jitter
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
            typename TOpt::message::CfgEsrcFields::List,
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
        NumSources,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"CFG-ESRC"</b> message class.
/// @details
///     See @ref CfgEsrcFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgEsrc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgEsrc : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEsrc>,
        comms::option::def::FieldsImpl<typename CfgEsrcFields<TOpt>::All>,
        comms::option::def::MsgType<CfgEsrc<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEsrc>,
            comms::option::def::FieldsImpl<typename CfgEsrcFields<TOpt>::All>,
            comms::option::def::MsgType<CfgEsrc<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref CfgEsrcFields::Version field.
    ///     @li @b field_numSources() for @ref CfgEsrcFields::NumSources field.
    ///     @li @b field_reserved1() for @ref CfgEsrcFields::Reserved1 field.
    ///     @li @b field_list() for @ref CfgEsrcFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        numSources,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-ESRC";
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
            static_cast<std::size_t>(field_numSources().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSources().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSources().value())>::type;
                field_numSources().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


