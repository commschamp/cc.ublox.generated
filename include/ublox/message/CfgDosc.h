/// @file
/// @brief Contains definition of <b>"CFG-DOSC"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <type_traits>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgDoscFields.
/// @see @ref CfgDoscFields
/// @headerfile "ublox/message/CfgDosc.h"
struct CfgDoscFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgDoscFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::CfgDoscFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
            enum class OscIdVal : std::uint8_t
            {
                Internal = 0, ///< value @b Internal
                External = 1, ///< value @b External
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 1, ///< Last defined value.
                ValuesLimit = 2, ///< Upper limit for defined values.
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
            struct OscIdCommon
            {
                /// @brief Retrieve name of the enum value
                static const char* valueName(OscIdVal val)
                {
                    static const char* Map[] = {
                        "Internal",
                        "External"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::Flags bitfield.
            struct FlagsMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "isCalibrated"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                enum class ControlIfVal : std::uint8_t
                {
                    Custom = 0, ///< value @b Custom
                    Microchip = 1, ///< value @b Microchip
                    TI = 2, ///< value @b TI
                    DAC_12bit = 13, ///< value @b DAC_12bit
                    DAC_14bit = 14, ///< value @b DAC_14bit
                    DAC_16bit = 15, ///< value @b DAC_16bit
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 15, ///< Last defined value.
                    ValuesLimit = 16, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                struct ControlIfCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ControlIfVal val)
                    {
                        using NameInfo = std::pair<ControlIfVal, const char*>;
                        static const NameInfo Map[] = {
                            std::make_pair(ControlIfVal::Custom, "Custom"),
                            std::make_pair(ControlIfVal::Microchip, "Microchip"),
                            std::make_pair(ControlIfVal::TI, "TI"),
                            std::make_pair(ControlIfVal::DAC_12bit, "DAC_12bit"),
                            std::make_pair(ControlIfVal::DAC_14bit, "DAC_14bit"),
                            std::make_pair(ControlIfVal::DAC_16bit, "DAC_16bit")
                        };
                        
                        auto iter = std::lower_bound(
                            std::begin(Map), std::end(Map), val,
                            [](const NameInfo& info, ControlIfVal v) -> bool
                            {
                                return info.first < v;
                            });
                        
                        if ((iter == std::end(Map)) || (iter->first != val)) {
                            return nullptr;
                        }
                        
                        return iter->second;
                    }
                    
                };
                
            };
            
        };
        
    };
    
};

/// @brief Fields of @ref CfgDosc.
/// @tparam TOpt Extra options
/// @see @ref CfgDosc
/// @headerfile "ublox/message/CfgDosc.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgDoscFields
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
    
    /// @brief Definition of <b>"numOsc"</b> field.
    struct NumOsc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numOsc";
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
            ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscId field.
            using OscIdVal = ublox::message::CfgDoscFieldsCommon::ListMembersCommon::ElementMembersCommon::OscIdVal;
            
            /// @brief Definition of <b>"oscId"</b> field.
            /// @see @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::OscIdVal
            struct OscId : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    OscIdVal,
                    comms::option::def::ValidNumValueRange<0, 1>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "oscId";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(OscIdVal val)
                {
                    return ublox::message::CfgDoscFieldsCommon::ListMembersCommon::ElementMembersCommon::OscIdCommon::valueName(val);
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
            
            /// @brief Scope for all the member fields of @ref Flags bitfield.
            struct FlagsMembers
            {
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<1U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<1U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_isCalibrated, @b getBitValue_isCalibrated() and @b setBitValue_isCalibrated().
                    COMMS_BITMASK_BITS_SEQ(
                        isCalibrated
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
                            ublox::message::CfgDoscFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIf field.
                using ControlIfVal = ublox::message::CfgDoscFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::ControlIfVal;
                
                /// @brief Definition of <b>"controlIf"</b> field.
                /// @see @ref ublox::message::CfgDoscFields::ListMembers::ElementMembers::FlagsMembers::ControlIfVal
                struct ControlIf : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        ControlIfVal,
                        comms::option::def::FixedBitLength<4U>,
                        comms::option::def::ValidNumValueRange<0, 2>,
                        comms::option::def::ValidNumValueRange<13, 15>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "controlIf";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(ControlIfVal val)
                    {
                        return ublox::message::CfgDoscFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsMembersCommon::ControlIfCommon::valueName(val);
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                /// @details
                ///     Reserved field with 2 bytes length
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint16_t,
                        comms::option::def::FixedBitLength<11U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "reserved";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Bits,
                       ControlIf,
                       Reserved
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
                ///     @li @b field_bits() - for FlagsMembers::Bits member field.
                ///     @li @b field_controlIf() - for FlagsMembers::ControlIf member field.
                ///     @li @b field_reserved() - for FlagsMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    bits,
                    controlIf,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "flags";
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
            
            /// @brief Definition of <b>"phaseOffset"</b> field.
            struct PhaseOffset : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "phaseOffset";
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
            
            /// @brief Definition of <b>"gainVco"</b> field.
            struct GainVco : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 65536L>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "gainVco";
                }
                
            };
            
            /// @brief Definition of <b>"gainUncertainty"</b> field.
            struct GainUncertainty : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ScalingRatio<1, 256>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "gainUncertainty";
                }
                
            };
            
            /// @brief Definition of <b>"reserved4"</b> field.
            struct Reserved4 : public
                ublox::field::Res3<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved4";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   OscId,
                   Reserved2,
                   Flags,
                   Freq,
                   PhaseOffset,
                   WithTemp,
                   WithAge,
                   TimeToTemp,
                   Reserved3,
                   GainVco,
                   GainUncertainty,
                   Reserved4
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
            ///     @li @b field_oscId() - for ElementMembers::OscId member field.
            ///     @li @b field_reserved2() - for ElementMembers::Reserved2 member field.
            ///     @li @b field_flags() - for ElementMembers::Flags member field.
            ///     @li @b field_freq() - for ElementMembers::Freq member field.
            ///     @li @b field_phaseOffset() - for ElementMembers::PhaseOffset member field.
            ///     @li @b field_withTemp() - for ElementMembers::WithTemp member field.
            ///     @li @b field_withAge() - for ElementMembers::WithAge member field.
            ///     @li @b field_timeToTemp() - for ElementMembers::TimeToTemp member field.
            ///     @li @b field_reserved3() - for ElementMembers::Reserved3 member field.
            ///     @li @b field_gainVco() - for ElementMembers::GainVco member field.
            ///     @li @b field_gainUncertainty() - for ElementMembers::GainUncertainty member field.
            ///     @li @b field_reserved4() - for ElementMembers::Reserved4 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                oscId,
                reserved2,
                flags,
                freq,
                phaseOffset,
                withTemp,
                withAge,
                timeToTemp,
                reserved3,
                gainVco,
                gainUncertainty,
                reserved4
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
            typename TOpt::message::CfgDoscFields::List,
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
        NumOsc,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"CFG-DOSC"</b> message class.
/// @details
///     See @ref CfgDoscFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgDosc.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgDosc : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDosc>,
        comms::option::def::FieldsImpl<typename CfgDoscFields<TOpt>::All>,
        comms::option::def::MsgType<CfgDosc<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgDosc>,
            comms::option::def::FieldsImpl<typename CfgDoscFields<TOpt>::All>,
            comms::option::def::MsgType<CfgDosc<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref CfgDoscFields::Version field.
    ///     @li @b field_numOsc() for @ref CfgDoscFields::NumOsc field.
    ///     @li @b field_reserved1() for @ref CfgDoscFields::Reserved1 field.
    ///     @li @b field_list() for @ref CfgDoscFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        numOsc,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-DOSC";
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
            static_cast<std::size_t>(field_numOsc().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numOsc().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numOsc().value())>::type;
                field_numOsc().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


