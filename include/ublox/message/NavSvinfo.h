/// @file
/// @brief Contains definition of <b>"NAV-SVINFO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
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
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavSvinfoFields.
/// @see @ref NavSvinfoFields
/// @headerfile "ublox/message/NavSvinfo.h"
struct NavSvinfoFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavSvinfoFields::GlobalFlags bitfield.
    struct GlobalFlagsMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
        enum class ChipGenVal : std::uint8_t
        {
            Antaris = 0, ///< value @b Antaris
            Ublox5 = 1, ///< value <b>u-blox 5</b>.
            Ublox6 = 2, ///< value <b>u-blox 6</b>.
            Ublox7 = 3, ///< value <b>u-blox 7</b>.
            Ublox8 = 4, ///< value <b>u-blox 8</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 4, ///< Last defined value.
            ValuesLimit = 5, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
        struct ChipGenCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(ChipGenVal val)
            {
                static const char* Map[] = {
                    "Antaris",
                    "u-blox 5",
                    "u-blox 6",
                    "u-blox 7",
                    "u-blox 8"
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
    ///     @ref ublox::message::NavSvinfoFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavSvinfoFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Common functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Flags field.
            struct FlagsCommon
            {
                /// @brief Retrieve name of the bit
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "svUsed",
                        "diffCorr",
                        "orbitAvail",
                        "orbitEph",
                        "unhealthy",
                        "orbitAlm",
                        "orbitAop",
                        "smoothed"
                    };
                
                    static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                    if (MapSize <= idx) {
                        return nullptr;
                    }
                
                    return Map[idx];
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
            enum class QualityVal : std::uint8_t
            {
                NoSignal = 0, ///< value <b>no signal</b>.
                Searching = 1, ///< value <b>searching signal</b>.
                Acquired = 2, ///< value <b>signal acquired</b>.
                DetectedUnusable = 3, ///< value <b>signal detected but unusable</b>.
                CodeLocked = 4, ///< value <b>code locked</b>.
                CodeCarrierLocked = 5, ///< value <b>code and carrier locked</b>.
                CodeCarrierLocked2 = 6, ///< value <b>code and carrier locked</b>.
                CodeCarrierLocked3 = 7, ///< value <b>code and carrier locked</b>.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 7, ///< Last defined value.
                ValuesLimit = 8, ///< Upper limit for defined values.
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
            struct QualityCommon
            {
                /// @brief Retrieve name of the enum value
                static const char* valueName(QualityVal val)
                {
                    static const char* Map[] = {
                        "no signal",
                        "searching signal",
                        "signal acquired",
                        "signal detected but unusable",
                        "code locked",
                        "code and carrier locked",
                        "code and carrier locked",
                        "code and carrier locked"
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

/// @brief Fields of @ref NavSvinfo.
/// @tparam TOpt Extra options
/// @see @ref NavSvinfo
/// @headerfile "ublox/message/NavSvinfo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavSvinfoFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
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
    
    /// @brief Scope for all the member fields of @ref GlobalFlags bitfield.
    struct GlobalFlagsMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGen field.
        using ChipGenVal = ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenVal;
        
        /// @brief Definition of <b>"chipGen"</b> field.
        /// @see @ref ublox::message::NavSvinfoFields::GlobalFlagsMembers::ChipGenVal
        struct ChipGen : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ChipGenVal,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 4>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "chipGen";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ChipGenVal val)
            {
                return ublox::message::NavSvinfoFieldsCommon::GlobalFlagsMembersCommon::ChipGenCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"reserved"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        struct Reserved : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>,
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
               ChipGen,
               Reserved
            >;
    };
    
    /// @brief Definition of <b>"globalFlags"</b> field.
    class GlobalFlags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename GlobalFlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename GlobalFlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_chipGen() - for GlobalFlagsMembers::ChipGen member field.
        ///     @li @b field_reserved() - for GlobalFlagsMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            chipGen,
            reserved
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "globalFlags";
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
            /// @brief Definition of <b>"chn"</b> field.
            struct Chn : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "chn";
                }
                
            };
            
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
            class Flags : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<1U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<1U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_svUsed, @b getBitValue_svUsed() and @b setBitValue_svUsed().
                ///      @li @b BitIdx_diffCorr, @b getBitValue_diffCorr() and @b setBitValue_diffCorr().
                ///      @li @b BitIdx_orbitAvail, @b getBitValue_orbitAvail() and @b setBitValue_orbitAvail().
                ///      @li @b BitIdx_orbitEph, @b getBitValue_orbitEph() and @b setBitValue_orbitEph().
                ///      @li @b BitIdx_unhealthy, @b getBitValue_unhealthy() and @b setBitValue_unhealthy().
                ///      @li @b BitIdx_orbitAlm, @b getBitValue_orbitAlm() and @b setBitValue_orbitAlm().
                ///      @li @b BitIdx_orbitAop, @b getBitValue_orbitAop() and @b setBitValue_orbitAop().
                ///      @li @b BitIdx_smoothed, @b getBitValue_smoothed() and @b setBitValue_smoothed().
                COMMS_BITMASK_BITS_SEQ(
                    svUsed,
                    diffCorr,
                    orbitAvail,
                    orbitEph,
                    unhealthy,
                    orbitAlm,
                    orbitAop,
                    smoothed
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
                        ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::FlagsCommon::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief Values enumerator for
            ///     @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::Quality field.
            using QualityVal = ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityVal;
            
            /// @brief Definition of <b>"quality"</b> field.
            /// @see @ref ublox::message::NavSvinfoFields::ListMembers::ElementMembers::QualityVal
            struct Quality : public
                comms::field::EnumValue<
                    ublox::field::FieldBase<>,
                    QualityVal,
                    comms::option::def::ValidNumValueRange<0, 7>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "quality";
                }
                
                /// @brief Retrieve name of the enum value
                static const char* valueName(QualityVal val)
                {
                    return ublox::message::NavSvinfoFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityCommon::valueName(val);
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
            
            /// @brief Definition of <b>"elev"</b> field.
            struct Elev : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "elev";
                }
                
            };
            
            /// @brief Definition of <b>"azim"</b> field.
            struct Azim : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "azim";
                }
                
            };
            
            /// @brief Definition of <b>"prRes"</b> field.
            struct PrRes : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "prRes";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Chn,
                   Svid,
                   Flags,
                   Quality,
                   Cno,
                   Elev,
                   Azim,
                   PrRes
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
            ///     @li @b field_chn() - for ElementMembers::Chn member field.
            ///     @li @b field_svid() - for ElementMembers::Svid member field.
            ///     @li @b field_flags() - for ElementMembers::Flags member field.
            ///     @li @b field_quality() - for ElementMembers::Quality member field.
            ///     @li @b field_cno() - for ElementMembers::Cno member field.
            ///     @li @b field_elev() - for ElementMembers::Elev member field.
            ///     @li @b field_azim() - for ElementMembers::Azim member field.
            ///     @li @b field_prRes() - for ElementMembers::PrRes member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                chn,
                svid,
                flags,
                quality,
                cno,
                elev,
                azim,
                prRes
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
            typename TOpt::message::NavSvinfoFields::List,
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
        NumCh,
        GlobalFlags,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-SVINFO"</b> message class.
/// @details
///     See @ref NavSvinfoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavSvinfo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavSvinfo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSvinfo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvinfo>,
        comms::option::def::FieldsImpl<typename NavSvinfoFields<TOpt>::All>,
        comms::option::def::MsgType<NavSvinfo<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSvinfo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavSvinfo>,
            comms::option::def::FieldsImpl<typename NavSvinfoFields<TOpt>::All>,
            comms::option::def::MsgType<NavSvinfo<TMsgBase, TOpt> >,
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
    ///     @li @b field_itow() for @ref NavSvinfoFields::Itow field.
    ///     @li @b field_numCh() for @ref NavSvinfoFields::NumCh field.
    ///     @li @b field_globalFlags() for @ref NavSvinfoFields::GlobalFlags field.
    ///     @li @b field_reserved1() for @ref NavSvinfoFields::Reserved1 field.
    ///     @li @b field_list() for @ref NavSvinfoFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        numCh,
        globalFlags,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-SVINFO";
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


