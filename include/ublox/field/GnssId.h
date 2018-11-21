/// @file
/// @brief Contains definition of <b>"gnssId"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for @ref GnssId field.
enum class GnssIdVal : std::uint8_t
{
    GPS = 0, ///< value @b GPS
    SBAS = 1, ///< value @b SBAS
    Galileo = 2, ///< value @b Galileo
    BeiDou = 3, ///< value @b BeiDou
    IMES = 4, ///< value @b IMES
    QZSS = 5, ///< value @b QZSS
    GLONASS = 6, ///< value @b GLONASS
    
};

/// @brief Definition of <b>"gnssId"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct GnssId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GnssIdVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 6>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "gnssId";
    }
    
};

} // namespace field

} // namespace ublox


