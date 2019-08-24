/// @file
/// @brief Contains definition of <b>"RXM-RAWX"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmRawxFields.
/// @see @ref RxmRawxFields
/// @headerfile "ublox/message/RxmRawx.h"
struct RxmRawxFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::RxmRawxFields::RecStat field.
    struct RecStatCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "leapSec",
                "clkReset"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmRawxFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmRawxFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Common functions for
            ///     @ref ublox::message::RxmRawxFields::ListMembers::ElementMembers::TrkStat field.
            struct TrkStatCommon
            {
                /// @brief Retrieve name of the bit
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "prValid",
                        "cpValid",
                        "halfCyc",
                        "subHalfCyc"
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

/// @brief Fields of @ref RxmRawx.
/// @tparam TOpt Extra options
/// @see @ref RxmRawx
/// @headerfile "ublox/message/RxmRawx.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmRawxFields
{
    /// @brief Definition of <b>"rcvTow"</b> field.
    struct RcvTow : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            double,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "rcvTow";
        }
        
    };
    
    /// @brief Definition of <b>"week"</b> field.
    struct Week : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "week";
        }
        
    };
    
    /// @brief Definition of <b>"leapS"</b> field.
    struct LeapS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "leapS";
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
    
    /// @brief Definition of <b>"recStat"</b> field.
    class RecStat : public
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
        ///      @li @b BitIdx_leapSec, @b getBitValue_leapSec() and @b setBitValue_leapSec().
        ///      @li @b BitIdx_clkReset, @b getBitValue_clkReset() and @b setBitValue_clkReset().
        COMMS_BITMASK_BITS_SEQ(
            leapSec,
            clkReset
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "recStat";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::RxmRawxFieldsCommon::RecStatCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<0, 1>
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
            /// @brief Definition of <b>"prMes"</b> field.
            struct PrMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    double,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prMes";
                }
                
            };
            
            /// @brief Definition of <b>"cpMes"</b> field.
            struct CpMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    double
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "cpMes";
                }
                
            };
            
            /// @brief Definition of <b>"doMes"</b> field.
            struct DoMes : public
                comms::field::FloatValue<
                    ublox::field::FieldBase<>,
                    float,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "doMes";
                }
                
            };
            
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
            
            /// @brief Definition of <b>"freqId"</b> field.
            struct FreqId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 13>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "freqId";
                }
                
            };
            
            /// @brief Definition of <b>"locktime"</b> field.
            struct Locktime : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint16_t,
                    comms::option::def::UnitsMilliseconds,
                    comms::option::def::ValidNumValueRange<0, 64500L>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "locktime";
                }
                
            };
            
            /// @brief Definition of <b>"cno"</b> field.
            struct Cno : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "cno";
                }
                
            };
            
            /// @brief Definition of <b>"prStdev"</b> field.
            struct PrStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsMeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prStdev";
                }
                
            };
            
            /// @brief Definition of <b>"cpStdev"</b> field.
            struct CpStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ScalingRatio<4, 1000>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "cpStdev";
                }
                
            };
            
            /// @brief Definition of <b>"doStdev"</b> field.
            struct DoStdev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "doStdev";
                }
                
            };
            
            /// @brief Definition of <b>"trkStat"</b> field.
            class TrkStat : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>,
                    comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>,
                        comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_prValid, @b getBitValue_prValid() and @b setBitValue_prValid().
                ///      @li @b BitIdx_cpValid, @b getBitValue_cpValid() and @b setBitValue_cpValid().
                ///      @li @b BitIdx_halfCyc, @b getBitValue_halfCyc() and @b setBitValue_halfCyc().
                ///      @li @b BitIdx_subHalfCyc, @b getBitValue_subHalfCyc() and @b setBitValue_subHalfCyc().
                COMMS_BITMASK_BITS_SEQ(
                    prValid,
                    cpValid,
                    halfCyc,
                    subHalfCyc
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "trkStat";
                }
                
                /// @brief Retrieve name of the bit
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::RxmRawxFieldsCommon::ListMembersCommon::ElementMembersCommon::TrkStatCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Definition of <b>"reserved3"</b> field.
            struct Reserved3 : public
                ublox::field::Res1<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved3";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   PrMes,
                   CpMes,
                   DoMes,
                   GnssId,
                   Svid,
                   Reserved2,
                   FreqId,
                   Locktime,
                   Cno,
                   PrStdev,
                   CpStdev,
                   DoStdev,
                   TrkStat,
                   Reserved3
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
            ///     @li @b field_prMes() - for ElementMembers::PrMes member field.
            ///     @li @b field_cpMes() - for ElementMembers::CpMes member field.
            ///     @li @b field_doMes() - for ElementMembers::DoMes member field.
            ///     @li @b field_gnssId() - for ElementMembers::GnssId member field.
            ///     @li @b field_svid() - for ElementMembers::Svid member field.
            ///     @li @b field_reserved2() - for ElementMembers::Reserved2 member field.
            ///     @li @b field_freqId() - for ElementMembers::FreqId member field.
            ///     @li @b field_locktime() - for ElementMembers::Locktime member field.
            ///     @li @b field_cno() - for ElementMembers::Cno member field.
            ///     @li @b field_prStdev() - for ElementMembers::PrStdev member field.
            ///     @li @b field_cpStdev() - for ElementMembers::CpStdev member field.
            ///     @li @b field_doStdev() - for ElementMembers::DoStdev member field.
            ///     @li @b field_trkStat() - for ElementMembers::TrkStat member field.
            ///     @li @b field_reserved3() - for ElementMembers::Reserved3 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                prMes,
                cpMes,
                doMes,
                gnssId,
                svid,
                reserved2,
                freqId,
                locktime,
                cno,
                prStdev,
                cpStdev,
                doStdev,
                trkStat,
                reserved3
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
            typename TOpt::message::RxmRawxFields::List,
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
        RcvTow,
        Week,
        LeapS,
        NumMeas,
        RecStat,
        Version,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"RXM-RAWX"</b> message class.
/// @details
///     See @ref RxmRawxFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmRawx.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmRawx : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRawx,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRawx>,
        comms::option::def::FieldsImpl<typename RxmRawxFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRawx<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRawx,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmRawx>,
            comms::option::def::FieldsImpl<typename RxmRawxFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRawx<TMsgBase, TOpt> >,
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
    ///     @li @b field_rcvTow() for @ref RxmRawxFields::RcvTow field.
    ///     @li @b field_week() for @ref RxmRawxFields::Week field.
    ///     @li @b field_leapS() for @ref RxmRawxFields::LeapS field.
    ///     @li @b field_numMeas() for @ref RxmRawxFields::NumMeas field.
    ///     @li @b field_recStat() for @ref RxmRawxFields::RecStat field.
    ///     @li @b field_version() for @ref RxmRawxFields::Version field.
    ///     @li @b field_reserved1() for @ref RxmRawxFields::Reserved1 field.
    ///     @li @b field_list() for @ref RxmRawxFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        rcvTow,
        week,
        leapS,
        numMeas,
        recStat,
        version,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-RAWX";
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


