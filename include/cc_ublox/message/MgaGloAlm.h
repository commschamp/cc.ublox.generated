// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"MGA-GLO-ALM"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res1.h"
#include "cc_ublox/field/Res4.h"
#include "cc_ublox/message/MgaGloAlmCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MgaGloAlm.
/// @tparam TOpt Extra options
/// @see @ref MgaGloAlm
/// @headerfile cc_ublox/message/MgaGloAlm.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MgaGloAlmFields
{
    /// @brief Definition of <b>"type"</b> field.
    class Type : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>,
            comms::option::def::HasCustomRefresh
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FailOnInvalid<>,
                comms::option::def::DefaultNumValue<2>,
                comms::option::def::ValidNumValue<2>,
                comms::option::def::HasCustomRefresh
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TypeCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TypeCommon::name();
        }

        /// @brief Generated refresh functionality.
        bool refresh()
        {
            bool updated = Base::refresh();
            if (Base::valid()) {
                return updated;
            };
            Base::setValue(2);
            return true;
        }
    };

    /// @brief Definition of <b>"version"</b> field.
    class Version : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::ValidNumValue<0>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"svid"</b> field.
    class Svid : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::SvidCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::SvidCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        cc_ublox::field::Res1<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::Res1<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"N"</b> field.
    class N : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::UnitsDays
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::NCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::NCommon::name();
        }
    };

    /// @brief Definition of <b>"M"</b> field.
    class M : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::MCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::MCommon::name();
        }
    };

    /// @brief Definition of <b>"C"</b> field.
    class C : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::CCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::CCommon::name();
        }
    };

    /// @brief Definition of <b>"tau"</b> field.
    class Tau : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::ScalingRatio<1, 262144L>,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int16_t,
                comms::option::def::ScalingRatio<1, 262144L>,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TauCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TauCommon::name();
        }
    };

    /// @brief Definition of <b>"epsilon"</b> field.
    class Epsilon : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::ScalingRatio<1, 1048576L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::EpsilonCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::EpsilonCommon::name();
        }
    };

    /// @brief Definition of <b>"lambda"</b> field.
    class Lambda : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 1048576L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::LambdaCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::LambdaCommon::name();
        }
    };

    /// @brief Definition of <b>"deltaI"</b> field.
    class DeltaI : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1048576L>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 1048576L>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaICommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaICommon::name();
        }
    };

    /// @brief Definition of <b>"tLambda"</b> field.
    class TLambda : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 32>,
            comms::option::def::UnitsSeconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::ScalingRatio<1, 32>,
                comms::option::def::UnitsSeconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TLambdaCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::TLambdaCommon::name();
        }
    };

    /// @brief Definition of <b>"deltaT"</b> field.
    class DeltaT : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 512>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::ScalingRatio<1, 512>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaTCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaTCommon::name();
        }
    };

    /// @brief Definition of <b>"deltaDT"</b> field.
    class DeltaDT : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t,
            comms::option::def::ScalingRatio<1, 16384>
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t,
                comms::option::def::ScalingRatio<1, 16384>
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaDTCommon::hasSpecials();
        }

        /// @brief Requested number of digits after decimal point when value
        ///     is displayed.
        static constexpr unsigned displayDecimals()
        {
            return 0U;
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::DeltaDTCommon::name();
        }
    };

    /// @brief Definition of <b>"H"</b> field.
    class H : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int8_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::HCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::HCommon::name();
        }
    };

    /// @brief Definition of <b>"omega"</b> field.
    class Omega : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int16_t
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::OmegaCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::OmegaCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved2"</b> field.
    class Reserved2 : public
        cc_ublox::field::Res4<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::Res4<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaGloAlmFieldsCommon::Reserved2Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        Reserved1,
        N,
        M,
        C,
        Tau,
        Epsilon,
        Lambda,
        DeltaI,
        TLambda,
        DeltaT,
        DeltaDT,
        H,
        Omega,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-GLO-ALM"</b> message class.
/// @details
///     See @ref MgaGloAlmFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MgaGloAlm.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MgaGloAlm : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaGloAlm,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaGlo>,
        comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
        comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaGloAlm,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaGlo>,
            comms::option::def::FieldsImpl<typename MgaGloAlmFields<TOpt>::All>,
            comms::option::def::MsgType<MgaGloAlm<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_type index, @b Field_type type and @b field_type() access fuction
    ///         for @ref MgaGloAlmFields::Type field.
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref MgaGloAlmFields::Version field.
    ///     @li @b FieldIdx_svid index, @b Field_svid type and @b field_svid() access fuction
    ///         for @ref MgaGloAlmFields::Svid field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaGloAlmFields::Reserved1 field.
    ///     @li @b FieldIdx_n index, @b Field_n type and @b field_n() access fuction
    ///         for @ref MgaGloAlmFields::N field.
    ///     @li @b FieldIdx_m index, @b Field_m type and @b field_m() access fuction
    ///         for @ref MgaGloAlmFields::M field.
    ///     @li @b FieldIdx_c index, @b Field_c type and @b field_c() access fuction
    ///         for @ref MgaGloAlmFields::C field.
    ///     @li @b FieldIdx_tau index, @b Field_tau type and @b field_tau() access fuction
    ///         for @ref MgaGloAlmFields::Tau field.
    ///     @li @b FieldIdx_epsilon index, @b Field_epsilon type and @b field_epsilon() access fuction
    ///         for @ref MgaGloAlmFields::Epsilon field.
    ///     @li @b FieldIdx_lambda index, @b Field_lambda type and @b field_lambda() access fuction
    ///         for @ref MgaGloAlmFields::Lambda field.
    ///     @li @b FieldIdx_deltaI index, @b Field_deltaI type and @b field_deltaI() access fuction
    ///         for @ref MgaGloAlmFields::DeltaI field.
    ///     @li @b FieldIdx_tLambda index, @b Field_tLambda type and @b field_tLambda() access fuction
    ///         for @ref MgaGloAlmFields::TLambda field.
    ///     @li @b FieldIdx_deltaT index, @b Field_deltaT type and @b field_deltaT() access fuction
    ///         for @ref MgaGloAlmFields::DeltaT field.
    ///     @li @b FieldIdx_deltaDT index, @b Field_deltaDT type and @b field_deltaDT() access fuction
    ///         for @ref MgaGloAlmFields::DeltaDT field.
    ///     @li @b FieldIdx_h index, @b Field_h type and @b field_h() access fuction
    ///         for @ref MgaGloAlmFields::H field.
    ///     @li @b FieldIdx_omega index, @b Field_omega type and @b field_omega() access fuction
    ///         for @ref MgaGloAlmFields::Omega field.
    ///     @li @b FieldIdx_reserved2 index, @b Field_reserved2 type and @b field_reserved2() access fuction
    ///         for @ref MgaGloAlmFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        reserved1,
        n,
        m,
        c,
        tau,
        epsilon,
        lambda,
        deltaI,
        tLambda,
        deltaT,
        deltaDT,
        h,
        omega,
        reserved2
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MgaGloAlmCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox