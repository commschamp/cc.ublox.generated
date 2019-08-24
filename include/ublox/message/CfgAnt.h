/// @file
/// @brief Contains definition of <b>"CFG-ANT"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgAntFields.
/// @see @ref CfgAntFields
/// @headerfile "ublox/message/CfgAnt.h"
struct CfgAntFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgAntFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "svcs",
                "scd",
                "ocd",
                "pdwnOnSCD",
                "recovery"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgAntFields::Pins bitfield.
    struct PinsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::CfgAntFields::PinsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "reconfig"
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

/// @brief Fields of @ref CfgAnt.
/// @tparam TOpt Extra options
/// @see @ref CfgAnt
/// @headerfile "ublox/message/CfgAnt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgAntFields
{
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFE0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<2U>,
                comms::option::def::BitmaskReservedBits<0xFFE0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_svcs, @b getBitValue_svcs() and @b setBitValue_svcs().
        ///      @li @b BitIdx_scd, @b getBitValue_scd() and @b setBitValue_scd().
        ///      @li @b BitIdx_ocd, @b getBitValue_ocd() and @b setBitValue_ocd().
        ///      @li @b BitIdx_pdwnOnSCD, @b getBitValue_pdwnOnSCD() and @b setBitValue_pdwnOnSCD().
        ///      @li @b BitIdx_recovery, @b getBitValue_recovery() and @b setBitValue_recovery().
        COMMS_BITMASK_BITS_SEQ(
            svcs,
            scd,
            ocd,
            pdwnOnSCD,
            recovery
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
                ublox::message::CfgAntFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Pins bitfield.
    struct PinsMembers
    {
        /// @brief Definition of <b>"pinSwitch"</b> field.
        struct PinSwitch : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "pinSwitch";
            }
            
        };
        
        /// @brief Definition of <b>"pinSCD"</b> field.
        struct PinSCD : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "pinSCD";
            }
            
        };
        
        /// @brief Definition of <b>"pinOCD"</b> field.
        struct PinOCD : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<5U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "pinOCD";
            }
            
        };
        
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
            ///      @li @b BitIdx_reconfig, @b getBitValue_reconfig() and @b setBitValue_reconfig().
            COMMS_BITMASK_BITS_SEQ(
                reconfig
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
                    ublox::message::CfgAntFieldsCommon::PinsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               PinSwitch,
               PinSCD,
               PinOCD,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"pins"</b> field.
    class Pins : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename PinsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename PinsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_pinSwitch() - for PinsMembers::PinSwitch member field.
        ///     @li @b field_pinSCD() - for PinsMembers::PinSCD member field.
        ///     @li @b field_pinOCD() - for PinsMembers::PinOCD member field.
        ///     @li @b field_bits() - for PinsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            pinSwitch,
            pinSCD,
            pinOCD,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "pins";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        Pins
    >;
};

/// @brief Definition of <b>"CFG-ANT"</b> message class.
/// @details
///     See @ref CfgAntFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgAnt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgAnt : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgAnt>,
        comms::option::def::FieldsImpl<typename CfgAntFields<TOpt>::All>,
        comms::option::def::MsgType<CfgAnt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgAnt>,
            comms::option::def::FieldsImpl<typename CfgAntFields<TOpt>::All>,
            comms::option::def::MsgType<CfgAnt<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref CfgAntFields::Flags field.
    ///     @li @b field_pins() for @ref CfgAntFields::Pins field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        pins
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 4U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-ANT";
    }
    
    
};

} // namespace message

} // namespace ublox


