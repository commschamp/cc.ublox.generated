/// @file
/// @brief Contains definition of <b>"sbasSys"</b> field.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <utility>
#include "comms/field/EnumValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Values enumerator for
///     @ref ublox::field::SbasSys field.
enum class SbasSysVal : std::int8_t
{
    Unknown = -1, ///< value @b Unknown
    WAAS = 0, ///< value @b WAAS
    EGNOS = 1, ///< value @b EGNOS
    MSAS = 2, ///< value @b MSAS
    GAGAN = 3, ///< value @b GAGAN
    GPS = 16, ///< value @b GPS
    
    // --- Extra values generated for convenience ---
    FirstValue = -1, ///< First defined value.
    LastValue = 16, ///< Last defined value.
    ValuesLimit = 17, ///< Upper limit for defined values.
    
};

/// @brief Common functions for
///     @ref ublox::field::SbasSys field.
struct SbasSysCommon
{
    /// @brief Retrieve name of the enum value
    static const char* valueName(SbasSysVal val)
    {
        using NameInfo = std::pair<SbasSysVal, const char*>;
        static const NameInfo Map[] = {
            std::make_pair(SbasSysVal::Unknown, "Unknown"),
            std::make_pair(SbasSysVal::WAAS, "WAAS"),
            std::make_pair(SbasSysVal::EGNOS, "EGNOS"),
            std::make_pair(SbasSysVal::MSAS, "MSAS"),
            std::make_pair(SbasSysVal::GAGAN, "GAGAN"),
            std::make_pair(SbasSysVal::GPS, "GPS")
        };
        
        auto iter = std::lower_bound(
            std::begin(Map), std::end(Map), val,
            [](const NameInfo& info, SbasSysVal v) -> bool
            {
                return info.first < v;
            });
        
        if ((iter == std::end(Map)) || (iter->first != val)) {
            return nullptr;
        }
        
        return iter->second;
    }
    
};

/// @brief Definition of <b>"sbasSys"</b> field.
/// @see @ref ublox::field::SbasSysVal
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
struct SbasSys : public
    comms::field::EnumValue<
        ublox::field::FieldBase<>,
        SbasSysVal,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<-1, 3>,
        comms::option::def::ValidNumValue<16>
    >
{
    /// @brief Name of the field.
    static const char* name()
    {
        return "sbasSys";
    }
    
    /// @brief Retrieve name of the enum value
    static const char* valueName(SbasSysVal val)
    {
        return ublox::field::SbasSysCommon::valueName(val);
    }
    
};

} // namespace field

} // namespace ublox


