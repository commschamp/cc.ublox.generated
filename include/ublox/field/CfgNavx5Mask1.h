/// @file
/// @brief Contains definition of <b>"mask1"</b> field.

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
///     @ref ublox::field::CfgNavx5Mask1 field.
struct CfgNavx5Mask1Common
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            nullptr,
            nullptr,
            "minMax",
            "minCno",
            nullptr,
            nullptr,
            "initial3dfix",
            nullptr,
            nullptr,
            "wknRoll",
            "ackAid",
            nullptr,
            nullptr,
            "ppp",
            "aop"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"mask1"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5Mask1 : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<2U>,
        comms::option::def::BitmaskReservedBits<0x99B3U, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<2U>,
            comms::option::def::BitmaskReservedBits<0x99B3U, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_minMax.
    ///      @li @b BitIdx_minCno.
    ///      @li @b BitIdx_initial3dfix.
    ///      @li @b BitIdx_wknRoll.
    ///      @li @b BitIdx_ackAid.
    ///      @li @b BitIdx_ppp.
    ///      @li @b BitIdx_aop.
    COMMS_BITMASK_BITS(
        minMax=2,
        minCno=3,
        initial3dfix=6,
        wknRoll=9,
        ackAid=10,
        ppp=13,
        aop=14
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_minMax() and @b setBitValue_minMax().
    ///      @li @b getBitValue_minCno() and @b setBitValue_minCno().
    ///      @li @b getBitValue_initial3dfix() and @b setBitValue_initial3dfix().
    ///      @li @b getBitValue_wknRoll() and @b setBitValue_wknRoll().
    ///      @li @b getBitValue_ackAid() and @b setBitValue_ackAid().
    ///      @li @b getBitValue_ppp() and @b setBitValue_ppp().
    ///      @li @b getBitValue_aop() and @b setBitValue_aop().
    COMMS_BITMASK_BITS_ACCESS(
        minMax,
        minCno,
        initial3dfix,
        wknRoll,
        ackAid,
        ppp,
        aop
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "mask1";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgNavx5Mask1Common::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


