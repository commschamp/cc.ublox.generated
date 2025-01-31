// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of <b>"CFG-ODO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res2.h"
#include "cc_ublox/field/Res3.h"
#include "cc_ublox/field/Res6.h"
#include "cc_ublox/message/CfgOdoCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref CfgOdo.
/// @tparam TOpt Extra options
/// @see @ref CfgOdo
/// @headerfile cc_ublox/message/CfgOdo.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct CfgOdoFields
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
            return cc_ublox::message::CfgOdoFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res3<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res3<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            cc_ublox::field::FieldBase<>,
            comms::option::def::HasName,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base =
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::HasName,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_useODO, @b getBitValue_useODO() and @b setBitValue_useODO().
        ///      @li @b BitIdx_useCOG, @b getBitValue_useCOG() and @b setBitValue_useCOG().
        ///      @li @b BitIdx_outLPVel, @b getBitValue_outLPVel() and @b setBitValue_outLPVel().
        ///      @li @b BitIdx_outLPCog, @b getBitValue_outLPCog() and @b setBitValue_outLPCog().
        COMMS_BITMASK_BITS_SEQ(
            useODO,
            useCOG,
            outLPVel,
            outLPCog
        );

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::FlagsCommon::bitName().
        static const char* bitName(std::size_t idx)
        {
            return cc_ublox::message::CfgOdoFieldsCommon::FlagsCommon::bitName(idx);
        }

        /// @brief Retrieve name of the bit.
        /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::FlagsCommon::bitName().
        static const char* bitName(BitIdx idx)
        {
            return bitName(static_cast<std::size_t>(idx));
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::FlagsCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref OdoCfg field.
    struct OdoCfgMembers
    {
        /// @brief Definition of <b>"profile"</b> field.
        /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueType
        class Profile : public
            comms::field::EnumValue<
                cc_ublox::field::FieldBase<>,
                cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueType,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<3U>,
                comms::option::def::ValidNumValueRange<0, 4>
            >
        {
            using Base =
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueType,
                    comms::option::def::HasName,
                    comms::option::def::FixedBitLength<3U>,
                    comms::option::def::ValidNumValueRange<0, 4>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Single value name info entry.
            using ValueNameInfo = cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueNameInfo;

            /// @brief Type returned from @ref valueNamesMap() member function.
            /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueNamesMapInfo.
            using ValueNamesMapInfo = cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::ValueNamesMapInfo;

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueName().
            static const char* valueName(ValueType val)
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueName(val);
            }

            /// @brief Retrieve name of the enum value.
            /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueName().
            static const char* valueNameOf(ValueType val)
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueName(val);
            }

            /// @brief Retrieve name of the @b current value
            const char* valueName() const
            {
                return valueName(Base::getValue());
            }

            /// @brief Retrieve map of enum value names.
            /// @see @ref cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueNamesMap().
            static ValueNamesMapInfo valueNamesMap()
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::valueNamesMap();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ProfileCommon::name();
            }
        };

        /// @brief Definition of <b>"reserved"</b> field.
        /// @details
        ///     Reserved field with 1 byte length
        class Reserved : public
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::FixedBitLength<5U>,
                comms::option::def::ValidNumValue<0>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::HasName,
                    comms::option::def::FixedBitLength<5U>,
                    comms::option::def::ValidNumValue<0>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ReservedCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgMembersCommon::ReservedCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Profile,
               Reserved
            >;
    };

    /// @brief Definition of <b>"odoCfg"</b> field.
    class OdoCfg : public
        comms::field::Bitfield<
            cc_ublox::field::FieldBase<>,
            typename OdoCfgMembers::All,
            comms::option::def::HasName,
            comms::option::def::HasVersionDependentMembers<false>
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_ublox::field::FieldBase<>,
                typename OdoCfgMembers::All,
                comms::option::def::HasName,
                comms::option::def::HasVersionDependentMembers<false>
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_profile index, @b Field_profile type and @b field_profile() access function -
        ///         for cc_ublox::message::CfgOdoFields::OdoCfgMembers::Profile member field.
        ///     @li @b FieldIdx_reserved index, @b Field_reserved type and @b field_reserved() access function -
        ///         for cc_ublox::message::CfgOdoFields::OdoCfgMembers::Reserved member field.
        COMMS_FIELD_MEMBERS_NAMES(
            profile,
            reserved
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::OdoCfgCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved2"</b> field.
    class Reserved2 : public
        cc_ublox::field::Res6<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res6<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::Reserved2Common::name();
        }
    };

    /// @brief Definition of <b>"cogMaxSpeed"</b> field.
    class CogMaxSpeed : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::UnitsMetersPerSecond
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::ScalingRatio<1, 10>,
                comms::option::def::UnitsMetersPerSecond
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogMaxSpeedCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 1U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogMaxSpeedCommon::name();
        }
    };

    /// @brief Definition of <b>"cogMaxPosAcc"</b> field.
    class CogMaxPosAcc : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName,
            comms::option::def::UnitsMeters
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName,
                comms::option::def::UnitsMeters
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogMaxPosAccCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogMaxPosAccCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved3"</b> field.
    class Reserved3 : public
        cc_ublox::field::Res2<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res2<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::Reserved3Common::name();
        }
    };

    /// @brief Definition of <b>"velLpGain"</b> field.
    class VelLpGain : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::VelLpGainCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::VelLpGainCommon::name();
        }
    };

    /// @brief Definition of <b>"cogLpGain"</b> field.
    class CogLpGain : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::HasName
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::HasName
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogLpGainCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::CogLpGainCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved4"</b> field.
    class Reserved4 : public
        cc_ublox::field::Res2<
            TOpt,
            comms::option::def::HasName
        >
    {
        using Base =
            cc_ublox::field::Res2<
                TOpt,
                comms::option::def::HasName
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::CfgOdoFieldsCommon::Reserved4Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Flags,
        OdoCfg,
        Reserved2,
        CogMaxSpeed,
        CogMaxPosAcc,
        Reserved3,
        VelLpGain,
        CogLpGain,
        Reserved4
    >;
};

/// @brief Definition of <b>"CFG-ODO"</b> message class.
/// @details
///     See @ref CfgOdoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/CfgOdo.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class CfgOdo : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgOdo>,
        comms::option::def::FieldsImpl<typename CfgOdoFields<TOpt>::All>,
        comms::option::def::MsgType<CfgOdo<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_CfgOdo>,
            comms::option::def::FieldsImpl<typename CfgOdoFields<TOpt>::All>,
            comms::option::def::MsgType<CfgOdo<TMsgBase, TOpt> >,
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
    ///         for @ref CfgOdoFields::Version field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref CfgOdoFields::Reserved1 field.
    ///     @li @b FieldIdx_flags index, @b Field_flags type and @b field_flags() access fuction
    ///         for @ref CfgOdoFields::Flags field.
    ///     @li @b FieldIdx_odoCfg index, @b Field_odoCfg type and @b field_odoCfg() access fuction
    ///         for @ref CfgOdoFields::OdoCfg field.
    ///     @li @b FieldIdx_reserved2 index, @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref CfgOdoFields::Reserved2 field.
    ///     @li @b FieldIdx_cogMaxSpeed index, @b Field_cogMaxSpeed type and @b field_cogMaxSpeed() access fuction
    ///         for @ref CfgOdoFields::CogMaxSpeed field.
    ///     @li @b FieldIdx_cogMaxPosAcc index, @b Field_cogMaxPosAcc type and @b field_cogMaxPosAcc() access fuction
    ///         for @ref CfgOdoFields::CogMaxPosAcc field.
    ///     @li @b FieldIdx_reserved3 index, @b Field_reserved3 type and @b field_reserved3() access fuction
    ///         for @ref CfgOdoFields::Reserved3 field.
    ///     @li @b FieldIdx_velLpGain index, @b Field_velLpGain type and @b field_velLpGain() access fuction
    ///         for @ref CfgOdoFields::VelLpGain field.
    ///     @li @b FieldIdx_cogLpGain index, @b Field_cogLpGain type and @b field_cogLpGain() access fuction
    ///         for @ref CfgOdoFields::CogLpGain field.
    ///     @li @b FieldIdx_reserved4 index, @b Field_reserved4 type and @b field_reserved4() access fuction
    ///         for @ref CfgOdoFields::Reserved4 field.
    COMMS_MSG_FIELDS_NAMES(
        version,
        reserved1,
        flags,
        odoCfg,
        reserved2,
        cogMaxSpeed,
        cogMaxPosAcc,
        reserved3,
        velLpGain,
        cogLpGain,
        reserved4
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::CfgOdoCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox
