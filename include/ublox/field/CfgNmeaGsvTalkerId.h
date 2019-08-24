/// @file
/// @brief Contains definition of <b>"cfgNmeaGsvTalkerId"</b> field.

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
///     @ref ublox::field::CfgNmeaGsvTalkerId field.
enum class CfgNmeaGsvTalkerIdVal : std::uint8_t
{
    GnssSpecific = 0, ///< value <b>GNSS Specific</b>.
    Main = 1, ///< value @b Main
    
    // --- Extra values generated for convenience ---
    FirstValue = 0, ///< First defined value.
    LastValue = 1, ///< Last defined value.
    ValuesLimit = 2, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::CfgNmeaGsvTalkerId field.
struct CfgNmeaGsvTalkerIdCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaGsvTalkerIdVal val)
    {
        static const char* Map[] = {
            "GNSS Specific",
            "Main"
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        
        if (MapSize <= static_cast<std::size_t>(val)) {
            return nullptr;
        }
        
        return Map[static_cast<std::size_t>(val)];
    }
    
};

/// @brief Definition of <b>"cfgNmeaGsvTalkerId"</b> field.
/// @see @ref ublox::field::CfgNmeaGsvTalkerIdVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaGsvTalkerId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaGsvTalkerIdVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaGsvTalkerId";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(CfgNmeaGsvTalkerIdVal val)
    {
        return ublox::field::CfgNmeaGsvTalkerIdCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


