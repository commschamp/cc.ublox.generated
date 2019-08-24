/// @file
/// @brief Contains definition of <b>"gnssId"</b> field.

#pragma once

#include <cstdint>
#include <type_traits>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for
///     @ref ublox::field::GnssId field.
enum class GnssIdVal : std::uint8_t
{
    GPS = 0, ///< value @b GPS
    SBAS = 1, ///< value @b SBAS
    Galileo = 2, ///< value @b Galileo
    BeiDou = 3, ///< value @b BeiDou
    IMES = 4, ///< value @b IMES
    QZSS = 5, ///< value @b QZSS
    GLONASS = 6, ///< value @b GLONASS
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 6, ///< Last defined value.
    ValuesLimit = 7, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::GnssId field.
struct GnssIdCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(GnssIdVal val)
    {
        static const char* Map[] = {
            "GPS",
            "SBAS",
            "Galileo",
            "BeiDou",
            "IMES",
            "QZSS",
            "GLONASS"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"gnssId"</b> field.
/// @see @ref ublox::field::GnssIdVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct GnssId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        GnssIdVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 6>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "gnssId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(GnssIdVal val)
    {
        return ublox::field::GnssIdCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


