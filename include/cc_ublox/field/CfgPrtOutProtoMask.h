// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"cfgPrtOutProtoMask"</b> field.

#pragma once

#include "cc_ublox/field/CfgPrtOutProtoMaskCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"cfgPrtOutProtoMask"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPrtOutProtoMask : public
    comms::field::BitmaskValue<
        cc_ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<2U>,
        comms::option::def::BitmaskReservedBits<0xFFDCU, 0x0U>
    >
{
    using Base =
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFDCU, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_outUbx.
    ///      @li @b BitIdx_outNmea.
    ///      @li @b BitIdx_outRtcm3.
    COMMS_BITMASK_BITS(
        outUbx=0,
        outNmea=1,
        outRtcm3=5
    );

    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_outUbx() and @b setBitValue_outUbx().
    ///      @li @b getBitValue_outNmea() and @b setBitValue_outNmea().
    ///      @li @b getBitValue_outRtcm3() and @b setBitValue_outRtcm3().
    COMMS_BITMASK_BITS_ACCESS(
        outUbx,
        outNmea,
        outRtcm3
    );

    /// @brief Retrieve name of the bit.
    /// @see @ref cc_ublox::field::CfgPrtOutProtoMaskCommon::bitName().
    static const char* bitName(BitIdx idx)
    {
        return
            cc_ublox::field::CfgPrtOutProtoMaskCommon::bitName(
                static_cast<std::size_t>(idx));
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgPrtOutProtoMaskCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox