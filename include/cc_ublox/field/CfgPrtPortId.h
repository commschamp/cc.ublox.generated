// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"cfgPrtPortId"</b> field.

#pragma once

#include "cc_ublox/field/CfgPrtPortIdCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"cfgPrtPortId"</b> field.
/// @see @ref cc_ublox::field::CfgPrtPortIdCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgPrtPortId : public
    comms::field::EnumValue<
        cc_ublox::field::FieldBase<>,
        cc_ublox::field::CfgPrtPortIdCommon::ValueType,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ValidNumValueRange<0, 1>,
        comms::option::def::ValidNumValueRange<3, 4>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::CfgPrtPortIdCommon::ValueType,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<0, 1>,
            comms::option::def::ValidNumValueRange<3, 4>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_ublox::field::CfgPrtPortIdCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_ublox::field::CfgPrtPortIdCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_ublox::field::CfgPrtPortIdCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgPrtPortIdCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_ublox::field::CfgPrtPortIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgPrtPortIdCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_ublox::field::CfgPrtPortIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_ublox::field::CfgPrtPortIdCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_ublox::field::CfgPrtPortIdCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgPrtPortIdCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
