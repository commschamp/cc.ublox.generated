/// @file
/// @brief Contains definition of <b>"cfgCfgMask"</b> field.

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
///     @ref ublox::field::CfgCfgMask field.
struct CfgCfgMaskCommon
{
    /// @brief Retrieve name of the bit
    static const char* bitName(std::size_t idx)
    {
        static const char* Map[] = {
            "ioPort",
            "msgConf",
            "infMsg",
            "navConf",
            "rxmConf",
            nullptr,
            nullptr,
            nullptr,
            "senConf",
            "rinvConf",
            "antConf",
            "logConf",
            "ftsConf"
        };
    
        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
        if (MapSize <= idx) {
            return nullptr;
        }
    
        return Map[idx];
    }
    
};

/// @brief Definition of <b>"cfgCfgMask"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgCfgMask : public
    comms::field::BitmaskValue<
        ublox::field::FieldBase<>,
        TExtraOpts...,
        comms::option::def::FixedLength<4U>,
        comms::option::def::BitmaskReservedBits<0xFFFFE0E0UL, 0x0U>
    >
{
    using Base = 
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            TExtraOpts...,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFE0E0UL, 0x0U>
        >;
public:
    /// @brief Provide names for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///      The generated enum values:
    ///      @li @b BitIdx_ioPort.
    ///      @li @b BitIdx_msgConf.
    ///      @li @b BitIdx_infMsg.
    ///      @li @b BitIdx_navConf.
    ///      @li @b BitIdx_rxmConf.
    ///      @li @b BitIdx_senConf.
    ///      @li @b BitIdx_rinvConf.
    ///      @li @b BitIdx_antConf.
    ///      @li @b BitIdx_logConf.
    ///      @li @b BitIdx_ftsConf.
    COMMS_BITMASK_BITS(
        ioPort=0,
        msgConf=1,
        infMsg=2,
        navConf=3,
        rxmConf=4,
        senConf=8,
        rinvConf=9,
        antConf=10,
        logConf=11,
        ftsConf=12
    );
    
    /// @brief Generates independent access functions for internal bits.
    /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
    ///     related to @b comms::field::BitmaskValue class from COMMS library
    ///     for details.
    ///
    ///     The generated access functions are:
    ///      @li @b getBitValue_ioPort() and @b setBitValue_ioPort().
    ///      @li @b getBitValue_msgConf() and @b setBitValue_msgConf().
    ///      @li @b getBitValue_infMsg() and @b setBitValue_infMsg().
    ///      @li @b getBitValue_navConf() and @b setBitValue_navConf().
    ///      @li @b getBitValue_rxmConf() and @b setBitValue_rxmConf().
    ///      @li @b getBitValue_senConf() and @b setBitValue_senConf().
    ///      @li @b getBitValue_rinvConf() and @b setBitValue_rinvConf().
    ///      @li @b getBitValue_antConf() and @b setBitValue_antConf().
    ///      @li @b getBitValue_logConf() and @b setBitValue_logConf().
    ///      @li @b getBitValue_ftsConf() and @b setBitValue_ftsConf().
    COMMS_BITMASK_BITS_ACCESS(
        ioPort,
        msgConf,
        infMsg,
        navConf,
        rxmConf,
        senConf,
        rinvConf,
        antConf,
        logConf,
        ftsConf
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgCfgMask";
    }
    
    /// @brief Retrieve name of the bit
    static const char* bitName(BitIdx idx)
    {
        return
            ublox::field::CfgCfgMaskCommon::bitName(
                static_cast<std::size_t>(idx));
    }
    
};

} // namespace field

} // namespace ublox


