/// @file
/// @brief Contains definition of <b>"NAV-RELPOSNED"</b> message and its fields.

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
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavRelposnedFields.
/// @see @ref NavRelposnedFields
/// @headerfile "ublox/message/NavRelposned.h"
struct NavRelposnedFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::NavRelposnedFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::NavRelposnedFields::FlagsMembers::BitsLow field.
        struct BitsLowCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "gnssFixOK",
                    "diffSoln",
                    "relPosValid"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavRelposnedFields::FlagsMembers::CarrSoln field.
        enum class CarrSolnVal : std::uint8_t
        {
            NoCarrier = 0, ///< value <b>No carrier</b>.
            FloatSolution = 1, ///< value <b>Float solution</b>.
            FixedSolution = 2, ///< value <b>Fixed solution</b>.
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavRelposnedFields::FlagsMembers::CarrSoln field.
        struct CarrSolnCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(CarrSolnVal val)
            {
                static const char* Map[] = {
                    "No carrier",
                    "Float solution",
                    "Fixed solution"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::NavRelposnedFields::FlagsMembers::BitsHigh field.
        struct BitsHighCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "isMoving",
                    "refPosMiss",
                    "refObsMiss"
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

/// @brief Fields of @ref NavRelposned.
/// @tparam TOpt Extra options
/// @see @ref NavRelposned
/// @headerfile "ublox/message/NavRelposned.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavRelposnedFields
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
    
    /// @brief Definition of <b>"refStationId"</b> field.
    struct RefStationId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ValidNumValueRange<0, 4095>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "refStationId";
        }
        
    };
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"relPosN"</b> field.
    struct RelPosN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosN";
        }
        
    };
    
    /// @brief Definition of <b>"relPosE"</b> field.
    struct RelPosE : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosE";
        }
        
    };
    
    /// @brief Definition of <b>"relPosD"</b> field.
    struct RelPosD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosD";
        }
        
    };
    
    /// @brief Definition of <b>"relPosHPN"</b> field.
    struct RelPosHPN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosHPN";
        }
        
    };
    
    /// @brief Definition of <b>"relPosHPE"</b> field.
    struct RelPosHPE : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosHPE";
        }
        
    };
    
    /// @brief Definition of <b>"relPosHPD"</b> field.
    struct RelPosHPD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMillimeters,
            comms::option::def::ValidNumValueRange<-99, 99>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "relPosHPD";
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
    
    /// @brief Definition of <b>"accN"</b> field.
    struct AccN : public
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
            return "accN";
        }
        
    };
    
    /// @brief Definition of <b>"accE"</b> field.
    struct AccE : public
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
            return "accE";
        }
        
    };
    
    /// @brief Definition of <b>"accD"</b> field.
    struct AccD : public
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
            return "accD";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<3U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<3U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_gnssFixOK, @b getBitValue_gnssFixOK() and @b setBitValue_gnssFixOK().
            ///      @li @b BitIdx_diffSoln, @b getBitValue_diffSoln() and @b setBitValue_diffSoln().
            ///      @li @b BitIdx_relPosValid, @b getBitValue_relPosValid() and @b setBitValue_relPosValid().
            COMMS_BITMASK_BITS_SEQ(
                gnssFixOK,
                diffSoln,
                relPosValid
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
                    ublox::message::NavRelposnedFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::NavRelposnedFields::FlagsMembers::CarrSoln field.
        using CarrSolnVal = ublox::message::NavRelposnedFieldsCommon::FlagsMembersCommon::CarrSolnVal;
        
        /// @brief Definition of <b>"carrSoln"</b> field.
        /// @see @ref ublox::message::NavRelposnedFields::FlagsMembers::CarrSolnVal
        struct CarrSoln : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                CarrSolnVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "carrSoln";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(CarrSolnVal val)
            {
                return ublox::message::NavRelposnedFieldsCommon::FlagsMembersCommon::CarrSolnCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<27U>,
                comms::option::def::BitmaskReservedBits<0x7FFFFF8UL, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<27U>,
                    comms::option::def::BitmaskReservedBits<0x7FFFFF8UL, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_isMoving, @b getBitValue_isMoving() and @b setBitValue_isMoving().
            ///      @li @b BitIdx_refPosMiss, @b getBitValue_refPosMiss() and @b setBitValue_refPosMiss().
            ///      @li @b BitIdx_refObsMiss, @b getBitValue_refObsMiss() and @b setBitValue_refObsMiss().
            COMMS_BITMASK_BITS_SEQ(
                isMoving,
                refPosMiss,
                refObsMiss
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
                    ublox::message::NavRelposnedFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               CarrSoln,
               BitsHigh
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
        ///     @li @b field_bitsLow() - for FlagsMembers::BitsLow member field.
        ///     @li @b field_carrSoln() - for FlagsMembers::CarrSoln member field.
        ///     @li @b field_bitsHigh() - for FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            bitsLow,
            carrSoln,
            bitsHigh
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        RefStationId,
        Itow,
        RelPosN,
        RelPosE,
        RelPosD,
        RelPosHPN,
        RelPosHPE,
        RelPosHPD,
        Reserved2,
        AccN,
        AccE,
        AccD,
        Flags
    >;
};

/// @brief Definition of <b>"NAV-RELPOSNED"</b> message class.
/// @details
///     See @ref NavRelposnedFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavRelposned.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavRelposned : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavRelposned,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavRelposned>,
        comms::option::def::FieldsImpl<typename NavRelposnedFields<TOpt>::All>,
        comms::option::def::MsgType<NavRelposned<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavRelposned,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavRelposned>,
            comms::option::def::FieldsImpl<typename NavRelposnedFields<TOpt>::All>,
            comms::option::def::MsgType<NavRelposned<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref NavRelposnedFields::Version field.
    ///     @li @b field_reserved1() for @ref NavRelposnedFields::Reserved1 field.
    ///     @li @b field_refStationId() for @ref NavRelposnedFields::RefStationId field.
    ///     @li @b field_itow() for @ref NavRelposnedFields::Itow field.
    ///     @li @b field_relPosN() for @ref NavRelposnedFields::RelPosN field.
    ///     @li @b field_relPosE() for @ref NavRelposnedFields::RelPosE field.
    ///     @li @b field_relPosD() for @ref NavRelposnedFields::RelPosD field.
    ///     @li @b field_relPosHPN() for @ref NavRelposnedFields::RelPosHPN field.
    ///     @li @b field_relPosHPE() for @ref NavRelposnedFields::RelPosHPE field.
    ///     @li @b field_relPosHPD() for @ref NavRelposnedFields::RelPosHPD field.
    ///     @li @b field_reserved2() for @ref NavRelposnedFields::Reserved2 field.
    ///     @li @b field_accN() for @ref NavRelposnedFields::AccN field.
    ///     @li @b field_accE() for @ref NavRelposnedFields::AccE field.
    ///     @li @b field_accD() for @ref NavRelposnedFields::AccD field.
    ///     @li @b field_flags() for @ref NavRelposnedFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        refStationId,
        itow,
        relPosN,
        relPosE,
        relPosD,
        relPosHPN,
        relPosHPE,
        relPosHPD,
        reserved2,
        accN,
        accE,
        accD,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 40U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 40U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-RELPOSNED";
    }
    
    
};

} // namespace message

} // namespace ublox


