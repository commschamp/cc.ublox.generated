/// @file
/// @brief Contains definition of <b>"MGA-ANO"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/Day.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Month.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaAno.
/// @tparam TOpt Extra options
/// @see @ref MgaAno
/// @headerfile "ublox/message/MgaAno.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaAnoFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
        }
        
    };
    
    /// @brief Definition of <b>"gnssId"</b> field.
    using GnssId =
        ublox::field::GnssId<
            TOpt
        >;
    
    /// @brief Definition of <b>"year"</b> field.
    struct Year : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t,
            comms::option::def::FixedLength<1U>,
            comms::option::def::NumValueSerOffset<-2000>,
            comms::option::def::DefaultNumValue<2000>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "year";
        }
        
    };
    
    /// @brief Definition of <b>"month"</b> field.
    using Month =
        ublox::field::Month<
            TOpt
        >;
    
    /// @brief Definition of <b>"day"</b> field.
    using Day =
        ublox::field::Day<
            TOpt
        >;
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::MgaAnoFields::Data,
            comms::option::def::SequenceFixedSize<64U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Svid,
        GnssId,
        Year,
        Month,
        Day,
        Reserved1,
        Data,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-ANO"</b> message class.
/// @details
///     See @ref MgaAnoFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaAno.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaAno : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaAno,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaAno>,
        comms::option::def::FieldsImpl<typename MgaAnoFields<TOpt>::All>,
        comms::option::def::MsgType<MgaAno<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaAno,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaAno>,
            comms::option::def::FieldsImpl<typename MgaAnoFields<TOpt>::All>,
            comms::option::def::MsgType<MgaAno<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Provide names and allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_NAMES macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated types and functions are:
    ///     @li @b Field_type type and @b field_type() fuction
    ///         for @ref MgaAnoFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref MgaAnoFields::Version field.
    ///     @li @b Field_svid type and @b field_svid() fuction
    ///         for @ref MgaAnoFields::Svid field.
    ///     @li @b Field_gnssId type and @b field_gnssId() fuction
    ///         for @ref MgaAnoFields::GnssId field.
    ///     @li @b Field_year type and @b field_year() fuction
    ///         for @ref MgaAnoFields::Year field.
    ///     @li @b Field_month type and @b field_month() fuction
    ///         for @ref MgaAnoFields::Month field.
    ///     @li @b Field_day type and @b field_day() fuction
    ///         for @ref MgaAnoFields::Day field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref MgaAnoFields::Reserved1 field.
    ///     @li @b Field_data type and @b field_data() fuction
    ///         for @ref MgaAnoFields::Data field.
    ///     @li @b Field_reserved2 type and @b field_reserved2() fuction
    ///         for @ref MgaAnoFields::Reserved2 field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        svid,
        gnssId,
        year,
        month,
        day,
        reserved1,
        data,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 76U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 76U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-ANO";
    }
    
    
};

} // namespace message

} // namespace ublox


