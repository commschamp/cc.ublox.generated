/// @file
/// @brief Contains definition of <b>"aopOrbMaxErr"</b> field.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"aopOrbMaxErr"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5AopOrbMaxErr : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint16_t,
        TExtraOpts...,
        comms::option::def::UnitsMeters,
        comms::option::def::ValidNumValueRange<5, 1000>
    >
{
    using Base = 
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            TExtraOpts...,
            comms::option::def::UnitsMeters,
            comms::option::def::ValidNumValueRange<5, 1000>
        >;
public:
    /// @brief Special value <b>"Reset"</b>.
    static constexpr typename Base::ValueType valueReset()
    {
        return static_cast<typename Base::ValueType>(0);
    }
    
    /// @brief Check the value is equal to special @ref valueReset().
    bool isReset() const
    {
        return Base::value() == valueReset();
    }
    
    /// @brief Assign special value @ref valueReset() to the field.
    void setReset()
    {
        Base::value() = valueReset();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "aopOrbMaxErr";
    }
    
};

} // namespace field

} // namespace ublox


