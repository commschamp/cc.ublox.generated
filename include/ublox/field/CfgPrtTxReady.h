/// @file
/// @brief Contains definition of <b>"cfgPrtTxReady"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace field
{

/// @brief Scope for all the member fields of @ref CfgPrtTxReady bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = ublox::DefaultOptions>
struct CfgPrtTxReadyMembers
{
    /// @brief Definition of <b>""</b> field.
    class Bits : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::FixedBitLength<2U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::FixedBitLength<2U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_en, @b getBitValue_en() and @b setBitValue_en().
        ///      @li @b BitIdx_pol, @b getBitValue_pol() and @b setBitValue_pol().
        COMMS_BITMASK_BITS_SEQ(
            en,
            pol
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "";
        }
        
    };
    
    /// @brief Definition of <b>"pin"</b> field.
    struct Pin : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::FixedBitLength<5U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pin";
        }
        
    };
    
    /// @brief Definition of <b>"thres"</b> field.
    struct Thres : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::FixedBitLength<9U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "thres";
        }
        
    };
    
    /// @brief All members bundled in @b std::tuple.
    using All =
        std::tuple<
           Bits,
           Pin,
           Thres
        >;
};

/// @brief Definition of <b>"cfgPrtTxReady"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::DefaultOptions, typename... TExtraOpts>
class CfgPrtTxReady : public
    comms::field::Bitfield<
        ublox::field::FieldBase<>,
        typename CfgPrtTxReadyMembers<TOpt>::All,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename CfgPrtTxReadyMembers<TOpt>::All,
            TExtraOpts...
        >;
public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
    ///     related to @b comms::field::Bitfield class from COMMS library
    ///     for details.
    ///
    ///      The generated access functions are:
    ///     @li @b field_bits() - for CfgPrtTxReadyMembers::Bits member field.
    ///     @li @b field_pin() - for CfgPrtTxReadyMembers::Pin member field.
    ///     @li @b field_thres() - for CfgPrtTxReadyMembers::Thres member field.
    COMMS_FIELD_MEMBERS_ACCESS(
        bits,
        pin,
        thres
    );
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgPrtTxReady";
    }
    
};

} // namespace field

} // namespace ublox


