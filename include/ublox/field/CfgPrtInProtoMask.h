/// @file
/// @brief Contains definition of <b>"cfgPrtInProtoMask"</b> field.

#pragma once

#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgPrtInProtoMask"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
class CfgPrtInProtoMask : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::FixedLength<2U>,
        comms::option::BitmaskReservedBits<0xFFD8U, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::FixedLength<2U>,
            comms::option::BitmaskReservedBits<0xFFD8U, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_inUbx.
    ///      @li @b BitIdx_inNmea.
    ///      @li @b BitIdx_inRtcm.
    ///      @li @b BitIdx_inRtcm3.
    COMMS_BITMASK_BITS(
        inUbx=0,
        inNmea=1,
        inRtcm=2,
        inRtcm3=5
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_inUbx() and @b setBitValue_inUbx().
    ///      @li @b getBitValue_inNmea() and @b setBitValue_inNmea().
    ///      @li @b getBitValue_inRtcm() and @b setBitValue_inRtcm().
    ///      @li @b getBitValue_inRtcm3() and @b setBitValue_inRtcm3().
    COMMS_BITMASK_BITS_ACCESS(
        inUbx,
        inNmea,
        inRtcm,
        inRtcm3
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgPrtInProtoMask";
    }
    
};

} // namespace field

} // namespace ublox


