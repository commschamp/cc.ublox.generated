/// @file
/// @brief Contains definition of <b>"CFG-ITFM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgItfmFields.
/// @see @ref CfgItfmFields
/// @headerfile "ublox/message/CfgItfm.h"
struct CfgItfmFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgItfmFields::Config bitfield.
    struct ConfigMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgItfmFields::ConfigMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "enable"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgItfmFields::Config2 bitfield.
    struct Config2MembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
        enum class AntSettingVal : std::uint8_t
        {
            Unknown = 0, ///< value @b Unknown
            Passive = 1, ///< value @b Passive
            Active = 2, ///< value @b Active
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
        struct AntSettingCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(AntSettingVal val)
            {
                static const char* Map[] = {
                    "Unknown",
                    "Passive",
                    "Active"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "enable2"
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

/// @brief Fields of @ref CfgItfm.
/// @tparam TOpt Extra options
/// @see @ref CfgItfm
/// @headerfile "ublox/message/CfgItfm.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgItfmFields
{
    /// @brief Scope for all the member fields of @ref Config bitfield.
    struct ConfigMembers
    {
        /// @brief Definition of <b>"bbThreshold"</b> field.
        struct BbThreshold : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<4U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "bbThreshold";
            }
            
        };
        
        /// @brief Definition of <b>"cwThreshold"</b> field.
        struct CwThreshold : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "cwThreshold";
            }
            
        };
        
        /// @brief Definition of <b>"algorithmBits"</b> field.
        struct AlgorithmBits : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::FixedBitLength<22U>,
                comms::option::def::DefaultNumValue<1487190L>,
                comms::option::def::ValidNumValue<1487190L>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "algorithmBits";
            }
            
        };
        
        /// @brief Definition of <b>"bits"</b> field.
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
            ///      @li @b BitIdx_enable, @b getBitValue_enable() and @b setBitValue_enable().
            COMMS_BITMASK_BITS_SEQ(
                enable
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "bits";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::CfgItfmFieldsCommon::ConfigMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BbThreshold,
               CwThreshold,
               AlgorithmBits,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"config"</b> field.
    class Config : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ConfigMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ConfigMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_bbThreshold() - for ConfigMembers::BbThreshold member field.
        ///     @li @b field_cwThreshold() - for ConfigMembers::CwThreshold member field.
        ///     @li @b field_algorithmBits() - for ConfigMembers::AlgorithmBits member field.
        ///     @li @b field_bits() - for ConfigMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bbThreshold,
            cwThreshold,
            algorithmBits,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "config";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Config2 bitfield.
    struct Config2Members
    {
        /// @brief Definition of <b>"generalBits"</b> field.
        struct GeneralBits : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::FixedBitLength<12U>,
                comms::option::def::DefaultNumValue<798>,
                comms::option::def::ValidNumValue<798>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "generalBits";
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgItfmFields::Config2Members::AntSetting field.
        using AntSettingVal = ublox::message::CfgItfmFieldsCommon::Config2MembersCommon::AntSettingVal;
        
        /// @brief Definition of <b>"antSetting"</b> field.
        /// @see @ref ublox::message::CfgItfmFields::Config2Members::AntSettingVal
        struct AntSetting : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                AntSettingVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "antSetting";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(AntSettingVal val)
            {
                return ublox::message::CfgItfmFieldsCommon::Config2MembersCommon::AntSettingCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>"bitsHigh"</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<18U>,
                comms::option::def::BitmaskReservedBits<0x3FFFEUL, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<18U>,
                    comms::option::def::BitmaskReservedBits<0x3FFFEUL, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_enable2, @b getBitValue_enable2() and @b setBitValue_enable2().
            COMMS_BITMASK_BITS_SEQ(
                enable2
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "bitsHigh";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::CfgItfmFieldsCommon::Config2MembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               GeneralBits,
               AntSetting,
               BitsHigh
            >;
    };
    
    /// @brief Definition of <b>"config2"</b> field.
    class Config2 : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename Config2Members::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename Config2Members::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_generalBits() - for Config2Members::GeneralBits member field.
        ///     @li @b field_antSetting() - for Config2Members::AntSetting member field.
        ///     @li @b field_bitsHigh() - for Config2Members::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            generalBits,
            antSetting,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "config2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Config,
        Config2
    >;
};

/// @brief Definition of <b>"CFG-ITFM"</b> message class.
/// @details
///     See @ref CfgItfmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgItfm.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgItfm : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgItfm>,
        comms::option::def::FieldsImpl<typename CfgItfmFields<TOpt>::All>,
        comms::option::def::MsgType<CfgItfm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgItfm>,
            comms::option::def::FieldsImpl<typename CfgItfmFields<TOpt>::All>,
            comms::option::def::MsgType<CfgItfm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_config() for @ref CfgItfmFields::Config field.
    ///     @li @b field_config2() for @ref CfgItfmFields::Config2 field.
    COMMS_MSG_FIELDS_ACCESS(
        config,
        config2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-ITFM";
    }
    
    
};

} // namespace message

} // namespace ublox


