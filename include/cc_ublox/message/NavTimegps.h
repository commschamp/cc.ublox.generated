// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"NAV-TIMEGPS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Ftow.h"
#include "cc_ublox/field/Itow.h"
#include "cc_ublox/message/NavTimegpsCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref NavTimegps.
/// @tparam TOpt Extra options
/// @see @ref NavTimegps
/// @headerfile cc_ublox/message/NavTimegps.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct NavTimegpsFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        cc_ublox::field::Itow<
            TOpt
        >;

    /// @brief Definition of <b>"fTOW"</b> field.
    using Ftow =
        cc_ublox::field::Ftow<
            TOpt
        >;

    /// @brief Definition of <b>"weeks"</b> field.
    class Weeks : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int16_t,
                comms::option::def::UnitsWeeks
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::WeeksCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::WeeksCommon::name();
        }
    };

    /// @brief Definition of <b>"leapS"</b> field.
    class LeapS : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::LeapSCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::LeapSCommon::name();
        }
    };

    /// @brief Definition of <b>"valid"</b> field.
    class Valid : public
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
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

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::message::NavTimegpsFieldsCommon::ValidCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return
                cc_ublox::message::NavTimegpsFieldsCommon::ValidCommon::bitName(
                    static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::ValidCommon::name();
        }
    };

    /// @brief Definition of <b>"tAcc"</b> field.
    class TAcc : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsNanoseconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsNanoseconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::TAccCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavTimegpsFieldsCommon::TAccCommon::name();
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
/// @headerfile cc_ublox/message/NavTimegps.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class NavTimegps : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavTimegps,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_NavTimegps>,
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
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_NavTimegps>,
            comms::option::def::FieldsImpl<typename NavTimegpsFields<TOpt>::All>,
            comms::option::def::MsgType<NavTimegps<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_itow index, @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavTimegpsFields::Itow field.
    ///     @li @b FieldIdx_ftow index, @b Field_ftow type and @b field_ftow() access fuction
    ///         for @ref NavTimegpsFields::Ftow field.
    ///     @li @b FieldIdx_weeks index, @b Field_weeks type and @b field_weeks() access fuction
    ///         for @ref NavTimegpsFields::Weeks field.
    ///     @li @b FieldIdx_leapS index, @b Field_leapS type and @b field_leapS() access fuction
    ///         for @ref NavTimegpsFields::LeapS field.
    ///     @li @b FieldIdx_valid index, @b Field_valid type and @b field_valid() access fuction
    ///         for @ref NavTimegpsFields::Valid field.
    ///     @li @b FieldIdx_tAcc index, @b Field_tAcc type and @b field_tAcc() access fuction
    ///         for @ref NavTimegpsFields::TAcc field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_ublox::message::NavTimegpsCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox