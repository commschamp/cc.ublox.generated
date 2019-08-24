/// @file
/// @brief Contains definition of <b>"NAV-TIMEGLO"</b> message and its fields.

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

/// @brief Common definitions for fields from @ref NavTimegloFields.
/// @see @ref NavTimegloFields
/// @headerfile "ublox/message/NavTimeglo.h"
struct NavTimegloFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::NavTimegloFields::Valid field.
    struct ValidCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "todValid",
                "dateValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref NavTimeglo.
/// @tparam TOpt Extra options
/// @see @ref NavTimeglo
/// @headerfile "ublox/message/NavTimeglo.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct NavTimegloFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"TOD"</b> field.
    struct TOD : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "TOD";
        }
        
    };
    
    /// @brief Definition of <b>"fTOD"</b> field.
    struct FTOD : public
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
            return "fTOD";
        }
        
    };
    
    /// @brief Definition of <b>"Nt"</b> field.
    struct Nt : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "Nt";
        }
        
    };
    
    /// @brief Definition of <b>"N4"</b> field.
    struct N4 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "N4";
        }
        
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_todValid, @b getBitValue_todValid() and @b setBitValue_todValid().
        ///      @li @b BitIdx_dateValid, @b getBitValue_dateValid() and @b setBitValue_dateValid().
        COMMS_BITMASK_BITS_SEQ(
            todValid,
            dateValid
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
                ublox::message::NavTimegloFieldsCommon::ValidCommon::bitName(
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
        TOD,
        FTOD,
        Nt,
        N4,
        Valid,
        TAcc
    >;
};

/// @brief Definition of <b>"NAV-TIMEGLO"</b> message class.
/// @details
///     See @ref NavTimegloFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/NavTimeglo.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class NavTimeglo : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimeglo,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeglo>,
        comms::option::def::FieldsImpl<typename NavTimegloFields<TOpt>::All>,
        comms::option::def::MsgType<NavTimeglo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavTimeglo,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_NavTimeglo>,
            comms::option::def::FieldsImpl<typename NavTimegloFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimeglo<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_itow() for @ref NavTimegloFields::Itow field.
    ///     @li @b field_tOD() for @ref NavTimegloFields::TOD field.
    ///     @li @b field_fTOD() for @ref NavTimegloFields::FTOD field.
    ///     @li @b field_nt() for @ref NavTimegloFields::Nt field.
    ///     @li @b field_n4() for @ref NavTimegloFields::N4 field.
    ///     @li @b field_valid() for @ref NavTimegloFields::Valid field.
    ///     @li @b field_tAcc() for @ref NavTimegloFields::TAcc field.
    COMMS_MSG_FIELDS_ACCESS(
        itow,
        tOD,
        fTOD,
        nt,
        n4,
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
        return "NAV-TIMEGLO";
    }
    
    
};

} // namespace message

} // namespace ublox


