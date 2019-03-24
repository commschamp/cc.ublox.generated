/// @file
/// @brief Contains definition of <b>"sbasSys"</b> field.

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

/// @brief Values enumerator for @ref ublox::field::SbasSys field.
enum class SbasSysVal : std::int8_t
{
    Unknown = -1, ///< value @b Unknown
    WAAS = 0, ///< value @b WAAS
    EGNOS = 1, ///< value @b EGNOS
    MSAS = 2, ///< value @b MSAS
    GAGAN = 3, ///< value @b GAGAN
    GPS = 16, ///< value @b GPS
    
};

/// @brief Definition of <b>"sbasSys"</b> field.
/// @see @ref ublox::field::SbasSysVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
struct SbasSys : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        SbasSysVal,
        TExtraOpts...,
        comms::option::ValidNumValueRange<-1, 3>,
        comms::option::ValidNumValue<16>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "sbasSys";
    }
    
};

} // namespace field

} // namespace ublox


