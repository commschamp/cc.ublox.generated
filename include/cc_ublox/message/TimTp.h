// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"TIM-TP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/message/TimTpCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref TimTp.
/// @tparam TOpt Extra options
/// @see @ref TimTp
/// @headerfile cc_ublox/message/TimTp.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct TimTpFields
{
    /// @brief Definition of <b>"towMS"</b> field.
    class TowMS : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMilliseconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimTpFieldsCommon::TowMSCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::TowMSCommon::name();
        }
    };

    /// @brief Definition of <b>"towSubMS"</b> field.
    class TowSubMS : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 0x100000000LL>,
            comms::option::def::UnitsMilliseconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::ScalingRatio<1, 0x100000000LL>,
                comms::option::def::UnitsMilliseconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimTpFieldsCommon::TowSubMSCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::TowSubMSCommon::name();
        }
    };

    /// @brief Definition of <b>"qErr"</b> field.
    class QErr : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimTpFieldsCommon::QErrCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::QErrCommon::name();
        }
    };

    /// @brief Definition of <b>"week"</b> field.
    class Week : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsWeeks
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::UnitsWeeks
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::TimTpFieldsCommon::WeekCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::WeekCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Flags field.
    struct FlagsMembers
    {
        /// @brief Definition of <b>""</b> field.
        class BitsLow : public
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_timeBase, @b getBitValue_timeBase() and @b setBitValue_timeBase().
            ///      @li @b BitIdx_utc, @b getBitValue_utc() and @b setBitValue_utc().
            COMMS_BITMASK_BITS_SEQ(
                timeBase,
                utc
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsLowCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsLowCommon::name();
            }
        };

        /// @brief Definition of <b>"raim"</b> field.
        /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueType
        class Raim : public
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueType,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            using Base =
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueType,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValueRange<0, 2>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Single value name info entry.
            using ValueNameInfo = cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueNameInfo;

            /// @brief Type returned from @ref valueNamesMap() member function.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueNamesMapInfo.
            using ValueNamesMapInfo = cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::ValueNamesMapInfo;

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName().
            static const char* valueName(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName(val);
            }

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName().
            static const char* valueNameOf(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueName(val);
            }

            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::getValue());
            }

            /// @brief Retrieve map of enum value names.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueNamesMap().
            static ValueNamesMapInfo valueNamesMap()
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::valueNamesMap();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::RaimCommon::name();
            }
        };

        /// @brief Definition of <b>""</b> field.
        class BitsHigh : public
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::BitmaskReservedBits<0xEU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_qErrInvalid, @b getBitValue_qErrInvalid() and @b setBitValue_qErrInvalid().
            COMMS_BITMASK_BITS_SEQ(
                qErrInvalid
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsHighCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::TimTpFieldsCommon::FlagsMembersCommon::BitsHighCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               BitsLow,
               Raim,
               BitsHigh
            >;
    };

    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            cc_ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_bitsLow index, @b Field_bitsLow type and @b field_bitsLow() access function -
        ///         for cc_ublox::message::TimTpFields::FlagsMembers::BitsLow member field.
        ///     @li @b FieldIdx_raim index, @b Field_raim type and @b field_raim() access function -
        ///         for cc_ublox::message::TimTpFields::FlagsMembers::Raim member field.
        ///     @li @b FieldIdx_bitsHigh index, @b Field_bitsHigh type and @b field_bitsHigh() access function -
        ///         for cc_ublox::message::TimTpFields::FlagsMembers::BitsHigh member field.
        COMMS_FIELD_MEMBERS_NAMES(
            bitsLow,
            raim,
            bitsHigh
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::FlagsCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref RefInfo field.
    struct RefInfoMembers
    {
        /// @brief Definition of <b>"timeRefGnss"</b> field.
        /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueType
        class TimeRefGnss : public
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueType,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 2>,
                comms::option::def::ValidNumValue<15>
            >
        {
            using Base =
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueType,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 2>,
                    comms::option::def::ValidNumValue<15>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Single value name info entry.
            using ValueNameInfo = cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueNameInfo;

            /// @brief Type returned from @ref valueNamesMap() member function.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueNamesMapInfo.
            using ValueNamesMapInfo = cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::ValueNamesMapInfo;

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName().
            static const char* valueName(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName(val);
            }

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName().
            static const char* valueNameOf(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueName(val);
            }

            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::getValue());
            }

            /// @brief Retrieve map of enum value names.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueNamesMap().
            static ValueNamesMapInfo valueNamesMap()
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::valueNamesMap();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::TimeRefGnssCommon::name();
            }
        };

        /// @brief Definition of <b>"utcStandard"</b> field.
        /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueType
        class UtcStandard : public
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueType,
                comms::option::def::FixedBitLength<4U>,
                comms::option::def::ValidNumValueRange<0, 7>,
                comms::option::def::ValidNumValue<15>
            >
        {
            using Base =
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueType,
                    comms::option::def::FixedBitLength<4U>,
                    comms::option::def::ValidNumValueRange<0, 7>,
                    comms::option::def::ValidNumValue<15>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Single value name info entry.
            using ValueNameInfo = cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueNameInfo;

            /// @brief Type returned from @ref valueNamesMap() member function.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueNamesMapInfo.
            using ValueNamesMapInfo = cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::ValueNamesMapInfo;

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName().
            static const char* valueName(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName(val);
            }

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName().
            static const char* valueNameOf(ValueType val)
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueName(val);
            }

            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::getValue());
            }

            /// @brief Retrieve map of enum value names.
            /// @see @ref cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueNamesMap().
            static ValueNamesMapInfo valueNamesMap()
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::valueNamesMap();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::TimTpFieldsCommon::RefInfoMembersCommon::UtcStandardCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               TimeRefGnss,
               UtcStandard
            >;
    };

    /// @brief Definition of <b>"refInfo"</b> field.
    class RefInfo : public
        comms::field::Bitfield<
            cc_ublox::field::FieldBase<>,
            typename RefInfoMembers::All
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_ublox::field::FieldBase<>,
                typename RefInfoMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_timeRefGnss index, @b Field_timeRefGnss type and @b field_timeRefGnss() access function -
        ///         for cc_ublox::message::TimTpFields::RefInfoMembers::TimeRefGnss member field.
        ///     @li @b FieldIdx_utcStandard index, @b Field_utcStandard type and @b field_utcStandard() access function -
        ///         for cc_ublox::message::TimTpFields::RefInfoMembers::UtcStandard member field.
        COMMS_FIELD_MEMBERS_NAMES(
            timeRefGnss,
            utcStandard
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::TimTpFieldsCommon::RefInfoCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TowMS,
        TowSubMS,
        QErr,
        Week,
        Flags,
        RefInfo
    >;
};

/// @brief Definition of <b>"TIM-TP"</b> message class.
/// @details
///     See @ref TimTpFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/TimTp.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class TimTp : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimTp,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimTp>,
        comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
        comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimTp,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_TimTp>,
            comms::option::def::FieldsImpl<typename TimTpFields<TOpt>::All>,
            comms::option::def::MsgType<TimTp<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_towMS index, @b Field_towMS type and @b field_towMS() access fuction
    ///         for @ref TimTpFields::TowMS field.
    ///     @li @b FieldIdx_towSubMS index, @b Field_towSubMS type and @b field_towSubMS() access fuction
    ///         for @ref TimTpFields::TowSubMS field.
    ///     @li @b FieldIdx_qErr index, @b Field_qErr type and @b field_qErr() access fuction
    ///         for @ref TimTpFields::QErr field.
    ///     @li @b FieldIdx_week index, @b Field_week type and @b field_week() access fuction
    ///         for @ref TimTpFields::Week field.
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref TimTpFields::Flags field.
    ///     @li @b FieldIdx_refInfo index, @b Field_refInfo type and @b field_refInfo() access fuction
    ///         for @ref TimTpFields::RefInfo field.
    COMMS_MSG_FIELDS_NAMES(
        towMS,
        towSubMS,
        qErr,
        week,
        flags,
        refInfo
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::TimTpCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox