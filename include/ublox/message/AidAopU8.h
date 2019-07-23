/// @file
/// @brief Contains definition of <b>"AID-AOP (ublox-8)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidAopU8.
/// @tparam TOpt Extra options
/// @see @ref AidAopU8
/// @headerfile "ublox/message/AidAopU8.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAopU8Fields
{
    /// @brief Definition of <b>"gnssId"</b> field.
    using GnssId =
        ublox::field::GnssId<
            TOpt
        >;
    
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
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
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
            typename TOpt::message::AidAopU8Fields::Data,
            comms::option::def::SequenceFixedSize<64U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        GnssId,
        Svid,
        Reserved1,
        Data
    >;
};

/// @brief Definition of <b>"AID-AOP (ublox-8)"</b> message class.
/// @details
///     See @ref AidAopU8Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAopU8.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAopU8 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAop>,
        comms::option::def::FieldsImpl<typename AidAopU8Fields<TOpt>::All>,
        comms::option::def::MsgType<AidAopU8<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAop>,
            comms::option::def::FieldsImpl<typename AidAopU8Fields<TOpt>::All>,
            comms::option::def::MsgType<AidAopU8<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_gnssId() for @ref AidAopU8Fields::GnssId field.
    ///     @li @b field_svid() for @ref AidAopU8Fields::Svid field.
    ///     @li @b field_reserved1() for @ref AidAopU8Fields::Reserved1 field.
    ///     @li @b field_data() for @ref AidAopU8Fields::Data field.
    COMMS_MSG_FIELDS_ACCESS(
        gnssId,
        svid,
        reserved1,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 68U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 68U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-AOP (ublox-8)";
    }
    
    
};

} // namespace message

} // namespace ublox


