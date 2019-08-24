/// @file
/// @brief Contains definition of <b>"cfgNmeaFlags"</b> field.

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
///     @ref ublox::field::CfgNmeaFlags field.
struct CfgNmeaFlagsCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "compat",
            "consider",
            "limit82",
            "highPrec"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"cfgNmeaFlags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaFlags : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<1U>,
        comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >;
public:
    /// @brief Provides names and generates access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values and functions are:
    ///      @li @b BitIdx_compat, @b getBitValue_compat() and @b setBitValue_compat().
    ///      @li @b BitIdx_consider, @b getBitValue_consider() and @b setBitValue_consider().
    ///      @li @b BitIdx_limit82, @b getBitValue_limit82() and @b setBitValue_limit82().
    ///      @li @b BitIdx_highPrec, @b getBitValue_highPrec() and @b setBitValue_highPrec().
    COMMS_BITMASK_BITS_SEQ(
        compat,
        consider,
        limit82,
        highPrec
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgNmeaFlags";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgNmeaFlagsCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


