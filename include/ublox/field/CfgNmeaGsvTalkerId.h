/// @file
/// @brief Contains definition of <b>"cfgNmeaGsvTalkerId"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::CfgNmeaGsvTalkerId field.
enum class CfgNmeaGsvTalkerIdVal : std::uint8_t
{
    GnssSpecific = 0, ///< value <b>GNSS Specific</b>.
    Main = 1, ///< value @b Main
    
};

/// @brief Definition of <b>"cfgNmeaGsvTalkerId"</b> field.
/// @see @ref ublox::field::CfgNmeaGsvTalkerIdVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct CfgNmeaGsvTalkerId : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        CfgNmeaGsvTalkerIdVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<0, 1>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaGsvTalkerId";
    }
    
};

} // namespace field

} // namespace ublox


