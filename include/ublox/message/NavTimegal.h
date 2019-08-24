/// @file
/// @brief Contains definition of <b>"NAV-TIMEGAL"</b> message and its fields.

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
#include "ublox/field/Itow.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref NavTimegalFields.
/// @see @ref NavTimegalFields
/// @headerfile "ublox/message/NavTimegal.h"
struct NavTimegalFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavTimegalFields::Valid field.
    struct ValidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "galTowValid",
                "galWnoValid",
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

/// @brief Fields of @ref NavTimegal.
/// @tparam TOpt Extra options
/// @see @ref NavTimegal
/// @headerfile "ublox/message/NavTimegal.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimegalFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"galTow"</b> field.
    struct GalTow : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "galTow";
        }
        
    };
    
    /// @brief Definition of <b>"fGalTow"</b> field.
    struct FGalTow : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsNanoseconds,
            comms::option::def::ValidNumValueRange<-500000000L, 500000000L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fGalTow";
        }
        
    };
    
    /// @brief Definition of <b>"galWno"</b> field.
    struct GalWno : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "galWno";
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
        ///      @li @b BitIdx_galTowValid, @b getBitValue_galTowValid() and @b setBitValue_galTowValid().
        ///      @li @b BitIdx_galWnoValid, @b getBitValue_galWnoValid() and @b setBitValue_galWnoValid().
        ///      @li @b BitIdx_leapSValid, @b getBitValue_leapSValid() and @b setBitValue_leapSValid().
        COMMS_BITMASK_BITS_SEQ(
            galTowValid,
            galWnoValid,
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
                ublox::message::NavTimegalFieldsCommon::ValidCommon::bitName(
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
        GalTow,
        FGalTow,
        GalWno,
        LeapS,
        Valid,
        TAcc
    >;
};

/// @brief Definition of <b>"NAV-TIMEGAL"</b> message class.
/// @details
///     See @ref NavTimegalFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimegal.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimegal : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimegal,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimegal>,
        comms::option::def::FieldsImpl<typename NavTimegalFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimegal<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimegal,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimegal>,
            comms::option::def::FieldsImpl<typename NavTimegalFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimegal<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavTimegalFields::Itow field.
    ///     @li @b field_galTow() for @ref NavTimegalFields::GalTow field.
    ///     @li @b field_fGalTow() for @ref NavTimegalFields::FGalTow field.
    ///     @li @b field_galWno() for @ref NavTimegalFields::GalWno field.
    ///     @li @b field_leapS() for @ref NavTimegalFields::LeapS field.
    ///     @li @b field_valid() for @ref NavTimegalFields::Valid field.
    ///     @li @b field_tAcc() for @ref NavTimegalFields::TAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        galTow,
        fGalTow,
        galWno,
        leapS,
        valid,
        tAcc
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "NAV-TIMEGAL";
    }
    
    
};

} // namespace message

} // namespace ublox


