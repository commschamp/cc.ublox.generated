// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"psmState"</b> field.

#pragma once

#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/PsmStateCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/field/EnumValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace field
{

/// @brief Definition of <b>"psmState"</b> field.
/// @see @ref cc_ublox::field::PsmStateCommon::ValueType
/// @tparam TOpt Protocol options.
/// @tparam TExtraOpts Extra options.
template <typename TOpt = cc_ublox::options::DefaultOptions, typename... TExtraOpts>
class PsmState : public
    comms::field::EnumValue<
        cc_ublox::field::FieldBase<>,
        cc_ublox::field::PsmStateCommon::ValueType,
        TExtraOpts...,
        comms::option::def::HasName,
        comms::option::def::ValidNumValueRange<0, 5>
    >
{
    using Base =
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::field::PsmStateCommon::ValueType,
            TExtraOpts...,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<0, 5>
        >;
public:
    /// @brief Re-definition of the value type.
    using ValueType = typename Base::ValueType;

    /// @brief Single value name info entry.
    using ValueNameInfo = cc_ublox::field::PsmStateCommon::ValueNameInfo;

    /// @brief Type returned from @ref valueNamesMap() member function.
    /// @see @ref cc_ublox::field::PsmStateCommon::ValueNamesMapInfo.
    using ValueNamesMapInfo = cc_ublox::field::PsmStateCommon::ValueNamesMapInfo;

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::PsmStateCommon::valueName().
    static const char* valueName(ValueType val)
    {
        return cc_ublox::field::PsmStateCommon::valueName(val);
    }

    /// @brief Retrieve name of the enum value.
    /// @see @ref cc_ublox::field::PsmStateCommon::valueName().
    static const char* valueNameOf(ValueType val)
    {
        return cc_ublox::field::PsmStateCommon::valueName(val);
    }

    /// @brief Retrieve name of the @b current value
    const char* valueName() const
    {
        return valueName(Base::getValue());
    }

    /// @brief Retrieve map of enum value names.
    /// @see @ref cc_ublox::field::PsmStateCommon::valueNamesMap().
    static ValueNamesMapInfo valueNamesMap()
    {
        return cc_ublox::field::PsmStateCommon::valueNamesMap();
    }

    /// @brief Name of the field.
    static const char* name()
    {
        return cc_ublox::field::PsmStateCommon::name();
    }
};

} // namespace field

} // namespace cc_ublox
