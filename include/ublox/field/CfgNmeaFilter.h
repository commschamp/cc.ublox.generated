/// @file
/// @brief Contains definition of <b>"cfgNmeaFilter"</b> field.

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
///     @ref ublox::field::CfgNmeaFilter field.
struct CfgNmeaFilterCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "posFilt",
            "mskPosFilt",
            "timeFilt",
            "dateFilt",
            "gpsOnlyFilter",
            "trackFilt"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"cfgNmeaFilter"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaFilter : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<1U>,
        comms::option::def::BitmaskReservedBits<0xC0U, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xC0U, 0x0U>
        >;
public:
    /// @brief Provides names and generates access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values and functions are:
    ///      @li @b BitIdx_posFilt, @b getBitValue_posFilt() and @b setBitValue_posFilt().
    ///      @li @b BitIdx_mskPosFilt, @b getBitValue_mskPosFilt() and @b setBitValue_mskPosFilt().
    ///      @li @b BitIdx_timeFilt, @b getBitValue_timeFilt() and @b setBitValue_timeFilt().
    ///      @li @b BitIdx_dateFilt, @b getBitValue_dateFilt() and @b setBitValue_dateFilt().
    ///      @li @b BitIdx_gpsOnlyFilter, @b getBitValue_gpsOnlyFilter() and @b setBitValue_gpsOnlyFilter().
    ///      @li @b BitIdx_trackFilt, @b getBitValue_trackFilt() and @b setBitValue_trackFilt().
    COMMS_BITMASK_BITS_SEQ(
        posFilt,
        mskPosFilt,
        timeFilt,
        dateFilt,
        gpsOnlyFilter,
        trackFilt
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaFilter";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgNmeaFilterCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


