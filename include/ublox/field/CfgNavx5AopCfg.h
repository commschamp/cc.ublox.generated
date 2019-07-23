/// @file
/// @brief Contains definition of <b>"aopCfg"</b> field.

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

/// @brief Definition of <b>"aopCfg"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5AopCfg : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<1U>,
        comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >;
public:
    /// @brief Provides names and generates access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values and functions are:
    ///      @li @b BitIdx_useAOP, @b getBitValue_useAOP() and @b setBitValue_useAOP().
    COMMS_BITMASK_BITS_SEQ(
        useAOP
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "aopCfg";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        static const char* Map[] = {
            "useAOP"
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


