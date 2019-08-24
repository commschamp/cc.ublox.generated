/// @file
/// @brief Contains definition of <b>"ESF-INS"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref EsfInsFields.
/// @see @ref EsfInsFields
/// @headerfile "ublox/message/EsfIns.h"
struct EsfInsFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::EsfInsFields::Bitfield0 bitfield.
    struct Bitfield0MembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::EsfInsFields::Bitfield0Members::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "xAngRateValid",
                    "yAngRateValid",
                    "zAngRateValid",
                    "xAccelValid",
                    "yAccelValid",
                    "zAccelValid"
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

/// @brief Fields of @ref EsfIns.
/// @tparam TOpt Extra options
/// @see @ref EsfIns
/// @headerfile "ublox/message/EsfIns.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfInsFields
{
    /// @brief Scope for all the member fields of @ref Bitfield0 bitfield.
    struct Bitfield0Members
    {
        /// @brief Definition of <b>"version"</b> field.
        struct Version : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<8U>,
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
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<24U>,
                comms::option::def::BitmaskReservedBits<0xFFFFC0UL, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<24U>,
                    comms::option::def::BitmaskReservedBits<0xFFFFC0UL, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_xAngRateValid, @b getBitValue_xAngRateValid() and @b setBitValue_xAngRateValid().
            ///      @li @b BitIdx_yAngRateValid, @b getBitValue_yAngRateValid() and @b setBitValue_yAngRateValid().
            ///      @li @b BitIdx_zAngRateValid, @b getBitValue_zAngRateValid() and @b setBitValue_zAngRateValid().
            ///      @li @b BitIdx_xAccelValid, @b getBitValue_xAccelValid() and @b setBitValue_xAccelValid().
            ///      @li @b BitIdx_yAccelValid, @b getBitValue_yAccelValid() and @b setBitValue_yAccelValid().
            ///      @li @b BitIdx_zAccelValid, @b getBitValue_zAccelValid() and @b setBitValue_zAccelValid().
            COMMS_BITMASK_BITS_SEQ(
                xAngRateValid,
                yAngRateValid,
                zAngRateValid,
                xAccelValid,
                yAccelValid,
                zAccelValid
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
                    ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Version,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"bitfield0"</b> field.
    class Bitfield0 : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename Bitfield0Members::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename Bitfield0Members::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_version() - for Bitfield0Members::Version member field.
        ///     @li @b field_bits() - for Bitfield0Members::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            version,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "bitfield0";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res4<
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
    
    /// @brief Definition of <b>"xAngRate"</b> field.
    struct XAngRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "xAngRate";
        }
        
    };
    
    /// @brief Definition of <b>"yAngRate"</b> field.
    struct YAngRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "yAngRate";
        }
        
    };
    
    /// @brief Definition of <b>"zAngRate"</b> field.
    struct ZAngRate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "zAngRate";
        }
        
    };
    
    /// @brief Definition of <b>"xAccel"</b> field.
    struct XAccel : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "xAccel";
        }
        
    };
    
    /// @brief Definition of <b>"yAccel"</b> field.
    struct YAccel : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "yAccel";
        }
        
    };
    
    /// @brief Definition of <b>"zAccel"</b> field.
    struct ZAccel : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "zAccel";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Bitfield0,
        Reserved1,
        Itow,
        XAngRate,
        YAngRate,
        ZAngRate,
        XAccel,
        YAccel,
        ZAccel
    >;
};

/// @brief Definition of <b>"ESF-INS"</b> message class.
/// @details
///     See @ref EsfInsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfIns.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfIns : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfIns,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfIns>,
        comms::option::def::FieldsImpl<typename EsfInsFields<TOpt>::All>,
        comms::option::def::MsgType<EsfIns<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::EsfIns,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfIns>,
            comms::option::def::FieldsImpl<typename EsfInsFields<TOpt>::All>,
            comms::option::def::MsgType<EsfIns<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_bitfield0() for @ref EsfInsFields::Bitfield0 field.
    ///     @li @b field_reserved1() for @ref EsfInsFields::Reserved1 field.
    ///     @li @b field_itow() for @ref EsfInsFields::Itow field.
    ///     @li @b field_xAngRate() for @ref EsfInsFields::XAngRate field.
    ///     @li @b field_yAngRate() for @ref EsfInsFields::YAngRate field.
    ///     @li @b field_zAngRate() for @ref EsfInsFields::ZAngRate field.
    ///     @li @b field_xAccel() for @ref EsfInsFields::XAccel field.
    ///     @li @b field_yAccel() for @ref EsfInsFields::YAccel field.
    ///     @li @b field_zAccel() for @ref EsfInsFields::ZAccel field.
    COMMS_MSG_FIELDS_ACCESS(
        bitfield0,
        reserved1,
        itow,
        xAngRate,
        yAngRate,
        zAngRate,
        xAccel,
        yAccel,
        zAccel
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "ESF-INS";
    }
    
    
};

} // namespace message

} // namespace ublox


