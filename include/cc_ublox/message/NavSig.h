// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"NAV-SIG"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <limits>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/GnssId.h"
#include "cc_ublox/field/Itow.h"
#include "cc_ublox/field/Res2.h"
#include "cc_ublox/field/Res4.h"
#include "cc_ublox/message/NavSigCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref NavSig.
/// @tparam TOpt Extra options
/// @see @ref NavSig
/// @headerfile cc_ublox/message/NavSig.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct NavSigFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        cc_ublox::field::Itow<
            TOpt
        >;

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
            return cc_ublox::message::NavSigFieldsCommon::VersionCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavSigFieldsCommon::VersionCommon::name();
        }
    };

    /// @brief Definition of <b>"numSigs"</b> field.
    class NumSigs : public
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
            return cc_ublox::message::NavSigFieldsCommon::NumSigsCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavSigFieldsCommon::NumSigsCommon::name();
        }
    };

    /// @brief Definition of <b>"reserved0"</b> field.
    class Reserved0 : public
        cc_ublox::field::Res2<
            TOpt
        >
    {
        using Base =
            cc_ublox::field::Res2<
                TOpt
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavSigFieldsCommon::Reserved0Common::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref List field.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of
        ///     @ref Element field.
        struct ElementMembers
        {
            /// @brief Definition of <b>"gnssId"</b> field.
            using GnssId =
                cc_ublox::field::GnssId<
                    TOpt
                >;

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
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
            };

            /// @brief Definition of <b>"sigId"</b> field.
            class SigId : public
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
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigIdCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigIdCommon::name();
                }
            };

            /// @brief Definition of <b>"freqId"</b> field.
            class FreqId : public
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::ValidNumValueRange<0, 13>
                >
            {
                using Base =
                    comms::field::IntValue<
                        cc_ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::ValidNumValueRange<0, 13>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqIdCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::FreqIdCommon::name();
                }
            };

            /// @brief Definition of <b>"prRes"</b> field.
            class PrRes : public
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::int16_t,
                    comms::option::def::ScalingRatio<1, 10>,
                    comms::option::def::UnitsMeters
                >
            {
                using Base =
                    comms::field::IntValue<
                        cc_ublox::field::FieldBase<>,
                        std::int16_t,
                        comms::option::def::ScalingRatio<1, 10>,
                        comms::option::def::UnitsMeters
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::PrResCommon::hasSpecials();
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
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::PrResCommon::name();
                }
            };

            /// @brief Definition of <b>"qualityInd"</b> field.
            /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueType
            class QualityInd : public
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueType,
                    comms::option::def::ValidNumValueRange<0, 7>
                >
            {
                using Base =
                    comms::field::EnumValue<
                        cc_ublox::field::FieldBase<>,
                        cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueType,
                        comms::option::def::ValidNumValueRange<0, 7>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Single value name info entry.
                using ValueNameInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueNameInfo;

                /// @brief Type returned from @ref valueNamesMap() member function.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueNamesMapInfo.
                using ValueNamesMapInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::ValueNamesMapInfo;

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueName().
                static const char* valueName(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueName(val);
                }

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueName().
                static const char* valueNameOf(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueName(val);
                }

                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::getValue());
                }

                /// @brief Retrieve map of enum value names.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueNamesMap().
                static ValueNamesMapInfo valueNamesMap()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::valueNamesMap();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::QualityIndCommon::name();
                }
            };

            /// @brief Definition of <b>"corrSource"</b> field.
            /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueType
            class CorrSource : public
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueType,
                    comms::option::def::ValidNumValueRange<0, 6>
                >
            {
                using Base =
                    comms::field::EnumValue<
                        cc_ublox::field::FieldBase<>,
                        cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueType,
                        comms::option::def::ValidNumValueRange<0, 6>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Single value name info entry.
                using ValueNameInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueNameInfo;

                /// @brief Type returned from @ref valueNamesMap() member function.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueNamesMapInfo.
                using ValueNamesMapInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::ValueNamesMapInfo;

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueName().
                static const char* valueName(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueName(val);
                }

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueName().
                static const char* valueNameOf(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueName(val);
                }

                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::getValue());
                }

                /// @brief Retrieve map of enum value names.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueNamesMap().
                static ValueNamesMapInfo valueNamesMap()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::valueNamesMap();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::CorrSourceCommon::name();
                }
            };

            /// @brief Definition of <b>"ionoModel"</b> field.
            /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueType
            class IonoModel : public
                comms::field::EnumValue<
                    cc_ublox::field::FieldBase<>,
                    cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueType,
                    comms::option::def::ValidNumValueRange<0, 3>,
                    comms::option::def::ValidNumValue<8>
                >
            {
                using Base =
                    comms::field::EnumValue<
                        cc_ublox::field::FieldBase<>,
                        cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueType,
                        comms::option::def::ValidNumValueRange<0, 3>,
                        comms::option::def::ValidNumValue<8>
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Single value name info entry.
                using ValueNameInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueNameInfo;

                /// @brief Type returned from @ref valueNamesMap() member function.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueNamesMapInfo.
                using ValueNamesMapInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::ValueNamesMapInfo;

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueName().
                static const char* valueName(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueName(val);
                }

                /// @brief Retrieve name of the enum value.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueName().
                static const char* valueNameOf(ValueType val)
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueName(val);
                }

                /// @brief Retrieve name of the @b current value
                const char* valueName() const
                {
                    return valueName(Base::getValue());
                }

                /// @brief Retrieve map of enum value names.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueNamesMap().
                static ValueNamesMapInfo valueNamesMap()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::valueNamesMap();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::IonoModelCommon::name();
                }
            };

            /// @brief Scope for all the member fields of
            ///     @ref SigFlags field.
            struct SigFlagsMembers
            {
                /// @brief Definition of <b>"health"</b> field.
                /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueType
                class Health : public
                    comms::field::EnumValue<
                        cc_ublox::field::FieldBase<>,
                        cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueType,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 2>
                    >
                {
                    using Base =
                        comms::field::EnumValue<
                            cc_ublox::field::FieldBase<>,
                            cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueType,
                            comms::option::def::FixedBitLength<2U>,
                            comms::option::def::ValidNumValueRange<0, 2>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;

                    /// @brief Single value name info entry.
                    using ValueNameInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueNameInfo;

                    /// @brief Type returned from @ref valueNamesMap() member function.
                    /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueNamesMapInfo.
                    using ValueNamesMapInfo = cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::ValueNamesMapInfo;

                    /// @brief Retrieve name of the enum value.
                    /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueName().
                    static const char* valueName(ValueType val)
                    {
                        return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueName(val);
                    }

                    /// @brief Retrieve name of the enum value.
                    /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueName().
                    static const char* valueNameOf(ValueType val)
                    {
                        return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueName(val);
                    }

                    /// @brief Retrieve name of the @b current value
                    const char* valueName() const
                    {
                        return valueName(Base::getValue());
                    }

                    /// @brief Retrieve map of enum value names.
                    /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueNamesMap().
                    static ValueNamesMapInfo valueNamesMap()
                    {
                        return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::valueNamesMap();
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::HealthCommon::name();
                    }
                };

                /// @brief Definition of <b>"bits"</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        cc_ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<14U>,
                        comms::option::def::BitmaskReservedBits<0x3F80U, 0x0U>
                    >
                {
                    using Base =
                        comms::field::BitmaskValue<
                            cc_ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<14U>,
                            comms::option::def::BitmaskReservedBits<0x3F80U, 0x0U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_prSmoothed, @b getBitValue_prSmoothed() and @b setBitValue_prSmoothed().
                    ///      @li @b BitIdx_prUsed, @b getBitValue_prUsed() and @b setBitValue_prUsed().
                    ///      @li @b BitIdx_crUsed, @b getBitValue_crUsed() and @b setBitValue_crUsed().
                    ///      @li @b BitIdx_doUsed, @b getBitValue_doUsed() and @b setBitValue_doUsed().
                    ///      @li @b BitIdx_prCorrUsed, @b getBitValue_prCorrUsed() and @b setBitValue_prCorrUsed().
                    ///      @li @b BitIdx_crCorrUsed, @b getBitValue_crCorrUsed() and @b setBitValue_crCorrUsed().
                    ///      @li @b BitIdx_doCorrUsed, @b getBitValue_doCorrUsed() and @b setBitValue_doCorrUsed().
                    COMMS_BITMASK_BITS_SEQ(
                        prSmoothed,
                        prUsed,
                        crUsed,
                        doUsed,
                        prCorrUsed,
                        crCorrUsed,
                        doCorrUsed
                    );

                    /// @brief Retrieve name of the bit.
                    /// @see @ref cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::BitsCommon::bitName().
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsMembersCommon::BitsCommon::name();
                    }
                };

                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Health,
                       Bits
                    >;
            };

            /// @brief Definition of <b>"sigFlags"</b> field.
            class SigFlags : public
                comms::field::Bitfield<
                    cc_ublox::field::FieldBase<>,
                    typename SigFlagsMembers::All
                >
            {
                using Base =
                    comms::field::Bitfield<
                        cc_ublox::field::FieldBase<>,
                        typename SigFlagsMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated values, types and access functions are:
                ///     @li @b FieldIdx_health index, @b Field_health type and @b field_health() access function -
                ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::SigFlagsMembers::Health member field.
                ///     @li @b FieldIdx_bits index, @b Field_bits type and @b field_bits() access function -
                ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::SigFlagsMembers::Bits member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    health,
                    bits
                );

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::SigFlagsCommon::name();
                }
            };

            /// @brief Definition of <b>"reserved1"</b> field.
            class Reserved1 : public
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
                    return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementMembersCommon::Reserved1Common::name();
                }
            };

            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   GnssId,
                   Svid,
                   SigId,
                   FreqId,
                   PrRes,
                   QualityInd,
                   CorrSource,
                   IonoModel,
                   SigFlags,
                   Reserved1
                >;
        };

        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                cc_ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base =
                comms::field::Bundle<
                    cc_ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated values, types and access functions are:
            ///     @li @b FieldIdx_gnssId index, @b Field_gnssId type and @b field_gnssId() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::GnssId member field.
            ///     @li @b FieldIdx_svid index, @b Field_svid type and @b field_svid() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::Svid member field.
            ///     @li @b FieldIdx_sigId index, @b Field_sigId type and @b field_sigId() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::SigId member field.
            ///     @li @b FieldIdx_freqId index, @b Field_freqId type and @b field_freqId() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::FreqId member field.
            ///     @li @b FieldIdx_prRes index, @b Field_prRes type and @b field_prRes() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::PrRes member field.
            ///     @li @b FieldIdx_qualityInd index, @b Field_qualityInd type and @b field_qualityInd() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::QualityInd member field.
            ///     @li @b FieldIdx_corrSource index, @b Field_corrSource type and @b field_corrSource() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::CorrSource member field.
            ///     @li @b FieldIdx_ionoModel index, @b Field_ionoModel type and @b field_ionoModel() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::IonoModel member field.
            ///     @li @b FieldIdx_sigFlags index, @b Field_sigFlags type and @b field_sigFlags() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::SigFlags member field.
            ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access function -
            ///         for cc_ublox::message::NavSigFields::ListMembers::ElementMembers::Reserved1 member field.
            COMMS_FIELD_MEMBERS_NAMES(
                gnssId,
                svid,
                sigId,
                freqId,
                prRes,
                qualityInd,
                corrSource,
                ionoModel,
                sigFlags,
                reserved1
            );

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::NavSigFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"list"</b> field.
    class List : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::NavSigFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename ListMembers::Element,
                typename TOpt::message::NavSigFields::List,
                comms::option::def::SequenceSizeForcingEnabled
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::NavSigFieldsCommon::ListCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Version,
        NumSigs,
        Reserved0,
        List
    >;
};

/// @brief Definition of <b>"NAV-SIG"</b> message class.
/// @details
///     See @ref NavSigFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/NavSig.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class NavSig : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::NavSig,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_NavSig>,
        comms::option::def::FieldsImpl<typename NavSigFields<TOpt>::All>,
        comms::option::def::MsgType<NavSig<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::NavSig,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_NavSig>,
            comms::option::def::FieldsImpl<typename NavSigFields<TOpt>::All>,
            comms::option::def::MsgType<NavSig<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_itow index, @b Field_itow type and @b field_itow() access fuction
    ///         for @ref NavSigFields::Itow field.
    ///     @li @b FieldIdx_version index, @b Field_version type and @b field_version() access fuction
    ///         for @ref NavSigFields::Version field.
    ///     @li @b FieldIdx_numSigs index, @b Field_numSigs type and @b field_numSigs() access fuction
    ///         for @ref NavSigFields::NumSigs field.
    ///     @li @b FieldIdx_reserved0 index, @b Field_reserved0 type and @b field_reserved0() access fuction
    ///         for @ref NavSigFields::Reserved0 field.
    ///     @li @b FieldIdx_list index, @b Field_list type and @b field_list() access fuction
    ///         for @ref NavSigFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        version,
        numSigs,
        reserved0,
        list
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::NavSigCommon::name();
    }

    /// @brief Generated read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = comms::ErrorStatus::Success;
        do {
            es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
            if (es != comms::ErrorStatus::Success) {
                break;
            }

            readPrepare_list();

            es = Base::template doReadFrom<FieldIdx_list>(iter, len);
        } while (false);
        return es;
    }

    /// @brief Generated refresh functionality.
    bool doRefresh()
    {
       bool updated = Base::doRefresh();
       updated = refresh_list() || updated;
       return updated;
    }

private:
    void readPrepare_list()
    {
        field_list().forceReadElemCount(
            static_cast<std::size_t>(field_numSigs().getValue()));
    }

    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_numSigs().getValue());
            auto realValue = field_list().value().size();
            if (expectedValue == realValue) {
                break;
            }

            using PrefixValueType = typename std::decay<decltype(field_numSigs().getValue())>::type;
            static const auto MaxPrefixValue = static_cast<std::size_t>(std::numeric_limits<PrefixValueType>::max());
            auto maxAllowedValue = std::min(MaxPrefixValue, realValue);
            if (maxAllowedValue < realValue) {
                field_list().value().resize(maxAllowedValue);
            }
            field_numSigs().setValue(maxAllowedValue);
            updated = true;
        } while (false);

        return updated;
    }
};

} // namespace message

} // namespace cc_ublox