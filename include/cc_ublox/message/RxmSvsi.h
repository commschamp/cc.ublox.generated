// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"RXM-SVSI"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <limits>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Itow.h"
#include "cc_ublox/message/RxmSvsiCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref RxmSvsi.
/// @tparam TOpt Extra options
/// @see @ref RxmSvsi
/// @headerfile cc_ublox/message/RxmSvsi.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct RxmSvsiFields
{
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        cc_ublox::field::Itow<
            TOpt
        >;

    /// @brief Definition of <b>"week"</b> field.
    class Week : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::UnitsWeeks
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int16_t,
                comms::option::def::UnitsWeeks
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::RxmSvsiFieldsCommon::WeekCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmSvsiFieldsCommon::WeekCommon::name();
        }
    };

    /// @brief Definition of <b>"numVis"</b> field.
    class NumVis : public
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
            return cc_ublox::message::RxmSvsiFieldsCommon::NumVisCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmSvsiFieldsCommon::NumVisCommon::name();
        }
    };

    /// @brief Definition of <b>"numSV"</b> field.
    class NumSV : public
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
            return cc_ublox::message::RxmSvsiFieldsCommon::NumSVCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmSvsiFieldsCommon::NumSVCommon::name();
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
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvidCommon::name();
                }
            };

            /// @brief Scope for all the member fields of
            ///     @ref SvFlag field.
            struct SvFlagMembers
            {
                /// @brief Definition of <b>"ura"</b> field.
                class Ura : public
                    comms::field::IntValue<
                        cc_ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    using Base =
                        comms::field::IntValue<
                            cc_ublox::field::FieldBase<>,
                            std::uint8_t,
                            comms::option::def::FixedBitLength<4U>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::UraCommon::hasSpecials();
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::UraCommon::name();
                    }
                };

                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        cc_ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    using Base =
                        comms::field::BitmaskValue<
                            cc_ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<4U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_healthy, @b getBitValue_healthy() and @b setBitValue_healthy().
                    ///      @li @b BitIdx_ephVal, @b getBitValue_ephVal() and @b setBitValue_ephVal().
                    ///      @li @b BitIdx_almVal, @b getBitValue_almVal() and @b setBitValue_almVal().
                    ///      @li @b BitIdx_notAvail, @b getBitValue_notAvail() and @b setBitValue_notAvail().
                    COMMS_BITMASK_BITS_SEQ(
                        healthy,
                        ephVal,
                        almVal,
                        notAvail
                    );

                    /// @brief Retrieve name of the bit.
                    /// @see @ref cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::BitsCommon::bitName().
                    static const char* bitName(BitIdx idx)
                    {
                        return
                            cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagMembersCommon::BitsCommon::name();
                    }
                };

                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Ura,
                       Bits
                    >;
            };

            /// @brief Definition of <b>"svFlag"</b> field.
            class SvFlag : public
                comms::field::Bitfield<
                    cc_ublox::field::FieldBase<>,
                    typename SvFlagMembers::All
                >
            {
                using Base =
                    comms::field::Bitfield<
                        cc_ublox::field::FieldBase<>,
                        typename SvFlagMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated values, types and access functions are:
                ///     @li @b FieldIdx_ura index, @b Field_ura type and @b field_ura() access function -
                ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Ura member field.
                ///     @li @b FieldIdx_bits index, @b Field_bits type and @b field_bits() access function -
                ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlagMembers::Bits member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    ura,
                    bits
                );

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::SvFlagCommon::name();
                }
            };

            /// @brief Definition of <b>"azim"</b> field.
            class Azim : public
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
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AzimCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AzimCommon::name();
                }
            };

            /// @brief Definition of <b>"elev"</b> field.
            class Elev : public
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
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::ElevCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::ElevCommon::name();
                }
            };

            /// @brief Scope for all the member fields of
            ///     @ref Age field.
            struct AgeMembers
            {
                /// @brief Definition of <b>"almAge"</b> field.
                class AlmAge : public
                    comms::field::IntValue<
                        cc_ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    using Base =
                        comms::field::IntValue<
                            cc_ublox::field::FieldBase<>,
                            std::uint8_t,
                            comms::option::def::FixedBitLength<4U>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeMembersCommon::AlmAgeCommon::hasSpecials();
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeMembersCommon::AlmAgeCommon::name();
                    }
                };

                /// @brief Definition of <b>"ephAge"</b> field.
                class EphAge : public
                    comms::field::IntValue<
                        cc_ublox::field::FieldBase<>,
                        std::uint8_t,
                        comms::option::def::FixedBitLength<4U>
                    >
                {
                    using Base =
                        comms::field::IntValue<
                            cc_ublox::field::FieldBase<>,
                            std::uint8_t,
                            comms::option::def::FixedBitLength<4U>
                        >;
                public:
                    /// @brief Re-definition of the value type.
                    using ValueType = typename Base::ValueType;

                    /// @brief Compile time detection of special values presence.
                    static constexpr bool hasSpecials()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeMembersCommon::EphAgeCommon::hasSpecials();
                    }

                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeMembersCommon::EphAgeCommon::name();
                    }
                };

                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       AlmAge,
                       EphAge
                    >;
            };

            /// @brief Definition of <b>"age"</b> field.
            class Age : public
                comms::field::Bitfield<
                    cc_ublox::field::FieldBase<>,
                    typename AgeMembers::All
                >
            {
                using Base =
                    comms::field::Bitfield<
                        cc_ublox::field::FieldBase<>,
                        typename AgeMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///     The generated values, types and access functions are:
                ///     @li @b FieldIdx_almAge index, @b Field_almAge type and @b field_almAge() access function -
                ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::AlmAge member field.
                ///     @li @b FieldIdx_ephAge index, @b Field_ephAge type and @b field_ephAge() access function -
                ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::AgeMembers::EphAge member field.
                COMMS_FIELD_MEMBERS_NAMES(
                    almAge,
                    ephAge
                );

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementMembersCommon::AgeCommon::name();
                }
            };

            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   Svid,
                   SvFlag,
                   Azim,
                   Elev,
                   Age
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
            ///     @li @b FieldIdx_svid index, @b Field_svid type and @b field_svid() access function -
            ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Svid member field.
            ///     @li @b FieldIdx_svFlag index, @b Field_svFlag type and @b field_svFlag() access function -
            ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::SvFlag member field.
            ///     @li @b FieldIdx_azim index, @b Field_azim type and @b field_azim() access function -
            ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Azim member field.
            ///     @li @b FieldIdx_elev index, @b Field_elev type and @b field_elev() access function -
            ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Elev member field.
            ///     @li @b FieldIdx_age index, @b Field_age type and @b field_age() access function -
            ///         for cc_ublox::message::RxmSvsiFields::ListMembers::ElementMembers::Age member field.
            COMMS_FIELD_MEMBERS_NAMES(
                svid,
                svFlag,
                azim,
                elev,
                age
            );

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::RxmSvsiFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"list"</b> field.
    class List : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::RxmSvsiFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename ListMembers::Element,
                typename TOpt::message::RxmSvsiFields::List,
                comms::option::def::SequenceSizeForcingEnabled
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmSvsiFieldsCommon::ListCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Itow,
        Week,
        NumVis,
        NumSV,
        List
    >;
};

/// @brief Definition of <b>"RXM-SVSI"</b> message class.
/// @details
///     See @ref RxmSvsiFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/RxmSvsi.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class RxmSvsi : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmSvsi,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmSvsi>,
        comms::option::def::FieldsImpl<typename RxmSvsiFields<TOpt>::All>,
        comms::option::def::MsgType<RxmSvsi<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmSvsi,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmSvsi>,
            comms::option::def::FieldsImpl<typename RxmSvsiFields<TOpt>::All>,
            comms::option::def::MsgType<RxmSvsi<TMsgBase, TOpt> >,
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
    ///         for @ref RxmSvsiFields::Itow field.
    ///     @li @b FieldIdx_week index, @b Field_week type and @b field_week() access fuction
    ///         for @ref RxmSvsiFields::Week field.
    ///     @li @b FieldIdx_numVis index, @b Field_numVis type and @b field_numVis() access fuction
    ///         for @ref RxmSvsiFields::NumVis field.
    ///     @li @b FieldIdx_numSV index, @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref RxmSvsiFields::NumSV field.
    ///     @li @b FieldIdx_list index, @b Field_list type and @b field_list() access fuction
    ///         for @ref RxmSvsiFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        itow,
        week,
        numVis,
        numSV,
        list
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::RxmSvsiCommon::name();
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
            static_cast<std::size_t>(field_numSV().getValue()));
    }

    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_numSV().getValue());
            auto realValue = field_list().value().size();
            if (expectedValue == realValue) {
                break;
            }

            using PrefixValueType = typename std::decay<decltype(field_numSV().getValue())>::type;
            static const auto MaxPrefixValue = static_cast<std::size_t>(std::numeric_limits<PrefixValueType>::max());
            auto maxAllowedValue = std::min(MaxPrefixValue, realValue);
            if (maxAllowedValue < realValue) {
                field_list().value().resize(maxAllowedValue);
            }
            field_numSV().setValue(maxAllowedValue);
            updated = true;
        } while (false);

        return updated;
    }
};

} // namespace message

} // namespace cc_ublox