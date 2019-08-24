/// @file
/// @brief Contains definition of <b>"sbasService"</b> field.

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
///     @ref ublox::field::SbasService field.
struct SbasServiceCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "Ranging",
            "Corrections",
            "Integrity",
            "Testmode"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"sbasService"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class SbasService : public
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
    ///      @li @b BitIdx_Ranging, @b getBitValue_Ranging() and @b setBitValue_Ranging().
    ///      @li @b BitIdx_Corrections, @b getBitValue_Corrections() and @b setBitValue_Corrections().
    ///      @li @b BitIdx_Integrity, @b getBitValue_Integrity() and @b setBitValue_Integrity().
    ///      @li @b BitIdx_Testmode, @b getBitValue_Testmode() and @b setBitValue_Testmode().
    COMMS_BITMASK_BITS_SEQ(
        Ranging,
        Corrections,
        Integrity,
        Testmode
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "sbasService";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::SbasServiceCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


