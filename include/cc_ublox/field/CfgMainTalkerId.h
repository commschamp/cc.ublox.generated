// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"cfgMainTalkerId"</b> field.

#pragma once

#include "cc_ublox/field/CfgMainTalkerIdCommon.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"cfgMainTalkerId"</b> field.
/// @see @ref cc_ublox::field::CfgMainTalkerIdCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class CfgMainTalkerId : public
    comms::field::EnumValue<
        cc_ublox::field::FieldBase<>,
        cc_ublox::field::CfgMainTalkerIdCommon::ValueType,
        TExtraOpts...,
        comms::option::def::ValidNumValueRange<0, 5>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::CfgMainTalkerIdCommon::ValueType,
            TExtraOpts...,
            comms::option::def::ValidNumValueRange<0, 5>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_ublox::field::CfgMainTalkerIdCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_ublox::field::CfgMainTalkerIdCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_ublox::field::CfgMainTalkerIdCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgMainTalkerIdCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_ublox::field::CfgMainTalkerIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::CfgMainTalkerIdCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_ublox::field::CfgMainTalkerIdCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_ublox::field::CfgMainTalkerIdCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_ublox::field::CfgMainTalkerIdCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::CfgMainTalkerIdCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox