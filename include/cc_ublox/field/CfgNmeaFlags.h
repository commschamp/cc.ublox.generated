// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"cfgNmeaFlags"</b> field.

#pragma once

#include "cc_ublox/field/CfgNmeaFlagsCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"cfgNmeaFlags"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNmeaFlags : public
    comms::field::BitmaskValue<
        cc_ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::FixedLength<1U>,
        comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
    >
{
    using Base =
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::HasName,
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

    /// @brief Retrieve name of the bit.
    /// @see @ref cc_ublox::field::CfgNmeaFlagsCommon::bitName().
    static const char* bitName(std::size_t idx)
    {
        return cc_ublox::field::CfgNmeaFlagsCommon::bitName(idx);
    }

    /// @brief Retrieve name of the bit.
    /// @see @ref cc_ublox::field::CfgNmeaFlagsCommon::bitName().
    static const char* bitName(BitIdx idx)
    {
        return bitName(static_cast<std::size_t>(idx));
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgNmeaFlagsCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
