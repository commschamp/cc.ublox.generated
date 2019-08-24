/// @file
/// @brief Contains definition of <b>"CFG-TMODE3"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res8.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgTmode3Fields.
/// @see @ref CfgTmode3Fields
/// @headerfile "ublox/message/CfgTmode3.h"
struct CfgTmode3FieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgTmode3Fields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
        enum class ModeVal : std::uint8_t
        {
            Disabled = 0, ///< value @b Disabled
            SurveyIn = 1, ///< value <b>Survey In</b>.
            FixedMode = 2, ///< value <b>Fixed Mode</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
        struct ModeCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(ModeVal val)
            {
                static const char* Map[] = {
                    "Disabled",
                    "Survey In",
                    "Fixed Mode"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "lla"
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

/// @brief Fields of @ref CfgTmode3.
/// @tparam TOpt Extra options
/// @see @ref CfgTmode3
/// @headerfile "ublox/message/CfgTmode3.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgTmode3Fields
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
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgTmode3Fields::FlagsMembers::Mode field.
        using ModeVal = ublox::message::CfgTmode3FieldsCommon::FlagsMembersCommon::ModeVal;
        
        /// @brief Definition of <b>"mode"</b> field.
        /// @see @ref ublox::message::CfgTmode3Fields::FlagsMembers::ModeVal
        struct Mode : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ModeVal,
                comms::option::def::FixedBitLength<8U>,
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
                return ublox::message::CfgTmode3FieldsCommon::FlagsMembersCommon::ModeCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<8U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<8U>,
                    comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_lla, @b getBitValue_lla() and @b setBitValue_lla().
            COMMS_BITMASK_BITS_SEQ(
                lla
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
                    ublox::message::CfgTmode3FieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Mode,
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
        ///     @li @b field_mode() - for FlagsMembers::Mode member field.
        ///     @li @b field_bits() - for FlagsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            mode,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Ecef optional.
    struct EcefMembers
    {
        /// @brief Scope for all the member fields of @ref EcefWrap bundle.
        struct EcefWrapMembers
        {
            /// @brief Definition of <b>"ecefX"</b> field.
            struct EcefX : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefX";
                }
                
            };
            
            /// @brief Definition of <b>"ecefY"</b> field.
            struct EcefY : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefY";
                }
                
            };
            
            /// @brief Definition of <b>"ecefZ"</b> field.
            struct EcefZ : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefZ";
                }
                
            };
            
            /// @brief Definition of <b>"ecefXHP"</b> field.
            struct EcefXHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 10>,
                    comms::option::def::UnitsMillimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefXHP";
                }
                
            };
            
            /// @brief Definition of <b>"ecefYHP"</b> field.
            struct EcefYHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 10>,
                    comms::option::def::UnitsMillimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefYHP";
                }
                
            };
            
            /// @brief Definition of <b>"ecefZHP"</b> field.
            struct EcefZHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 10>,
                    comms::option::def::UnitsMillimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "ecefZHP";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   EcefX,
                   EcefY,
                   EcefZ,
                   EcefXHP,
                   EcefYHP,
                   EcefZHP
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class EcefWrap : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename EcefWrapMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename EcefWrapMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_ecefX() - for EcefWrapMembers::EcefX member field.
            ///     @li @b field_ecefY() - for EcefWrapMembers::EcefY member field.
            ///     @li @b field_ecefZ() - for EcefWrapMembers::EcefZ member field.
            ///     @li @b field_ecefXHP() - for EcefWrapMembers::EcefXHP member field.
            ///     @li @b field_ecefYHP() - for EcefWrapMembers::EcefYHP member field.
            ///     @li @b field_ecefZHP() - for EcefWrapMembers::EcefZHP member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                ecefX,
                ecefY,
                ecefZ,
                ecefXHP,
                ecefYHP,
                ecefZHP
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"ecef"</b> field.
    struct Ecef : public
        comms::field::Optional<
            typename EcefMembers::EcefWrap,
            comms::option::def::ExistsByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ecef";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Lla optional.
    struct LlaMembers
    {
        /// @brief Scope for all the member fields of @ref LlaWrap bundle.
        struct LlaWrapMembers
        {
            /// @brief Definition of <b>"lat"</b> field.
            struct Lat : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 10000000L>,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "lat";
                }
                
            };
            
            /// @brief Definition of <b>"lon"</b> field.
            struct Lon : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 10000000L>,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "lon";
                }
                
            };
            
            /// @brief Definition of <b>"alt"</b> field.
            struct Alt : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::UnitsCentimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "alt";
                }
                
            };
            
            /// @brief Definition of <b>"latHP"</b> field.
            struct LatHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 1000000000L>,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "latHP";
                }
                
            };
            
            /// @brief Definition of <b>"lonHP"</b> field.
            struct LonHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 1000000000L>,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "lonHP";
                }
                
            };
            
            /// @brief Definition of <b>"altHP"</b> field.
            struct AltHP : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int8_t,
                    comms::option::def::ScalingRatio<1, 10>,
                    comms::option::def::UnitsMillimeters
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "altHP";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Lat,
                   Lon,
                   Alt,
                   LatHP,
                   LonHP,
                   AltHP
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class LlaWrap : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename LlaWrapMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename LlaWrapMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_lat() - for LlaWrapMembers::Lat member field.
            ///     @li @b field_lon() - for LlaWrapMembers::Lon member field.
            ///     @li @b field_alt() - for LlaWrapMembers::Alt member field.
            ///     @li @b field_latHP() - for LlaWrapMembers::LatHP member field.
            ///     @li @b field_lonHP() - for LlaWrapMembers::LonHP member field.
            ///     @li @b field_altHP() - for LlaWrapMembers::AltHP member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                lat,
                lon,
                alt,
                latHP,
                lonHP,
                altHP
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"lla"</b> field.
    struct Lla : public
        comms::field::Optional<
            typename LlaMembers::LlaWrap,
            comms::option::def::MissingByDefault
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lla";
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
    
    /// @brief Definition of <b>"fixedPosAcc"</b> field.
    struct FixedPosAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fixedPosAcc";
        }
        
    };
    
    /// @brief Definition of <b>"svinMinDur"</b> field.
    struct SvinMinDur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinMinDur";
        }
        
    };
    
    /// @brief Definition of <b>"svinVarLimit"</b> field.
    struct SvinVarLimit : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svinVarLimit";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Flags,
        Ecef,
        Lla,
        Reserved2,
        FixedPosAcc,
        SvinMinDur,
        SvinVarLimit,
        Reserved3
    >;
};

/// @brief Definition of <b>"CFG-TMODE3"</b> message class.
/// @details
///     See @ref CfgTmode3Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgTmode3.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgTmode3 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode3>,
        comms::option::def::FieldsImpl<typename CfgTmode3Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgTmode3<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgTmode3>,
            comms::option::def::FieldsImpl<typename CfgTmode3Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgTmode3<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref CfgTmode3Fields::Version field.
    ///     @li @b field_reserved1() for @ref CfgTmode3Fields::Reserved1 field.
    ///     @li @b field_flags() for @ref CfgTmode3Fields::Flags field.
    ///     @li @b field_ecef() for @ref CfgTmode3Fields::Ecef field.
    ///     @li @b field_lla() for @ref CfgTmode3Fields::Lla field.
    ///     @li @b field_reserved2() for @ref CfgTmode3Fields::Reserved2 field.
    ///     @li @b field_fixedPosAcc() for @ref CfgTmode3Fields::FixedPosAcc field.
    ///     @li @b field_svinMinDur() for @ref CfgTmode3Fields::SvinMinDur field.
    ///     @li @b field_svinVarLimit() for @ref CfgTmode3Fields::SvinVarLimit field.
    ///     @li @b field_reserved3() for @ref CfgTmode3Fields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        flags,
        ecef,
        lla,
        reserved2,
        fixedPosAcc,
        svinMinDur,
        svinVarLimit,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 25U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 55U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-TMODE3";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_ecef>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        refresh_optionals();
        
        return Base::template doReadFrom<FieldIdx_ecef>(iter, len);
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_optionals() || updated;
        return updated;
    }
    
    
private:
    bool refresh_optionals()
    {
        bool updated = false;
        auto ecefMode = comms::field::OptionalMode::Exists;
        auto llaMode = comms::field::OptionalMode::Missing;    
        if (field_flags().field_bits().getBitValue_lla()) {
            std::swap(ecefMode, llaMode);
        }
        
        if (field_ecef().getMode() != ecefMode) {
            field_ecef().setMode(ecefMode);
            updated = true;
        }
        
        if (field_lla().getMode() != llaMode) {
            field_lla().setMode(llaMode);
            updated = true;
        }    
        
        return updated;
    }
        
    
};

} // namespace message

} // namespace ublox


