/// @file
/// @brief Contains definition of <b>"MON-SMGR"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonSmgrFields.
/// @see @ref MonSmgrFields
/// @headerfile "ublox/message/MonSmgr.h"
struct MonSmgrFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonSmgrFields::IntOsc bitfield.
    struct IntOscMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
        enum class IntOscStateVal : std::uint8_t
        {
            Autonomous = 0, ///< value @b Autonomous
            Ongoing = 1, ///< value @b Ongoing
            Steered = 2, ///< value @b Steered
            Idle = 4, ///< value @b Idle
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 4, ///< Last defined value.
            ValuesLimit = 5, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
        struct IntOscStateCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(IntOscStateVal val)
            {
                static const char* Map[] = {
                    "Autonomous",
                    "Ongoing",
                    "Steered",
                    nullptr,
                    "Idle"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "intOscCalib",
                    "intOscDisc"
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
    ///     @ref ublox::message::MonSmgrFields::ExtOsc bitfield.
    struct ExtOscMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
        enum class ExtOscStateVal : std::uint8_t
        {
            Autonomous = 0, ///< value @b Autonomous
            Ongoing = 1, ///< value @b Ongoing
            Steered = 2, ///< value @b Steered
            Idle = 4, ///< value @b Idle
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 4, ///< Last defined value.
            ValuesLimit = 5, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
        struct ExtOscStateCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(ExtOscStateVal val)
            {
                static const char* Map[] = {
                    "Autonomous",
                    "Ongoing",
                    "Steered",
                    nullptr,
                    "Idle"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "extOscCalib",
                    "extOscDisc"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
    enum class DiscSrcVal : std::uint8_t
    {
        Internal = 0, ///< value @b Internal
        GNSS = 1, ///< value @b GNSS
        EXTINT0 = 2, ///< value @b EXTINT0
        EXTINT1 = 3, ///< value @b EXTINT1
        HostInternal = 4, ///< value @b HostInternal
        HostExternal = 5, ///< value @b HostExternal
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 5, ///< Last defined value.
        ValuesLimit = 6, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
    struct DiscSrcCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(DiscSrcVal val)
        {
            static const char* Map[] = {
                "Internal",
                "GNSS",
                "EXTINT0",
                "EXTINT1",
                "HostInternal",
                "HostExternal"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::Gnss field.
    struct GnssCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "gnssAvail"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::ExtInt0 field.
    struct ExtInt0Common
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "extInt0Avail",
                "extInt0Type",
                "extInt0FeedBack"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonSmgrFields::ExtInt1 field.
    struct ExtInt1Common
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "extInt1Avail",
                "extInt1Type",
                "extInt1FeedBack"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref MonSmgr.
/// @tparam TOpt Extra options
/// @see @ref MonSmgr
/// @headerfile "ublox/message/MonSmgr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonSmgrFields
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
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Scope for all the member fields of @ref IntOsc bitfield.
    struct IntOscMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscState field.
        using IntOscStateVal = ublox::message::MonSmgrFieldsCommon::IntOscMembersCommon::IntOscStateVal;
        
        /// @brief Definition of <b>"intOscState"</b> field.
        /// @see @ref ublox::message::MonSmgrFields::IntOscMembers::IntOscStateVal
        struct IntOscState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                IntOscStateVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<4>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "intOscState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(IntOscStateVal val)
            {
                return ublox::message::MonSmgrFieldsCommon::IntOscMembersCommon::IntOscStateCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<12U>,
                comms::option::def::BitmaskReservedBits<0xFFCU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<12U>,
                    comms::option::def::BitmaskReservedBits<0xFFCU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_intOscCalib, @b getBitValue_intOscCalib() and @b setBitValue_intOscCalib().
            ///      @li @b BitIdx_intOscDisc, @b getBitValue_intOscDisc() and @b setBitValue_intOscDisc().
            COMMS_BITMASK_BITS_SEQ(
                intOscCalib,
                intOscDisc
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
                    ublox::message::MonSmgrFieldsCommon::IntOscMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               IntOscState,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"intOsc"</b> field.
    class IntOsc : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename IntOscMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename IntOscMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_intOscState() - for IntOscMembers::IntOscState member field.
        ///     @li @b field_bits() - for IntOscMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            intOscState,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "intOsc";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref ExtOsc bitfield.
    struct ExtOscMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscState field.
        using ExtOscStateVal = ublox::message::MonSmgrFieldsCommon::ExtOscMembersCommon::ExtOscStateVal;
        
        /// @brief Definition of <b>"extOscState"</b> field.
        /// @see @ref ublox::message::MonSmgrFields::ExtOscMembers::ExtOscStateVal
        struct ExtOscState : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                ExtOscStateVal,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<4>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "extOscState";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ExtOscStateVal val)
            {
                return ublox::message::MonSmgrFieldsCommon::ExtOscMembersCommon::ExtOscStateCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<12U>,
                comms::option::def::BitmaskReservedBits<0xFFCU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<12U>,
                    comms::option::def::BitmaskReservedBits<0xFFCU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_extOscCalib, @b getBitValue_extOscCalib() and @b setBitValue_extOscCalib().
            ///      @li @b BitIdx_extOscDisc, @b getBitValue_extOscDisc() and @b setBitValue_extOscDisc().
            COMMS_BITMASK_BITS_SEQ(
                extOscCalib,
                extOscDisc
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
                    ublox::message::MonSmgrFieldsCommon::ExtOscMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               ExtOscState,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"extOsc"</b> field.
    class ExtOsc : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ExtOscMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ExtOscMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_extOscState() - for ExtOscMembers::ExtOscState member field.
        ///     @li @b field_bits() - for ExtOscMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            extOscState,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "extOsc";
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonSmgrFields::DiscSrc field.
    using DiscSrcVal = ublox::message::MonSmgrFieldsCommon::DiscSrcVal;
    
    /// @brief Definition of <b>"discSrc"</b> field.
    /// @see @ref ublox::message::MonSmgrFields::DiscSrcVal
    struct DiscSrc : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            DiscSrcVal,
            comms::option::def::ValidNumValueRange<0, 5>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "discSrc";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(DiscSrcVal val)
        {
            return ublox::message::MonSmgrFieldsCommon::DiscSrcCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"gnss"</b> field.
    class Gnss : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_gnssAvail, @b getBitValue_gnssAvail() and @b setBitValue_gnssAvail().
        COMMS_BITMASK_BITS_SEQ(
            gnssAvail
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "gnss";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonSmgrFieldsCommon::GnssCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"extInt0"</b> field.
    class ExtInt0 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_extInt0Avail, @b getBitValue_extInt0Avail() and @b setBitValue_extInt0Avail().
        ///      @li @b BitIdx_extInt0Type, @b getBitValue_extInt0Type() and @b setBitValue_extInt0Type().
        ///      @li @b BitIdx_extInt0FeedBack, @b getBitValue_extInt0FeedBack() and @b setBitValue_extInt0FeedBack().
        COMMS_BITMASK_BITS_SEQ(
            extInt0Avail,
            extInt0Type,
            extInt0FeedBack
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "extInt0";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonSmgrFieldsCommon::ExtInt0Common::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"extInt1"</b> field.
    class ExtInt1 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_extInt1Avail, @b getBitValue_extInt1Avail() and @b setBitValue_extInt1Avail().
        ///      @li @b BitIdx_extInt1Type, @b getBitValue_extInt1Type() and @b setBitValue_extInt1Type().
        ///      @li @b BitIdx_extInt1FeedBack, @b getBitValue_extInt1FeedBack() and @b setBitValue_extInt1FeedBack().
        COMMS_BITMASK_BITS_SEQ(
            extInt1Avail,
            extInt1Type,
            extInt1FeedBack
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "extInt1";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonSmgrFieldsCommon::ExtInt1Common::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        IntOsc,
        ExtOsc,
        DiscSrc,
        Gnss,
        ExtInt0,
        ExtInt1
    >;
};

/// @brief Definition of <b>"MON-SMGR"</b> message class.
/// @details
///     See @ref MonSmgrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonSmgr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonSmgr : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonSmgr,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonSmgr>,
        comms::option::def::FieldsImpl<typename MonSmgrFields<TOpt>::All>,
        comms::option::def::MsgType<MonSmgr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonSmgr,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonSmgr>,
            comms::option::def::FieldsImpl<typename MonSmgrFields<TOpt>::All>,
            comms::option::def::MsgType<MonSmgr<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref MonSmgrFields::Version field.
    ///     @li @b field_reserved1() for @ref MonSmgrFields::Reserved1 field.
    ///     @li @b field_itow() for @ref MonSmgrFields::Itow field.
    ///     @li @b field_intOsc() for @ref MonSmgrFields::IntOsc field.
    ///     @li @b field_extOsc() for @ref MonSmgrFields::ExtOsc field.
    ///     @li @b field_discSrc() for @ref MonSmgrFields::DiscSrc field.
    ///     @li @b field_gnss() for @ref MonSmgrFields::Gnss field.
    ///     @li @b field_extInt0() for @ref MonSmgrFields::ExtInt0 field.
    ///     @li @b field_extInt1() for @ref MonSmgrFields::ExtInt1 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        itow,
        intOsc,
        extOsc,
        discSrc,
        gnss,
        extInt0,
        extInt1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-SMGR";
    }
    
    
};

} // namespace message

} // namespace ublox


