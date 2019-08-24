/// @file
/// @brief Contains definition of <b>"NAV-ORB"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavOrbFields.
/// @see @ref NavOrbFields
/// @headerfile "ublox/message/NavOrb.h"
struct NavOrbFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavOrbFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::NavOrbFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlag bitfield.
            struct SvFlagMembersCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                enum class HealthVal : std::uint8_t
                {
                    Unknown = 0, ///< value @b Unknown
                    Healthy = 1, ///< value @b Healthy
                    NotHealthy = 2, ///< value <b>Not healty</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 2, ///< Last defined value.
                    ValuesLimit = 3, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                struct HealthCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(HealthVal val)
                    {
                        static const char* Map[] = {
                            "Unknown",
                            "Healthy",
                            "Not healty"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                enum class VisibilityVal : std::uint8_t
                {
                    Unknown = 0, ///< value @b Unknown
                    BelowHorizon = 1, ///< value <b>Below horizon</b>.
                    AboveHorizon = 2, ///< value <b>Above horizon</b>.
                    AboveElevMask = 3, ///< value <b>Above elevation mask</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 3, ///< Last defined value.
                    ValuesLimit = 4, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                struct VisibilityCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(VisibilityVal val)
                    {
                        static const char* Map[] = {
                            "Unknown",
                            "Below horizon",
                            "Above horizon",
                            "Above elevation mask"
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
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Eph bitfield.
            struct EphMembersCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                enum class EphSourceVal : std::uint8_t
                {
                    NotAvailable = 0, ///< value <b>Not available</b>.
                    GNSS = 1, ///< value <b>GNSS transmission</b>.
                    ExternalAiding = 2, ///< value <b>External aiding</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 2, ///< Last defined value.
                    ValuesLimit = 3, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                struct EphSourceCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(EphSourceVal val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "GNSS transmission",
                            "External aiding"
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
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::Alm bitfield.
            struct AlmMembersCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                enum class AlmSourceVal : std::uint8_t
                {
                    NotAvailable = 0, ///< value <b>Not available</b>.
                    GNSS = 1, ///< value <b>GNSS transmission</b>.
                    ExternalAiding = 2, ///< value <b>External aiding</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 2, ///< Last defined value.
                    ValuesLimit = 3, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                struct AlmSourceCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(AlmSourceVal val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "GNSS transmission",
                            "External aiding"
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
            ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrb bitfield.
            struct OtherOrbMembersCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                enum class TypeVal : std::uint8_t
                {
                    NotAvailable = 0, ///< value <b>Not available</b>.
                    OfflineData = 1, ///< value <b>Offline data</b>.
                    AutonomousData = 2, ///< value <b>Autonomous data</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 2, ///< Last defined value.
                    ValuesLimit = 3, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                struct TypeCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(TypeVal val)
                    {
                        static const char* Map[] = {
                            "Not available",
                            "Offline data",
                            "Autonomous data"
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
    
};

/// @brief Fields of @ref NavOrb.
/// @tparam TOpt Extra options
/// @see @ref NavOrb
/// @headerfile "ublox/message/NavOrb.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavOrbFields
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
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"numSv"</b> field.
    struct NumSv : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSv";
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
            
            /// @brief Scope for all the member fields of @ref SvFlag bitfield.
            struct SvFlagMembers
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Health field.
                using HealthVal = ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthVal;
                
                /// @brief Definition of <b>"health"</b> field.
                /// @see @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::HealthVal
                struct Health : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        HealthVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "health";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(HealthVal val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::HealthCommon::valueName(val);
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::Visibility field.
                using VisibilityVal = ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityVal;
                
                /// @brief Definition of <b>"visibility"</b> field.
                /// @see @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::SvFlagMembers::VisibilityVal
                struct Visibility : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        VisibilityVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "visibility";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(VisibilityVal val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::VisibilityCommon::valueName(val);
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                /// @details
                ///     Reserved field with 1 byte length
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>,
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
                       Health,
                       Visibility,
                       Reserved
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
                ///     @li @b field_health() - for SvFlagMembers::Health member field.
                ///     @li @b field_visibility() - for SvFlagMembers::Visibility member field.
                ///     @li @b field_reserved() - for SvFlagMembers::Reserved member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    health,
                    visibility,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "svFlag";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Eph bitfield.
            struct EphMembers
            {
                /// @brief Definition of <b>"ephUsability"</b> field.
                struct EphUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "ephUsability";
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSource field.
                using EphSourceVal = ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceVal;
                
                /// @brief Definition of <b>"ephSource"</b> field.
                /// @see @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::EphMembers::EphSourceVal
                struct EphSource : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        EphSourceVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "ephSource";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(EphSourceVal val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::EphMembersCommon::EphSourceCommon::valueName(val);
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       EphUsability,
                       EphSource
                    >;
            };
            
            /// @brief Definition of <b>"eph"</b> field.
            class Eph : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename EphMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename EphMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_ephUsability() - for EphMembers::EphUsability member field.
                ///     @li @b field_ephSource() - for EphMembers::EphSource member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    ephUsability,
                    ephSource
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "eph";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Alm bitfield.
            struct AlmMembers
            {
                /// @brief Definition of <b>"almUsability"</b> field.
                struct AlmUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "almUsability";
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSource field.
                using AlmSourceVal = ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceVal;
                
                /// @brief Definition of <b>"almSource"</b> field.
                /// @see @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::AlmMembers::AlmSourceVal
                struct AlmSource : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        AlmSourceVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "almSource";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(AlmSourceVal val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::AlmMembersCommon::AlmSourceCommon::valueName(val);
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AlmUsability,
                       AlmSource
                    >;
            };
            
            /// @brief Definition of <b>"alm"</b> field.
            class Alm : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename AlmMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename AlmMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_almUsability() - for AlmMembers::AlmUsability member field.
                ///     @li @b field_almSource() - for AlmMembers::AlmSource member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    almUsability,
                    almSource
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "alm";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref OtherOrb bitfield.
            struct OtherOrbMembers
            {
                /// @brief Definition of <b>"anoAopUsability"</b> field.
                struct AnoAopUsability : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<5U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "anoAopUsability";
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::Type field.
                using TypeVal = ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeVal;
                
                /// @brief Definition of <b>"type"</b> field.
                /// @see @ref ublox::message::NavOrbFields::ListMembers::ElementMembers::OtherOrbMembers::TypeVal
                struct Type : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        TypeVal,
                        comms::option::def::FixedBitLength<3U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "type";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(TypeVal val)
                    {
                        return ublox::message::NavOrbFieldsCommon::ListMembersCommon::ElementMembersCommon::OtherOrbMembersCommon::TypeCommon::valueName(val);
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AnoAopUsability,
                       Type
                    >;
            };
            
            /// @brief Definition of <b>"otherOrb"</b> field.
            class OtherOrb : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename OtherOrbMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename OtherOrbMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_anoAopUsability() - for OtherOrbMembers::AnoAopUsability member field.
                ///     @li @b field_type() - for OtherOrbMembers::Type member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    anoAopUsability,
                    type
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "otherOrb";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   Svid,
                   SvFlag,
                   Eph,
                   Alm,
                   OtherOrb
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
            ///     @li @b field_svFlag() - for ElementMembers::SvFlag member field.
            ///     @li @b field_eph() - for ElementMembers::Eph member field.
            ///     @li @b field_alm() - for ElementMembers::Alm member field.
            ///     @li @b field_otherOrb() - for ElementMembers::OtherOrb member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                gnssId,
                svid,
                svFlag,
                eph,
                alm,
                otherOrb
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
            typename TOpt::message::NavOrbFields::List,
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
        NumSv,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"NAV-ORB"</b> message class.
/// @details
///     See @ref NavOrbFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavOrb.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavOrb : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavOrb,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOrb>,
        comms::option::def::FieldsImpl<typename NavOrbFields<TOpt>::All>,
        comms::option::def::MsgType<NavOrb<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavOrb,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavOrb>,
            comms::option::def::FieldsImpl<typename NavOrbFields<TOpt>::All>,
            comms::option::def::MsgType<NavOrb<TMsgBase, TOpt> >,
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
    ///     @li @b field_itow() for @ref NavOrbFields::Itow field.
    ///     @li @b field_version() for @ref NavOrbFields::Version field.
    ///     @li @b field_numSv() for @ref NavOrbFields::NumSv field.
    ///     @li @b field_reserved1() for @ref NavOrbFields::Reserved1 field.
    ///     @li @b field_list() for @ref NavOrbFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        version,
        numSv,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-ORB";
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
            static_cast<std::size_t>(field_numSv().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numSv().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numSv().value())>::type;
                field_numSv().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


