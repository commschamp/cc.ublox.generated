/// @file
/// @brief Contains protocol version definition.

#pragma once

#include "comms/version.h"

/// @brief Version of the protocol specification.
#define UBLOX_SPEC_VERSION (0U)

/// @brief Major version of the protocol library.
#define UBLOX_MAJOR_VERSION (0U)

/// @brief Minor version of the protocol library.
#define UBLOX_MINOR_VERSION (10U)

/// @brief Patch version of the protocol library.
#define UBLOX_PATCH_VERSION (0U)

/// @brief Full version of the protocol library as single number.
#define UBLOX_VERSION (COMMS_MAKE_VERSION(UBLOX_MAJOR_VERSION, UBLOX_MINOR_VERSION, UBLOX_PATCH_VERSION))


namespace ublox
{

/// @brief Version of the protocol specification.
inline constexpr unsigned specVersion()
{
    return UBLOX_SPEC_VERSION;
}

/// @brief Major version of the protocol library
inline constexpr unsigned versionMajor()
{
    return UBLOX_MAJOR_VERSION;
}

/// @brief Minor version of the protocol library
inline constexpr unsigned versionMinor()
{
    return UBLOX_MINOR_VERSION;
}

/// @brief Patch version of the protocol library
inline constexpr unsigned versionPatch()
{
    return UBLOX_PATCH_VERSION;
}

/// @brief Full version of the protocol library as single number
inline constexpr unsigned version()
{
    return UBLOX_VERSION;
}


} // namespace ublox


// Generated compile time check for minimal supported version of the COMMS library
static_assert(COMMS_MAKE_VERSION(2, 0, 2) <= comms::version(),
    "The version of COMMS library is too old");

