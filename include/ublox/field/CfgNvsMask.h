/// @file
/// @brief Contains definition of <b>"cfgNvsMask"</b> field.

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

/// @brief Definition of <b>"cfgNvsMask"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNvsMask : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::FixedLength<4U>,
        comms::option::BitmaskReservedBits<0xDFFDFFFFUL, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::FixedLength<4U>,
            comms::option::BitmaskReservedBits<0xDFFDFFFFUL, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_alm.
    ///      @li @b BitIdx_aop.
    COMMS_BITMASK_BITS(
        alm=17,
        aop=29
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_alm() and @b setBitValue_alm().
    ///      @li @b getBitValue_aop() and @b setBitValue_aop().
    COMMS_BITMASK_BITS_ACCESS(
        alm,
        aop
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNvsMask";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        static const char* Map[] = {
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            "alm",
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            "aop"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        static_assert(MapSize == BitIdx_numOfValues, "Invalid map");
    
        if (MapSize <= static_cast<std::size_t>(idx)) {
            return nullptr;
        }
    
        return Map[static_cast<std::size_t>(idx)];
    }
    
};

} // namespace field

} // namespace ublox


