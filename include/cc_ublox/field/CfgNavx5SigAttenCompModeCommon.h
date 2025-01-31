// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::field::CfgNavx5SigAttenCompMode field.

#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

namespace cc_ublox
{

namespace field
{

/// @brief Common types and functions for
///     @ref cc_ublox::field::CfgNavx5SigAttenCompMode field.
struct CfgNavx5SigAttenCompModeCommon
{
    /// @brief Re-definition of the value type used by
    ///     cc_ublox::field::CfgNavx5SigAttenCompMode field.
    using ValueType = std::uint8_t;

    /// @brief Single special value name info entry.
    using SpecialNameInfo = std::pair<ValueType, const char*>;

    /// @brief Type returned from @ref specialNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using SpecialNamesMapInfo = std::pair<const SpecialNameInfo*, std::size_t>;

    /// @brief Name of the @ref cc_ublox::field::CfgNavx5SigAttenCompMode field.
    static const char* name()
    {
        return "sigAttenCompMode";
    }

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return true;
    }

    /// @brief Special value <b>"Disabled"</b>.
    static constexpr ValueType valueDisabled()
    {
        return static_cast<ValueType>(0);
    }

    /// @brief Special value <b>"Automatic"</b>.
    static constexpr ValueType valueAutomatic()
    {
        return static_cast<ValueType>(255);
    }

    /// @brief Retrieve map of special value names
    static SpecialNamesMapInfo specialNamesMap()
    {
        static const SpecialNameInfo Map[] = {
            std::make_pair(valueDisabled(), "Disabled"),
            std::make_pair(valueAutomatic(), "Automatic")
        };
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;

        return std::make_pair(&Map[0], MapSize);
    }
};

} // namespace field

} // namespace cc_ublox
