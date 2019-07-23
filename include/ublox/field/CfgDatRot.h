/// @file
/// @brief Contains definition of <b>"cfgDatRot"</b> field.

#pragma once

#include "comms/field/FloatValue.h"
#include "comms/options.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace field
{

/// @brief Definition of <b>"cfgDatRot"</b> field.
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgDatRot : public
    comms::field::FloatValue<
        ublox::field::FieldBase<>,
        float,
        TExtraOpts...,
        comms::option::def::InvalidByDefault
    >
{
    using Base = 
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            TExtraOpts...,
            comms::option::def::InvalidByDefault
        >;
public:
    /// @brief Name of the field.
    static const char* name()
    {
        return "cfgDatRot";
    }
    
    /// @brief Custom validity check
    bool valid() const
    {
        if (Base::valid()) {
            return true;
        }
    
        if ((static_cast<typename Base::ValueType>(-20.000000) <= Base::value()) &&
            (Base::value() <= static_cast<typename Base::ValueType>(20.000000))) {
            return true;
        }
        
        return false;
    }
    
};

} // namespace field

} // namespace ublox


