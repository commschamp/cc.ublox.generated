// Generated by commsdsl2comms v5.1.3

/// @file
/// @brief Contains definition of <b>"MGA-DBD"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "cc_ublox/MsgId.h"
#include "cc_ublox/field/FieldBase.h"
#include "cc_ublox/field/Res1.h"
#include "cc_ublox/message/MgaDbdCommon.h"
#include "cc_ublox/options/DefaultOptions.h"
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/options.h"

namespace cc_ublox
{

namespace message
{

/// @brief Fields of @ref MgaDbd.
/// @tparam TOpt Extra options
/// @see @ref MgaDbd
/// @headerfile cc_ublox/message/MgaDbd.h
template <typename TOpt = cc_ublox::options::DefaultOptions>
struct MgaDbdFields
{
    /// @brief Scope for all the member fields of
    ///     @ref Reserved1 field.
    struct Reserved1Members
    {
        /// @brief Definition of <b>""</b> field.
        class Element : public
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
                return cc_ublox::message::MgaDbdFieldsCommon::Reserved1MembersCommon::ElementCommon::name();
            }
        };
    };

    /// @brief Definition of <b>"reserved1"</b> field.
    class Reserved1 : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            typename Reserved1Members::Element,
            typename TOpt::message::MgaDbdFields::Reserved1,
            comms::option::def::SequenceFixedSize<12U>
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                typename Reserved1Members::Element,
                typename TOpt::message::MgaDbdFields::Reserved1,
                comms::option::def::SequenceFixedSize<12U>
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaDbdFieldsCommon::Reserved1Common::name();
        }
    };

    /// @brief Definition of <b>"data"</b> field.
    class Data : public
        comms::field::ArrayList<
            cc_ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaDbdFields::Data
        >
    {
        using Base =
            comms::field::ArrayList<
                cc_ublox::field::FieldBase<>,
                std::uint8_t,
                typename TOpt::message::MgaDbdFields::Data
            >;
    public:
        /// @brief Name of the field.
        static const char* name()
        {
            return cc_ublox::message::MgaDbdFieldsCommon::DataCommon::name();
        }
    };

    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Reserved1,
        Data
    >;
};

/// @brief Definition of <b>"MGA-DBD"</b> message class.
/// @details
///     See @ref MgaDbdFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile cc_ublox/message/MgaDbd.h
template <typename TMsgBase, typename TOpt = cc_ublox::options::DefaultOptions>
class MgaDbd : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaDbd>,
        comms::option::def::FieldsImpl<typename MgaDbdFields<TOpt>::All>,
        comms::option::def::MsgType<MgaDbd<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<cc_ublox::MsgId_MgaDbd>,
            comms::option::def::FieldsImpl<typename MgaDbdFields<TOpt>::All>,
            comms::option::def::MsgType<MgaDbd<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated values, types and functions are:
    ///     @li @b FieldIdx_reserved1 index, @b Field_reserved1 type and @b field_reserved1() access fuction
    ///         for @ref MgaDbdFields::Reserved1 field.
    ///     @li @b FieldIdx_data index, @b Field_data type and @b field_data() access fuction
    ///         for @ref MgaDbdFields::Data field.
    COMMS_MSG_FIELDS_NAMES(
        reserved1,
        data
    );

    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");

    /// @brief Name of the message.
    static const char* doName()
    {
        return cc_ublox::message::MgaDbdCommon::name();
    }
};

} // namespace message

} // namespace cc_ublox