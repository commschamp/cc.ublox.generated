/// @file
/// @brief Contains definition of <b>"RXM-IMES"</b> message and its fields.

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
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmImesFields.
/// @see @ref RxmImesFields
/// @headerfile "ublox/message/RxmImes.h"
struct RxmImesFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::RxmImesFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::RxmImesFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2 bitfield.
            struct Position1_2MembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position1_2Members::Flags field.
                struct FlagsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "pos1Valid"
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
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1 bitfield.
            struct Position2_1MembersCommon
            {
                /// @brief Values enumerator for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                enum class Pos2AccVal : std::uint8_t
                {
                    Undef = 0, ///< value @b Undef
                    LessThan7 = 1, ///< value <b><7m</b>.
                    LessThan15 = 2, ///< value <b><15m</b>.
                    GreaterThan15 = 3, ///< value <b>>15m</b>.
                    
                    // --- Extra values generated for convenience ---
                    FirstValue = 0, ///< First defined value.
                    LastValue = 3, ///< Last defined value.
                    ValuesLimit = 4, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                struct Pos2AccCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(Pos2AccVal val)
                    {
                        static const char* Map[] = {
                            "Undef",
                            "<7m",
                            "<15m",
                            ">15m"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Bits field.
                struct BitsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "pos2Valid"
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
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrame bitfield.
            struct ShortIdFrameMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::ShortIdFrameMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "shortValid",
                            "shortBoundary"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
            };
            
            /// @brief Common functions for
            ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::MediumId_2 field.
            struct MediumId_2Common
            {
                /// @brief Retrieve name of the bit
                static const char* bitName(std::size_t idx)
                {
                    static const char* Map[] = {
                        "mediumIdMSB",
                        "mediumValid",
                        "mediumboundary"
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

/// @brief Fields of @ref RxmImes.
/// @tparam TOpt Extra options
/// @see @ref RxmImes
/// @headerfile "ublox/message/RxmImes.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmImesFields
{
    /// @brief Definition of <b>"numTx"</b> field.
    struct NumTx : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numTx";
        }
        
    };
    
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
            
            /// @brief Definition of <b>"txId"</b> field.
            struct TxId : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "txId";
                }
                
            };
            
            /// @brief Definition of <b>"reserved3"</b> field.
            struct Reserved3 : public
                ublox::field::Res3<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved3";
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
            
            /// @brief Definition of <b>"reserved4"</b> field.
            struct Reserved4 : public
                ublox::field::Res2<
                    TOpt
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved4";
                }
                
            };
            
            /// @brief Definition of <b>"doppler"</b> field.
            struct Doppler : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<1, 4096>,
                    comms::option::def::UnitsHertz
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "doppler";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Position1_1 bitfield.
            struct Position1_1Members
            {
                /// @brief Definition of <b>"pos1Floor"</b> field.
                struct Pos1Floor : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::int8_t,
                        comms::option::def::FixedBitLength<8U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos1Floor";
                    }
                    
                };
                
                /// @brief Definition of <b>"pos1Lat"</b> field.
                struct Pos1Lat : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::int32_t,
                        comms::option::def::FixedBitLength<23U>,
                        comms::option::def::ScalingRatio<180, 8388608L>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos1Lat";
                    }
                    
                };
                
                /// @brief Definition of <b>"reserved"</b> field.
                struct Reserved : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<1U>
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
                       Pos1Floor,
                       Pos1Lat,
                       Reserved
                    >;
            };
            
            /// @brief Definition of <b>"position1_1"</b> field.
            class Position1_1 : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename Position1_1Members::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename Position1_1Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_pos1Floor() - for Position1_1Members::Pos1Floor member field.
                ///     @li @b field_pos1Lat() - for Position1_1Members::Pos1Lat member field.
                ///     @li @b field_reserved() - for Position1_1Members::Reserved member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    pos1Floor,
                    pos1Lat,
                    reserved
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "position1_1";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Position1_2 bitfield.
            struct Position1_2Members
            {
                /// @brief Definition of <b>"pos1Lon"</b> field.
                struct Pos1Lon : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::int32_t,
                        comms::option::def::FixedBitLength<24U>,
                        comms::option::def::ScalingRatio<360, 16777216L>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos1Lon";
                    }
                    
                };
                
                /// @brief Definition of <b>"flags"</b> field.
                class Flags : public
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
                    ///      @li @b BitIdx_pos1Valid, @b getBitValue_pos1Valid() and @b setBitValue_pos1Valid().
                    COMMS_BITMASK_BITS_SEQ(
                        pos1Valid
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
                            ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::Position1_2MembersCommon::FlagsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Pos1Lon,
                       Flags
                    >;
            };
            
            /// @brief Definition of <b>"position1_2"</b> field.
            class Position1_2 : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename Position1_2Members::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename Position1_2Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_pos1Lon() - for Position1_2Members::Pos1Lon member field.
                ///     @li @b field_flags() - for Position1_2Members::Flags member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    pos1Lon,
                    flags
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "position1_2";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref Position2_1 bitfield.
            struct Position2_1Members
            {
                /// @brief Definition of <b>"pos2Floor"</b> field.
                struct Pos2Floor : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::int16_t,
                        comms::option::def::FixedBitLength<9U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos2Floor";
                    }
                    
                };
                
                /// @brief Definition of <b>"pos2Alt"</b> field.
                struct Pos2Alt : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::int16_t,
                        comms::option::def::FixedBitLength<12U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos2Alt";
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2Acc field.
                using Pos2AccVal = ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::Position2_1MembersCommon::Pos2AccVal;
                
                /// @brief Definition of <b>"pos2Acc"</b> field.
                /// @see @ref ublox::message::RxmImesFields::ListMembers::ElementMembers::Position2_1Members::Pos2AccVal
                struct Pos2Acc : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        Pos2AccVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "pos2Acc";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(Pos2AccVal val)
                    {
                        return ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::Position2_1MembersCommon::Pos2AccCommon::valueName(val);
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<9U>,
                        comms::option::def::BitmaskReservedBits<0x1FEU, 0x0U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<9U>,
                            comms::option::def::BitmaskReservedBits<0x1FEU, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_pos2Valid, @b getBitValue_pos2Valid() and @b setBitValue_pos2Valid().
                    COMMS_BITMASK_BITS_SEQ(
                        pos2Valid
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
                            ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::Position2_1MembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Pos2Floor,
                       Pos2Alt,
                       Pos2Acc,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"position2_1"</b> field.
            class Position2_1 : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename Position2_1Members::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename Position2_1Members::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_pos2Floor() - for Position2_1Members::Pos2Floor member field.
                ///     @li @b field_pos2Alt() - for Position2_1Members::Pos2Alt member field.
                ///     @li @b field_pos2Acc() - for Position2_1Members::Pos2Acc member field.
                ///     @li @b field_bits() - for Position2_1Members::Bits member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    pos2Floor,
                    pos2Alt,
                    pos2Acc,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "position2_1";
                }
                
            };
            
            /// @brief Definition of <b>"lat"</b> field.
            struct Lat : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::int32_t,
                    comms::option::def::ScalingRatio<180, 16777216L>,
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
                    comms::option::def::ScalingRatio<360, 33554432L>,
                    comms::option::def::UnitsDegrees
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "lon";
                }
                
            };
            
            /// @brief Scope for all the member fields of @ref ShortIdFrame bitfield.
            struct ShortIdFrameMembers
            {
                /// @brief Definition of <b>"shortId"</b> field.
                struct ShortId : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint16_t,
                        comms::option::def::FixedBitLength<12U>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "shortId";
                    }
                    
                };
                
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<20U>,
                        comms::option::def::BitmaskReservedBits<0xFFFFCUL, 0x0U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<20U>,
                            comms::option::def::BitmaskReservedBits<0xFFFFCUL, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_shortValid, @b getBitValue_shortValid() and @b setBitValue_shortValid().
                    ///      @li @b BitIdx_shortBoundary, @b getBitValue_shortBoundary() and @b setBitValue_shortBoundary().
                    COMMS_BITMASK_BITS_SEQ(
                        shortValid,
                        shortBoundary
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
                            ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::ShortIdFrameMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       ShortId,
                       Bits
                    >;
            };
            
            /// @brief Definition of <b>"shortIdFrame"</b> field.
            class ShortIdFrame : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename ShortIdFrameMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename ShortIdFrameMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_shortId() - for ShortIdFrameMembers::ShortId member field.
                ///     @li @b field_bits() - for ShortIdFrameMembers::Bits member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    shortId,
                    bits
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "shortIdFrame";
                }
                
            };
            
            /// @brief Definition of <b>"mediumIdLSB"</b> field.
            struct MediumIdLSB : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "mediumIdLSB";
                }
                
            };
            
            /// @brief Definition of <b>"mediumId_2"</b> field.
            class MediumId_2 : public
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedLength<4U>,
                    comms::option::def::BitmaskReservedBits<0xFFFFFFF8UL, 0x0U>
                >
            {
                using Base = 
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedLength<4U>,
                        comms::option::def::BitmaskReservedBits<0xFFFFFFF8UL, 0x0U>
                    >;
            public:
                /// @brief Provides names and generates access functions for internal bits.
                /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                ///     related to @b comms::field::BitmaskValue class from COMMS library
                ///     for details.
                ///
                ///      The generated enum values and functions are:
                ///      @li @b BitIdx_mediumIdMSB, @b getBitValue_mediumIdMSB() and @b setBitValue_mediumIdMSB().
                ///      @li @b BitIdx_mediumValid, @b getBitValue_mediumValid() and @b setBitValue_mediumValid().
                ///      @li @b BitIdx_mediumboundary, @b getBitValue_mediumboundary() and @b setBitValue_mediumboundary().
                COMMS_BITMASK_BITS_SEQ(
                    mediumIdMSB,
                    mediumValid,
                    mediumboundary
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "mediumId_2";
                }
                
                /// @brief Retrieve name of the bit
                static const char* bitName(BitIdx idx)
                {
                    return
                        ublox::message::RxmImesFieldsCommon::ListMembersCommon::ElementMembersCommon::MediumId_2Common::bitName(
                            static_cast<std::size_t>(idx));
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Reserved2,
                   TxId,
                   Reserved3,
                   Cno,
                   Reserved4,
                   Doppler,
                   Position1_1,
                   Position1_2,
                   Position2_1,
                   Lat,
                   Lon,
                   ShortIdFrame,
                   MediumIdLSB,
                   MediumId_2
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
            ///     @li @b field_reserved2() - for ElementMembers::Reserved2 member field.
            ///     @li @b field_txId() - for ElementMembers::TxId member field.
            ///     @li @b field_reserved3() - for ElementMembers::Reserved3 member field.
            ///     @li @b field_cno() - for ElementMembers::Cno member field.
            ///     @li @b field_reserved4() - for ElementMembers::Reserved4 member field.
            ///     @li @b field_doppler() - for ElementMembers::Doppler member field.
            ///     @li @b field_position1_1() - for ElementMembers::Position1_1 member field.
            ///     @li @b field_position1_2() - for ElementMembers::Position1_2 member field.
            ///     @li @b field_position2_1() - for ElementMembers::Position2_1 member field.
            ///     @li @b field_lat() - for ElementMembers::Lat member field.
            ///     @li @b field_lon() - for ElementMembers::Lon member field.
            ///     @li @b field_shortIdFrame() - for ElementMembers::ShortIdFrame member field.
            ///     @li @b field_mediumIdLSB() - for ElementMembers::MediumIdLSB member field.
            ///     @li @b field_mediumId_2() - for ElementMembers::MediumId_2 member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                reserved2,
                txId,
                reserved3,
                cno,
                reserved4,
                doppler,
                position1_1,
                position1_2,
                position2_1,
                lat,
                lon,
                shortIdFrame,
                mediumIdLSB,
                mediumId_2
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
            typename TOpt::message::RxmImesFields::List,
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
        NumTx,
        Version,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"RXM-IMES"</b> message class.
/// @details
///     See @ref RxmImesFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmImes.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmImes : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmImes,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmImes>,
        comms::option::def::FieldsImpl<typename RxmImesFields<TOpt>::All>,
        comms::option::def::MsgType<RxmImes<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmImes,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmImes>,
            comms::option::def::FieldsImpl<typename RxmImesFields<TOpt>::All>,
            comms::option::def::MsgType<RxmImes<TMsgBase, TOpt> >,
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
    ///     @li @b field_numTx() for @ref RxmImesFields::NumTx field.
    ///     @li @b field_version() for @ref RxmImesFields::Version field.
    ///     @li @b field_reserved1() for @ref RxmImesFields::Reserved1 field.
    ///     @li @b field_list() for @ref RxmImesFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        numTx,
        version,
        reserved1,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-IMES";
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
            static_cast<std::size_t>(field_numTx().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_numTx().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numTx().value())>::type;
                field_numTx().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


