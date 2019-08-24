/// @file
/// @brief Contains definition of <b>"mask2"</b> field.

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

/// @brief Common functions for
///     @ref ublox::field::CfgNavx5Mask2 field.
struct CfgNavx5Mask2Common
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            nullptr,
            "adr",
            "sigAttenComp"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"mask2"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5Mask2 : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<4U>,
        comms::option::def::BitmaskReservedBits<0xFFFFFF3FUL, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFF3FUL, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_adr.
    ///      @li @b BitIdx_sigAttenComp.
    COMMS_BITMASK_BITS(
        adr=6,
        sigAttenComp=7
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_adr() and @b setBitValue_adr().
    ///      @li @b getBitValue_sigAttenComp() and @b setBitValue_sigAttenComp().
    COMMS_BITMASK_BITS_ACCESS(
        adr,
        sigAttenComp
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "mask2";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgNavx5Mask2Common::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


