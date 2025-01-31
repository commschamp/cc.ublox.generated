// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"LOG-CREATE"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res1.h"
#include "cc_ublox/message/LogCreateCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref LogCreate.
/// @tparam TOpt Extra options
/// @see @ref LogCreate
/// @headerfile cc_ublox/message/LogCreate.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct LogCreateFields
{
    /// @brief Definition of <b>"version"</b> field.
    class Version : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::LogCreateFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::LogCreateFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"logCfg"</b> field.
    class LogCfg : public
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            comms::option::def::HasName,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::HasName,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_logCfg, @b getBitValue_logCfg() and @b setBitValue_logCfg().
        COMMS_BITMASK_BITS_SEQ(
            logCfg
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogCfgCommon::bitName().
        static const char* bitName(std::size_t idx)
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogCfgCommon::bitName(idx);
        }

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogCfgCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return bitName(static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogCfgCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res1<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res1<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::LogCreateFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"logSize"</b> field.
    /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueType
    class LogSize : public
        comms::field::EnumValue<
            cc_ublox::field::FieldBase<>,
            cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueType,
            comms::option::def::HasName,
            comms::option::def::ValidNumValueRange<0, 2>
        >
    {
        using Base =
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueType,
                comms::option::def::HasName,
                comms::option::def::ValidNumValueRange<0, 2>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Single value name info entry.
        using ValueNameInfo = cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueNameInfo;

        /// @brief Type returned from @ref valueNamesMap() member function.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueNamesMapInfo.
        using ValueNamesMapInfo = cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::ValueNamesMapInfo;

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueName().
        static const char* valueName(ValueType val)
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueName(val);
        }

        /// @brief Retrieve name of the enum value.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueName().
        static const char* valueNameOf(ValueType val)
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueName(val);
        }

        /// @brief Retrieve name of the @b current value
        const char* valueName() const
        {
            return valueName(Base::getValue());
        }

        /// @brief Retrieve map of enum value names.
        /// @see @ref cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueNamesMap().
        static ValueNamesMapInfo valueNamesMap()
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::valueNamesMap();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::LogCreateFieldsCommon::LogSizeCommon::name();
        }
    };

    /// @brief Definition of <b>"userDefinedSize"</b> field.
    class UserDefinedSize : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::LogCreateFieldsCommon::UserDefinedSizeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::LogCreateFieldsCommon::UserDefinedSizeCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        LogCfg,
        Reserved1,
        LogSize,
        UserDefinedSize
    >;
};

/// @brief Definition of <b>"LOG-CREATE"</b> message class.
/// @details
///     See @ref LogCreateFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/LogCreate.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class LogCreate : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::LogCreate,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_LogCreate>,
        comms::option::def::FieldsImpl<typename LogCreateFields<TOpt>::All>,
        comms::option::def::MsgType<LogCreate<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::LogCreate,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_LogCreate>,
            comms::option::def::FieldsImpl<typename LogCreateFields<TOpt>::All>,
            comms::option::def::MsgType<LogCreate<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref LogCreateFields::Version field.
    ///     @li @b FieldIdx_logCfg index, @b Field_logCfg type and @b field_logCfg() access fuction
    ///         for @ref LogCreateFields::LogCfg field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref LogCreateFields::Reserved1 field.
    ///     @li @b FieldIdx_logSize index, @b Field_logSize type and @b field_logSize() access fuction
    ///         for @ref LogCreateFields::LogSize field.
    ///     @li @b FieldIdx_userDefinedSize index, @b Field_userDefinedSize type and @b field_userDefinedSize() access fuction
    ///         for @ref LogCreateFields::UserDefinedSize field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        logCfg,
        reserved1,
        logSize,
        userDefinedSize
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::LogCreateCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
