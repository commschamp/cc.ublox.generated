// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"ESF-INS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Itow.h"
#include "cc_ublox/field/Res4.h"
#include "cc_ublox/message/EsfInsCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref EsfIns.
/// @tparam TOpt Extra options
/// @see @ref EsfIns
/// @headerfile cc_ublox/message/EsfIns.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct EsfInsFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Bitfield0 field.
    struct Bitfield0Members
    {
        /// @brief Definition of <b>"version"</b> field.
        class Version : public
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<8U>,
                comms::option::def::DefaultNumValue<1>,
                comms::option::def::ValidNumValue<1>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::HasName,
                    comms::option::def::FixedBitLength<8U>,
                    comms::option::def::DefaultNumValue<1>,
                    comms::option::def::ValidNumValue<1>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::VersionCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::VersionCommon::name();
            }
        };

        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<24U>,
                comms::option::def::BitmaskReservedBits<0xFFFFC0UL, 0x0U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_ublox::field::FieldBase<>,
                    comms::option::def::HasName,
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

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::BitsCommon::bitName().
            static const char* bitName(std::size_t idx)
            {
                return cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::BitsCommon::bitName(idx);
            }

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::BitsCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return bitName(static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::EsfInsFieldsCommon::Bitfield0MembersCommon::BitsCommon::name();
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
            cc_ublox::field::FieldBase<>,
            typename Bitfield0Members::All,
            comms::option::def::HasName,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_ublox::field::FieldBase<>,
                typename Bitfield0Members::All,
                comms::option::def::HasName,
                comms::option::def::HasVersionDependentMembers<false>
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access function -
        ///         for cc_ublox::message::EsfInsFields::Bitfield0Members::Version member field.
        ///     @li @b FieldIdx_bits index, @b Field_bits type and @b field_bits() access function -
        ///         for cc_ublox::message::EsfInsFields::Bitfield0Members::Bits member field.
        COMMS_FIELD_MEMBERS_NAMES(
            version,
            bits
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::Bitfield0Common::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res4<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res4<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        cc_ublox::field::Itow<
            TOpt,
            comms::option::def::HasName
        >;

    /// @brief Definition of <b>"xAngRate"</b> field.
    class XAngRate : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 1000>,
                comms::option::def::UnitsDegrees
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::XAngRateCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 3U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::XAngRateCommon::name();
        }
    };

    /// @brief Definition of <b>"yAngRate"</b> field.
    class YAngRate : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 1000>,
                comms::option::def::UnitsDegrees
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::YAngRateCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 3U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::YAngRateCommon::name();
        }
    };

    /// @brief Definition of <b>"zAngRate"</b> field.
    class ZAngRate : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 1000>,
            comms::option::def::UnitsDegrees
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 1000>,
                comms::option::def::UnitsDegrees
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::ZAngRateCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 3U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::ZAngRateCommon::name();
        }
    };

    /// @brief Definition of <b>"xAccel"</b> field.
    class XAccel : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::XAccelCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::XAccelCommon::name();
        }
    };

    /// @brief Definition of <b>"yAccel"</b> field.
    class YAccel : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::YAccelCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::YAccelCommon::name();
        }
    };

    /// @brief Definition of <b>"zAccel"</b> field.
    class ZAccel : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::EsfInsFieldsCommon::ZAccelCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::EsfInsFieldsCommon::ZAccelCommon::name();
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
/// @headerfile cc_ublox/message/EsfIns.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class EsfIns : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::EsfIns,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_EsfIns>,
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
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_EsfIns>,
            comms::option::def::FieldsImpl<typename EsfInsFields<TOpt>::All>,
            comms::option::def::MsgType<EsfIns<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_bitfield0 index, @b Field_bitfield0 type and @b field_bitfield0() access fuction
    ///         for @ref EsfInsFields::Bitfield0 field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref EsfInsFields::Reserved1 field.
    ///     @li @b FieldIdx_itow index, @b Field_itow type and @b field_itow() access fuction
    ///         for @ref EsfInsFields::Itow field.
    ///     @li @b FieldIdx_xAngRate index, @b Field_xAngRate type and @b field_xAngRate() access fuction
    ///         for @ref EsfInsFields::XAngRate field.
    ///     @li @b FieldIdx_yAngRate index, @b Field_yAngRate type and @b field_yAngRate() access fuction
    ///         for @ref EsfInsFields::YAngRate field.
    ///     @li @b FieldIdx_zAngRate index, @b Field_zAngRate type and @b field_zAngRate() access fuction
    ///         for @ref EsfInsFields::ZAngRate field.
    ///     @li @b FieldIdx_xAccel index, @b Field_xAccel type and @b field_xAccel() access fuction
    ///         for @ref EsfInsFields::XAccel field.
    ///     @li @b FieldIdx_yAccel index, @b Field_yAccel type and @b field_yAccel() access fuction
    ///         for @ref EsfInsFields::YAccel field.
    ///     @li @b FieldIdx_zAccel index, @b Field_zAccel type and @b field_zAccel() access fuction
    ///         for @ref EsfInsFields::ZAccel field.
    COMMS_MSG_FIELDS_NAMES(
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
        return cc_ublox::message::EsfInsCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
