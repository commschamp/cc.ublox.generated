// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"RXM-RAW"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <limits>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res1.h"
#include "cc_ublox/message/RxmRawCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bundle.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref RxmRaw.
/// @tparam TOpt Extra options
/// @see @ref RxmRaw
/// @headerfile cc_ublox/message/RxmRaw.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct RxmRawFields
{
    /// @brief Definition of <b>"rcvTow"</b> field.
    class RcvTow : public
        comms::field::IntValue<
            cc_ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        using Base =
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::int32_t,
                comms::option::def::UnitsMilliseconds
            >;
    public:
        /// @brief Re-definition of the value type.
        using ValueType = typename Base::ValueType;

        /// @brief Compile time detection of special values presence.
        static constexpr bool hasSpecials()
        {
            return cc_ublox::message::RxmRawFieldsCommon::RcvTowCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmRawFieldsCommon::RcvTowCommon::name();
        }
    };

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
            return cc_ublox::message::RxmRawFieldsCommon::WeekCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmRawFieldsCommon::WeekCommon::name();
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
            return cc_ublox::message::RxmRawFieldsCommon::NumSVCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmRawFieldsCommon::NumSVCommon::name();
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
            return cc_ublox::message::RxmRawFieldsCommon::Reserved1Common::name();
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
            /// @brief Definition of <b>"cpMes"</b> field.
            class CpMes : public
                comms::field::FloatValue<
                    cc_ublox::field::FieldBase<>,
                    double
                >
            {
                using Base =
                    comms::field::FloatValue<
                        cc_ublox::field::FieldBase<>,
                        double
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CpMesCommon::hasSpecials();
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CpMesCommon::name();
                }
            };

            /// @brief Definition of <b>"prMes"</b> field.
            class PrMes : public
                comms::field::FloatValue<
                    cc_ublox::field::FieldBase<>,
                    double,
                    comms::option::def::UnitsMeters
                >
            {
                using Base =
                    comms::field::FloatValue<
                        cc_ublox::field::FieldBase<>,
                        double,
                        comms::option::def::UnitsMeters
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::PrMesCommon::hasSpecials();
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::PrMesCommon::name();
                }
            };

            /// @brief Definition of <b>"doMes"</b> field.
            class DoMes : public
                comms::field::FloatValue<
                    cc_ublox::field::FieldBase<>,
                    float,
                    comms::option::def::UnitsHertz
                >
            {
                using Base =
                    comms::field::FloatValue<
                        cc_ublox::field::FieldBase<>,
                        float,
                        comms::option::def::UnitsHertz
                    >;
            public:
                /// @brief Re-definition of the value type.
                using ValueType = typename Base::ValueType;

                /// @brief Compile time detection of special values presence.
                static constexpr bool hasSpecials()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::DoMesCommon::hasSpecials();
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::DoMesCommon::name();
                }
            };

            /// @brief Definition of <b>"sv"</b> field.
            class Sv : public
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::SvCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::SvCommon::name();
                }
            };

            /// @brief Definition of <b>"mesQI"</b> field.
            class MesQI : public
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::MesQICommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::MesQICommon::name();
                }
            };

            /// @brief Definition of <b>"cno"</b> field.
            class Cno : public
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CnoCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::CnoCommon::name();
                }
            };

            /// @brief Definition of <b>"lli"</b> field.
            class Lli : public
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
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::LliCommon::hasSpecials();
                }

                /// @brief Name of the field.
                static const char* name()
                {
                    return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementMembersCommon::LliCommon::name();
                }
            };

            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   CpMes,
                   PrMes,
                   DoMes,
                   Sv,
                   MesQI,
                   Cno,
                   Lli
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
            ///     @li @b FieldIdx_cpMes index, @b Field_cpMes type and @b field_cpMes() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::CpMes member field.
            ///     @li @b FieldIdx_prMes index, @b Field_prMes type and @b field_prMes() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::PrMes member field.
            ///     @li @b FieldIdx_doMes index, @b Field_doMes type and @b field_doMes() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::DoMes member field.
            ///     @li @b FieldIdx_sv index, @b Field_sv type and @b field_sv() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::Sv member field.
            ///     @li @b FieldIdx_mesQI index, @b Field_mesQI type and @b field_mesQI() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::MesQI member field.
            ///     @li @b FieldIdx_cno index, @b Field_cno type and @b field_cno() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::Cno member field.
            ///     @li @b FieldIdx_lli index, @b Field_lli type and @b field_lli() access function -
            ///         for cc_ublox::message::RxmRawFields::ListMembers::ElementMembers::Lli member field.
            COMMS_FIELD_MEMBERS_NAMES(
                cpMes,
                prMes,
                doMes,
                sv,
                mesQI,
                cno,
                lli
            );

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::RxmRawFieldsCommon::ListMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"list"</b> field.
    class List : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::RxmRawFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename ListMembers::Element,
                typename TOpt::message::RxmRawFields::List,
                comms::option::def::SequenceSizeForcingEnabled
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::RxmRawFieldsCommon::ListCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        RcvTow,
        Week,
        NumSV,
        Reserved1,
        List
    >;
};

/// @brief Definition of <b>"RXM-RAW"</b> message class.
/// @details
///     See @ref RxmRawFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/RxmRaw.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class RxmRaw : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmRaw,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmRaw>,
        comms::option::def::FieldsImpl<typename RxmRawFields<TOpt>::All>,
        comms::option::def::MsgType<RxmRaw<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmRaw,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_RxmRaw>,
            comms::option::def::FieldsImpl<typename RxmRawFields<TOpt>::All>,
            comms::option::def::MsgType<RxmRaw<TMsgBase, TOpt> >,
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
    ///     @li @b FieldIdx_rcvTow index, @b Field_rcvTow type and @b field_rcvTow() access fuction
    ///         for @ref RxmRawFields::RcvTow field.
    ///     @li @b FieldIdx_week index, @b Field_week type and @b field_week() access fuction
    ///         for @ref RxmRawFields::Week field.
    ///     @li @b FieldIdx_numSV index, @b Field_numSV type and @b field_numSV() access fuction
    ///         for @ref RxmRawFields::NumSV field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref RxmRawFields::Reserved1 field.
    ///     @li @b FieldIdx_list index, @b Field_list type and @b field_list() access fuction
    ///         for @ref RxmRawFields::List field.
    COMMS_MSG_FIELDS_NAMES(
        rcvTow,
        week,
        numSV,
        reserved1,
        list
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::RxmRawCommon::name();
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