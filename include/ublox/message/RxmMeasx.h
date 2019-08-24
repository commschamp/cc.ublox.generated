/// @file
/// @brief Contains definition of <b>"RXM-MEASX"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Res8.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmMeasxFields.
/// @see @ref RxmMeasxFields
/// @headerfile "ublox/message/RxmMeasx.h"
struct RxmMeasxFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmMeasxFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
        enum class TowSetVal : std::uint8_t
        {
            No = 0, ///< value @b No
            Yes = 1, ///< value @b Yes
            Yes2 = 2, ///< value @b Yes2
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
        struct TowSetCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(TowSetVal val)
            {
                static const char* Map[] = {
                    "No",
                    "Yes",
                    "Yes2"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmMeasxFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmMeasxFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
            enum class MpathIndicVal : std::uint8_t
            {
                NotMeasured = 0, ///< value <b>Not measured</b>.
                Low = 1, ///< value @b Low
                Medium = 2, ///< value @b Medium
                High = 3, ///< value @b High
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
            struct MpathIndicCommon
            {
                /// @brief Retrieve name of the enum value
                static const char* valueName(MpathIndicVal val)
                {
                    static const char* Map[] = {
                        "Not measured",
                        "Low",
                        "Medium",
                        "High"
                    };
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    
                    if (MapSize <= static_cast<std::size_t>(val)) {
                        return nullptr;
                    }
                    
                    return Map[static_cast<std::size_t>(val)];
                }
                
            };
            
        };
        
    };
    
};

/// @brief Fields of @ref RxmMeasx.
/// @tparam TOpt Extra options
/// @see @ref RxmMeasx
/// @headerfile "ublox/message/RxmMeasx.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmMeasxFields
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
    
    /// @brief Definition of <b>"gpsTOW"</b> field.
    struct GpsTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gpsTOW";
        }
        
    };
    
    /// @brief Definition of <b>"gloTOW"</b> field.
    struct GloTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gloTOW";
        }
        
    };
    
    /// @brief Definition of <b>"bdsTOW"</b> field.
    struct BdsTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "bdsTOW";
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
    
    /// @brief Definition of <b>"qzssTOW"</b> field.
    struct QzssTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "qzssTOW";
        }
        
    };
    
    /// @brief Definition of <b>"gpsTOWacc"</b> field.
    struct GpsTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gpsTOWacc";
        }
        
    };
    
    /// @brief Definition of <b>"gloTOWacc"</b> field.
    struct GloTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gloTOWacc";
        }
        
    };
    
    /// @brief Definition of <b>"bdsTOWacc"</b> field.
    struct BdsTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "bdsTOWacc";
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
    
    /// @brief Definition of <b>"qzssTOWacc"</b> field.
    struct QzssTOWacc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 16>,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "qzssTOWacc";
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
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSet field.
        using TowSetVal = ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetVal;
        
        /// @brief Definition of <b>"towSet"</b> field.
        /// @see @ref ublox::message::RxmMeasxFields::FlagsMembers::TowSetVal
        struct TowSet : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                TowSetVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "towSet";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(TowSetVal val)
            {
                return ublox::message::RxmMeasxFieldsCommon::FlagsMembersCommon::TowSetCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>
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
               TowSet,
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
        ///     @li @b field_towSet() - for FlagsMembers::TowSet member field.
        ///     @li @b field_reserved() - for FlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            towSet,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"reserved4"</b> field.
    struct Reserved4 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved4";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Definition of <b>"gnssId"</b> field.
            using GnssId =
                ublox::field::GnssId<
                    TOpt
                >;
            
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
            
            /// @brief Definition of <b>"cNo"</b> field.
            struct CNo : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 63>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "cNo";
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndic field.
            using MpathIndicVal = ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicVal;
            
            /// @brief Definition of <b>"mpathIndic"</b> field.
            /// @see @ref ublox::message::RxmMeasxFields::ListMembers::ElementMembers::MpathIndicVal
            struct MpathIndic : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    MpathIndicVal,
                    comms::option::def::ValidNumValueRange<0, 3>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "mpathIndic";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(MpathIndicVal val)
                {
                    return ublox::message::RxmMeasxFieldsCommon::ListMembersCommon::ElementMembersCommon::MpathIndicCommon::valueName(val);
                }
                
            };
            
            /// @brief Definition of <b>"dopplerMS"</b> field.
            struct DopplerMS : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<4, 100>,
                    comms::option::def::UnitsMetersPerSecond
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "dopplerMS";
                }
                
            };
            
            /// @brief Definition of <b>"dopplerHz"</b> field.
            struct DopplerHz : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<2, 100>,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "dopplerHz";
                }
                
            };
            
            /// @brief Definition of <b>"wholeChips"</b> field.
            struct WholeChips : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::ValidNumValueRange<0, 1022>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "wholeChips";
                }
                
            };
            
            /// @brief Definition of <b>"fracChips"</b> field.
            struct FracChips : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::ValidNumValueRange<0, 1023>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "fracChips";
                }
                
            };
            
            /// @brief Definition of <b>"codePhase"</b> field.
            struct CodePhase : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::ScalingRatio<1, 2097152L>,
                    comms::option::def::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "codePhase";
                }
                
            };
            
            /// @brief Definition of <b>"intCodePhase"</b> field.
            struct IntCodePhase : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMilliseconds
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "intCodePhase";
                }
                
            };
            
            /// @brief Definition of <b>"pseuRangeRMSErr"</b> field.
            struct PseuRangeRMSErr : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 63>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "pseuRangeRMSErr";
                }
                
            };
            
            /// @brief Definition of <b>"reserved5"</b> field.
            struct Reserved5 : public
                ublox::field::Res2<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved5";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   Svid,
                   CNo,
                   MpathIndic,
                   DopplerMS,
                   DopplerHz,
                   WholeChips,
                   FracChips,
                   CodePhase,
                   IntCodePhase,
                   PseuRangeRMSErr,
                   Reserved5
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
            ///     @li @b field_gnssId() - for ElementMembers::GnssId member field.
            ///     @li @b field_svid() - for ElementMembers::Svid member field.
            ///     @li @b field_cNo() - for ElementMembers::CNo member field.
            ///     @li @b field_mpathIndic() - for ElementMembers::MpathIndic member field.
            ///     @li @b field_dopplerMS() - for ElementMembers::DopplerMS member field.
            ///     @li @b field_dopplerHz() - for ElementMembers::DopplerHz member field.
            ///     @li @b field_wholeChips() - for ElementMembers::WholeChips member field.
            ///     @li @b field_fracChips() - for ElementMembers::FracChips member field.
            ///     @li @b field_codePhase() - for ElementMembers::CodePhase member field.
            ///     @li @b field_intCodePhase() - for ElementMembers::IntCodePhase member field.
            ///     @li @b field_pseuRangeRMSErr() - for ElementMembers::PseuRangeRMSErr member field.
            ///     @li @b field_reserved5() - for ElementMembers::Reserved5 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                gnssId,
                svid,
                cNo,
                mpathIndic,
                dopplerMS,
                dopplerHz,
                wholeChips,
                fracChips,
                codePhase,
                intCodePhase,
                pseuRangeRMSErr,
                reserved5
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
            typename TOpt::message::RxmMeasxFields::List,
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
        Reserved1,
        GpsTOW,
        GloTOW,
        BdsTOW,
        Reserved2,
        QzssTOW,
        GpsTOWacc,
        GloTOWacc,
        BdsTOWacc,
        Reserved3,
        QzssTOWacc,
        NumSV,
        Flags,
        Reserved4,
        List
    >;
};

/// @brief Definition of <b>"RXM-MEASX"</b> message class.
/// @details
///     See @ref RxmMeasxFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmMeasx.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmMeasx : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmMeasx,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmMeasx>,
        comms::option::def::FieldsImpl<typename RxmMeasxFields<TOpt>::All>,
        comms::option::def::MsgType<RxmMeasx<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmMeasx,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmMeasx>,
            comms::option::def::FieldsImpl<typename RxmMeasxFields<TOpt>::All>,
            comms::option::def::MsgType<RxmMeasx<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref RxmMeasxFields::Version field.
    ///     @li @b field_reserved1() for @ref RxmMeasxFields::Reserved1 field.
    ///     @li @b field_gpsTOW() for @ref RxmMeasxFields::GpsTOW field.
    ///     @li @b field_gloTOW() for @ref RxmMeasxFields::GloTOW field.
    ///     @li @b field_bdsTOW() for @ref RxmMeasxFields::BdsTOW field.
    ///     @li @b field_reserved2() for @ref RxmMeasxFields::Reserved2 field.
    ///     @li @b field_qzssTOW() for @ref RxmMeasxFields::QzssTOW field.
    ///     @li @b field_gpsTOWacc() for @ref RxmMeasxFields::GpsTOWacc field.
    ///     @li @b field_gloTOWacc() for @ref RxmMeasxFields::GloTOWacc field.
    ///     @li @b field_bdsTOWacc() for @ref RxmMeasxFields::BdsTOWacc field.
    ///     @li @b field_reserved3() for @ref RxmMeasxFields::Reserved3 field.
    ///     @li @b field_qzssTOWacc() for @ref RxmMeasxFields::QzssTOWacc field.
    ///     @li @b field_numSV() for @ref RxmMeasxFields::NumSV field.
    ///     @li @b field_flags() for @ref RxmMeasxFields::Flags field.
    ///     @li @b field_reserved4() for @ref RxmMeasxFields::Reserved4 field.
    ///     @li @b field_list() for @ref RxmMeasxFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        gpsTOW,
        gloTOW,
        bdsTOW,
        reserved2,
        qzssTOW,
        gpsTOWacc,
        gloTOWacc,
        bdsTOWacc,
        reserved3,
        qzssTOWacc,
        numSV,
        flags,
        reserved4,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 44U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-MEASX";
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


