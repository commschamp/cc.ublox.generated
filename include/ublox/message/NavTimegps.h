/// @file
/// @brief Contains definition of <b>"NAV-TIMEGPS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Ftow.h"
#include "ublox/field/Itow.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavTimegpsFields.
/// @see @ref NavTimegpsFields
/// @headerfile "ublox/message/NavTimegps.h"
struct NavTimegpsFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavTimegpsFields::Valid field.
    struct ValidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "towValid",
                "weekValid",
                "leapSValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref NavTimegps.
/// @tparam TOpt Extra options
/// @see @ref NavTimegps
/// @headerfile "ublox/message/NavTimegps.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimegpsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"fTOW"</b> field.
    using Ftow =
        ublox::field::Ftow<
            TOpt
        >;
    
    /// @brief Definition of <b>"weeks"</b> field.
    struct Weeks : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "weeks";
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
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
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
        ///      @li @b BitIdx_towValid, @b getBitValue_towValid() and @b setBitValue_towValid().
        ///      @li @b BitIdx_weekValid, @b getBitValue_weekValid() and @b setBitValue_weekValid().
        ///      @li @b BitIdx_leapSValid, @b getBitValue_leapSValid() and @b setBitValue_leapSValid().
        COMMS_BITMASK_BITS_SEQ(
            towValid,
            weekValid,
            leapSValid
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::NavTimegpsFieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"tAcc"</b> field.
    struct TAcc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAcc";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Ftow,
        Weeks,
        LeapS,
        Valid,
        TAcc
    >;
};

/// @brief Definition of <b>"NAV-TIMEGPS"</b> message class.
/// @details
///     See @ref NavTimegpsFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimegps.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimegps : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimegps,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimegps>,
        comms::option::def::FieldsImpl<typename NavTimegpsFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimegps<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimegps,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimegps>,
            comms::option::def::FieldsImpl<typename NavTimegpsFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimegps<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavTimegpsFields::Itow field.
    ///     @li @b field_ftow() for @ref NavTimegpsFields::Ftow field.
    ///     @li @b field_weeks() for @ref NavTimegpsFields::Weeks field.
    ///     @li @b field_leapS() for @ref NavTimegpsFields::LeapS field.
    ///     @li @b field_valid() for @ref NavTimegpsFields::Valid field.
    ///     @li @b field_tAcc() for @ref NavTimegpsFields::TAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        ftow,
        weeks,
        leapS,
        valid,
        tAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-TIMEGPS";
    }
    
    
};

} // namespace message

} // namespace ublox


