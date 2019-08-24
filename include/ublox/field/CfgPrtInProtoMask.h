/// @file
/// @brief Contains definition of <b>"cfgPrtInProtoMask"</b> field.

#pragma once

#include <type_traits>
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Common functions for
///     @ref ublox::field::CfgPrtInProtoMask field.
struct CfgPrtInProtoMaskCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "inUbx",
            "inNmea",
            "inRtcm",
            nullptr,
            nullptr,
            "inRtcm3"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"cfgPrtInProtoMask"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPrtInProtoMask : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<2U>,
        comms::option::def::BitmaskReservedBits<0xFFD8U, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0xFFD8U, 0x0U>
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
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgPrtInProtoMaskCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


