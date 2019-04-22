/// @file
/// @brief Contains definition of <b>"sigAttenCompMode"</b> field.

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

/// @brief Definition of <b>"sigAttenCompMode"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgNavx5SigAttenCompMode : public
    comms::field::IntValue<
        ublox::field::FieldBase<>,
        std::uint8_t,
        TExtraOpts...
    >
{
    using Base = 
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            TExtraOpts...
        >;
public:
    /// @brief Special value <b>"Automatic"</b>.
    static constexpr typename Base::ValueType valueAutomatic()
    {
        return static_cast<typename Base::ValueType>(255);
    }
    
    /// @brief Check the value is equal to special @ref valueAutomatic().
    bool isAutomatic() const
    {
        return Base::value() == valueAutomatic();
    }
    
    /// @brief Assign special value @ref valueAutomatic() to the field.
    void setAutomatic()
    {
        Base::value() = valueAutomatic();
    }
    
    /// @brief Special value <b>"Disabled"</b>.
    static constexpr typename Base::ValueType valueDisabled()
    {
        return static_cast<typename Base::ValueType>(0);
    }
    
    /// @brief Check the value is equal to special @ref valueDisabled().
    bool isDisabled() const
    {
        return Base::value() == valueDisabled();
    }
    
    /// @brief Assign special value @ref valueDisabled() to the field.
    void setDisabled()
    {
        Base::value() = valueDisabled();
    }
    
    /// @brief Name of the field.
    static const char* name()
    {
        return "sigAttenCompMode";
    }
    
};

} // namespace field

} // namespace ublox


