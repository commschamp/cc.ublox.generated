// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"aopOrbMaxErr"</b> field.

#pragma once

#include <cstdint>
#include "cc_ublox/field/CfgNavx5AopOrbMaxErrCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"aopOrbMaxErr"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5AopOrbMaxErr : public
    comms::field::IntValue<
        cc_ublox::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::UnitsMeters,
        comms::option::def::ValidNumValueRange<5, 1000>
    >
{
    using Base =
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::UnitsMeters,
            comms::option::def::ValidNumValueRange<5, 1000>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single special value name info entry.
    using SpecialNameInfo = cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::SpecialNameInfo;

    /// @brief Type returned from @ref specialNamesMap() member function.
    /// @details The @b first value of the pair is pointer to the map array,
    ///     The @b second value of the pair is the size of the array.
    using SpecialNamesMapInfo = cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::SpecialNamesMapInfo;

    /// @brief Compile time detection of special values presence.
    static constexpr bool hasSpecials()
    {
        return cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::hasSpecials();
    }

    /// @brief Special value <b>"Reset"</b>.
    /// @see @ref cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::valueReset().
    static constexpr ValueType valueReset()
    {
        return cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::valueReset();
    }

    /// @brief Check the value is equal to special @ref valueReset().
    bool isReset() const
    {
        return Base::getValue() == valueReset();
    }

    /// @brief Assign special value @ref valueReset() to the field.
    void setReset()
    {
        Base::setValue(valueReset());
    }

    /// @brief Retrieve map of special value names
    static SpecialNamesMapInfo specialNamesMap()
    {
        return cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::specialNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgNavx5AopOrbMaxErrCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox