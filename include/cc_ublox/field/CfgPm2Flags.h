// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"flags"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/field/CfgPm2FlagsCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Scope for all the member fields of
///     @ref CfgPm2Flags field.
/// @tparam TOpt Protocol options.
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct CfgPm2FlagsMembers
{
    /// @brief Definition of <b>""</b> field.
    class BitsLow : public
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<8U>,
            comms::option::def::BitmaskReservedBits<0xFU, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<8U>,
                comms::option::def::BitmaskReservedBits<0xFU, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_extintSel.
        ///      @li @b BitIdx_extintWake.
        ///      @li @b BitIdx_extintBackup.
        ///      @li @b BitIdx_extintInactive.
        COMMS_BITMASK_BITS(
            extintSel=4,
            extintWake=5,
            extintBackup=6,
            extintInactive=7
        );

        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_extintSel() and @b setBitValue_extintSel().
        ///      @li @b getBitValue_extintWake() and @b setBitValue_extintWake().
        ///      @li @b getBitValue_extintBackup() and @b setBitValue_extintBackup().
        ///      @li @b getBitValue_extintInactive() and @b setBitValue_extintInactive().
        COMMS_BITMASK_BITS_ACCESS(
            extintSel,
            extintWake,
            extintBackup,
            extintInactive
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::BitsLowCommon::bitName().
        static const char* bitName(std::size_t idx)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::BitsLowCommon::bitName(idx);
        }

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::BitsLowCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return bitName(static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::BitsLowCommon::name();
        }
    };

    /// @brief Definition of <b>"limitPeakCurr"</b> field.
    /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueType
    class LimitPeakCurr : public
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueType,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueType,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::LimitPeakCurrCommon::name();
        }
    };

    /// @brief Definition of <b>""</b> field.
    class BitsMid : public
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<7U>,
            comms::option::def::BitmaskReservedBits<0x38U, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<7U>,
                comms::option::def::BitmaskReservedBits<0x38U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_waitTimeFix.
        ///      @li @b BitIdx_updateRTC.
        ///      @li @b BitIdx_updateEPH.
        ///      @li @b BitIdx_doNotEnterOff.
        COMMS_BITMASK_BITS(
            waitTimeFix=0,
            updateRTC=1,
            updateEPH=2,
            doNotEnterOff=6
        );

        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_waitTimeFix() and @b setBitValue_waitTimeFix().
        ///      @li @b getBitValue_updateRTC() and @b setBitValue_updateRTC().
        ///      @li @b getBitValue_updateEPH() and @b setBitValue_updateEPH().
        ///      @li @b getBitValue_doNotEnterOff() and @b setBitValue_doNotEnterOff().
        COMMS_BITMASK_BITS_ACCESS(
            waitTimeFix,
            updateRTC,
            updateEPH,
            doNotEnterOff
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::BitsMidCommon::bitName().
        static const char* bitName(std::size_t idx)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::BitsMidCommon::bitName(idx);
        }

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::BitsMidCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return bitName(static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::BitsMidCommon::name();
        }
    };

    /// @brief Definition of <b>"mode"</b> field.
    /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueType
    class Mode : public
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueType,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<2U>,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueType,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 1>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ModeCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved"</b> field.
    /// @details
    ///     Reserved field with 2 bytes length
    class Reserved : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::HasName,
            comms::option::def::FixedBitLength<13U>,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<13U>,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ReservedCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::field::CfgPm2FlagsMembersCommon::ReservedCommon::name();
        }
    };

    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           BitsLow,
           LimitPeakCurr,
           BitsMid,
           Mode,
           Reserved
        >;
};

/// @brief Definition of <b>"flags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPm2Flags : public
    comms::field::Bitfield<
        cc_ublox::field::FieldBase<>,
        typename CfgPm2FlagsMembers<TOpt>::All,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::HasVersionDependentMembers<false>
    >
{
    using Base =
        comms::field::Bitfield<
            cc_ublox::field::FieldBase<>,
            typename CfgPm2FlagsMembers<TOpt>::All,
            TExtraOpts...,
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
    ///     @li @b FieldIdx_bitsLow index, @b Field_bitsLow type and @b field_bitsLow() access function -
    ///         for cc_ublox::field::CfgPm2FlagsMembers::BitsLow member field.
    ///     @li @b FieldIdx_limitPeakCurr index, @b Field_limitPeakCurr type and @b field_limitPeakCurr() access function -
    ///         for cc_ublox::field::CfgPm2FlagsMembers::LimitPeakCurr member field.
    ///     @li @b FieldIdx_bitsMid index, @b Field_bitsMid type and @b field_bitsMid() access function -
    ///         for cc_ublox::field::CfgPm2FlagsMembers::BitsMid member field.
    ///     @li @b FieldIdx_mode index, @b Field_mode type and @b field_mode() access function -
    ///         for cc_ublox::field::CfgPm2FlagsMembers::Mode member field.
    ///     @li @b FieldIdx_reserved index, @b Field_reserved type and @b field_reserved() access function -
    ///         for cc_ublox::field::CfgPm2FlagsMembers::Reserved member field.
    COMMS_FIELD_MEMBERS_NAMES(
        bitsLow,
        limitPeakCurr,
        bitsMid,
        mode,
        reserved
    );

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgPm2FlagsCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
