// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"MON-TXBUF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res1.h"
#include "cc_ublox/message/MonTxbufCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MonTxbuf.
/// @tparam TOpt Extra options
/// @see @ref MonTxbuf
/// @headerfile cc_ublox/message/MonTxbuf.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MonTxbufFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Pending field.
    struct PendingMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint16_t
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::PendingMembersCommon::ElementCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::PendingMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"pending"</b> field.
    class Pending : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename PendingMembers::Element,
            typename TOpt::message::MonTxbufFields::Pending,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename PendingMembers::Element,
                typename TOpt::message::MonTxbufFields::Pending,
                comms::option::def::SequenceFixedSize<6U>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::PendingCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Usage field.
    struct UsageMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Element : public
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
                return cc_ublox::message::MonTxbufFieldsCommon::UsageMembersCommon::ElementCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::UsageMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"usage"</b> field.
    class Usage : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename UsageMembers::Element,
            typename TOpt::message::MonTxbufFields::Usage,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename UsageMembers::Element,
                typename TOpt::message::MonTxbufFields::Usage,
                comms::option::def::SequenceFixedSize<6U>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::UsageCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref PeakUsage field.
    struct PeakUsageMembers
    {
        /// @brief Definition of <b>""</b> field.
        class Element : public
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
                return cc_ublox::message::MonTxbufFieldsCommon::PeakUsageMembersCommon::ElementCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::PeakUsageMembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"peakUsage"</b> field.
    class PeakUsage : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename PeakUsageMembers::Element,
            typename TOpt::message::MonTxbufFields::PeakUsage,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename PeakUsageMembers::Element,
                typename TOpt::message::MonTxbufFields::PeakUsage,
                comms::option::def::SequenceFixedSize<6U>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::PeakUsageCommon::name();
        }
    };

    /// @brief Definition of <b>"tUsage"</b> field.
    class TUsage : public
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
            return cc_ublox::message::MonTxbufFieldsCommon::TUsageCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::TUsageCommon::name();
        }
    };

    /// @brief Definition of <b>"tPeakusage"</b> field.
    class TPeakusage : public
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
            return cc_ublox::message::MonTxbufFieldsCommon::TPeakusageCommon::hasSpecials();
        }

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::TPeakusageCommon::name();
        }
    };

    /// @brief Scope for all the member fields of
    ///     @ref Errors field.
    struct ErrorsMembers
    {
        /// @brief Definition of <b>"limit"</b> field.
        class Limit : public
            comms::field::IntValue<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>
            >
        {
            using Base =
                comms::field::IntValue<
                    cc_ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FixedBitLength<6U>
                >;
        public:
            /// @brief Re-definition of the value type.
            using ValueType = typename Base::ValueType;

            /// @brief Compile time detection of special values presence.
            static constexpr bool hasSpecials()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::LimitCommon::hasSpecials();
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::LimitCommon::name();
            }
        };

        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                cc_ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base =
                comms::field::BitmaskValue<
                    cc_ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_mem, @b getBitValue_mem() and @b setBitValue_mem().
            ///      @li @b BitIdx_alloc, @b getBitValue_alloc() and @b setBitValue_alloc().
            COMMS_BITMASK_BITS_SEQ(
                mem,
                alloc
            );

            /// @brief Retrieve name of the bit.
            /// @see @ref cc_ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::BitsCommon::bitName().
            static const char* bitName(BitIdx idx)
            {
                return
                    cc_ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }

            /// @brief Name of the field.
            static const char* name()
            {
                return cc_ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::BitsCommon::name();
            }
        };

        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Limit,
               Bits
            >;
    };

    /// @brief Definition of <b>"errors"</b> field.
    class Errors : public
        comms::field::Bitfield<
            cc_ublox::field::FieldBase<>,
            typename ErrorsMembers::All
        >
    {
        using Base =
            comms::field::Bitfield<
                cc_ublox::field::FieldBase<>,
                typename ErrorsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_NAMES macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///     The generated values, types and access functions are:
        ///     @li @b FieldIdx_limit index, @b Field_limit type and @b field_limit() access function -
        ///         for cc_ublox::message::MonTxbufFields::ErrorsMembers::Limit member field.
        ///     @li @b FieldIdx_bits index, @b Field_bits type and @b field_bits() access function -
        ///         for cc_ublox::message::MonTxbufFields::ErrorsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_NAMES(
            limit,
            bits
        );

        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MonTxbufFieldsCommon::ErrorsCommon::name();
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
            return cc_ublox::message::MonTxbufFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Pending,
        Usage,
        PeakUsage,
        TUsage,
        TPeakusage,
        Errors,
        Reserved1
    >;
};

/// @brief Definition of <b>"MON-TXBUF"</b> message class.
/// @details
///     See @ref MonTxbufFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MonTxbuf.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MonTxbuf : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonTxbuf,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MonTxbuf>,
        comms::option::def::FieldsImpl<typename MonTxbufFields<TOpt>::All>,
        comms::option::def::MsgType<MonTxbuf<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonTxbuf,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MonTxbuf>,
            comms::option::def::FieldsImpl<typename MonTxbufFields<TOpt>::All>,
            comms::option::def::MsgType<MonTxbuf<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_pending index, @b Field_pending type and @b field_pending() access fuction
    ///         for @ref MonTxbufFields::Pending field.
    ///     @li @b FieldIdx_usage index, @b Field_usage type and @b field_usage() access fuction
    ///         for @ref MonTxbufFields::Usage field.
    ///     @li @b FieldIdx_peakUsage index, @b Field_peakUsage type and @b field_peakUsage() access fuction
    ///         for @ref MonTxbufFields::PeakUsage field.
    ///     @li @b FieldIdx_tUsage index, @b Field_tUsage type and @b field_tUsage() access fuction
    ///         for @ref MonTxbufFields::TUsage field.
    ///     @li @b FieldIdx_tPeakusage index, @b Field_tPeakusage type and @b field_tPeakusage() access fuction
    ///         for @ref MonTxbufFields::TPeakusage field.
    ///     @li @b FieldIdx_errors index, @b Field_errors type and @b field_errors() access fuction
    ///         for @ref MonTxbufFields::Errors field.
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MonTxbufFields::Reserved1 field.
    COMMS_MSG_FIELDS_NAMES(
        pending,
        usage,
        peakUsage,
        tUsage,
        tPeakusage,
        errors,
        reserved1
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MonTxbufCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox