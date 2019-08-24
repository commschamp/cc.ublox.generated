/// @file
/// @brief Contains definition of <b>"cfgNmeaGnssToFilter"</b> field.

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
///     @ref ublox::field::CfgNmeaGnssToFilter field.
struct CfgNmeaGnssToFilterCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "gps",
            "sbas",
            nullptr,
            nullptr,
            "qzss",
            "glonass",
            "beidou"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"cfgNmeaGnssToFilter"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaGnssToFilter : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<4U>,
        comms::option::def::BitmaskReservedBits<0xFFFFFF8CUL, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFF8CUL, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_gps.
    ///      @li @b BitIdx_sbas.
    ///      @li @b BitIdx_qzss.
    ///      @li @b BitIdx_glonass.
    ///      @li @b BitIdx_beidou.
    COMMS_BITMASK_BITS(
        gps=0,
        sbas=1,
        qzss=4,
        glonass=5,
        beidou=6
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_gps() and @b setBitValue_gps().
    ///      @li @b getBitValue_sbas() and @b setBitValue_sbas().
    ///      @li @b getBitValue_qzss() and @b setBitValue_qzss().
    ///      @li @b getBitValue_glonass() and @b setBitValue_glonass().
    ///      @li @b getBitValue_beidou() and @b setBitValue_beidou().
    COMMS_BITMASK_BITS_ACCESS(
        gps,
        sbas,
        qzss,
        glonass,
        beidou
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaGnssToFilter";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgNmeaGnssToFilterCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


