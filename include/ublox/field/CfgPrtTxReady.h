/// @file
/// @brief Contains definition of <b>"cfgPrtTxReady"</b> field.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Scope for all the common definitions of the member fields of
///     @ref ublox::field::CfgPrtTxReady bitfield.
struct CfgPrtTxReadyMembersCommon
{
    /// @brief Common functions for
    ///     @ref ublox::field::CfgPrtTxReadyMembers::Bits field.
    struct BitsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "en",
                "pol"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Scope for all the member fields of @ref CfgPrtTxReady bitfield.
/// @tparam TOpt Protocol options.
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgPrtTxReadyMembers
{
    /// @brief Definition of <b>""</b> field.
    class Bits : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedBitLength<2U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
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
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::field::CfgPrtTxReadyMembersCommon::BitsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"pin"</b> field.
    struct Pin : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FixedBitLength<5U>
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
            comms::option::def::FixedBitLength<9U>
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
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
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


