// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"Val"</b> field.

#pragma once

#include "cc_ublox/field/CfgValSatCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"Val"</b> field.
/// @see @ref cc_ublox::field::CfgValSatCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgValSat : public
    comms::field::EnumValue<
        cc_ublox::field::FieldBase<>,
        cc_ublox::field::CfgValSatCommon::ValueType,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ValidNumValueRange<0, 4>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::CfgValSatCommon::ValueType,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<0, 4>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_ublox::field::CfgValSatCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_ublox::field::CfgValSatCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_ublox::field::CfgValSatCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgValSatCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_ublox::field::CfgValSatCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgValSatCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_ublox::field::CfgValSatCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_ublox::field::CfgValSatCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_ublox::field::CfgValSatCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgValSatCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
