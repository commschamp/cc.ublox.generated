/// @file
/// @brief Contains definition of <b>"RXM-PMREQ"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmPmreqFields.
/// @see @ref RxmPmreqFields
/// @headerfile "ublox/message/RxmPmreq.h"
struct RxmPmreqFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::RxmPmreqFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "backup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref RxmPmreq.
/// @tparam TOpt Extra options
/// @see @ref RxmPmreq
/// @headerfile "ublox/message/RxmPmreq.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmPmreqFields
{
    /// @brief Definition of <b>"duration"</b> field.
    struct Duration : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "duration";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFFFDUL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFFFDUL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_backup.
        COMMS_BITMASK_BITS(
            backup=1
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_backup() and @b setBitValue_backup().
        COMMS_BITMASK_BITS_ACCESS(
            backup
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::RxmPmreqFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Duration,
        Flags
    >;
};

/// @brief Definition of <b>"RXM-PMREQ"</b> message class.
/// @details
///     See @ref RxmPmreqFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmPmreq.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmPmreq : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmPmreq,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmPmreq>,
        comms::option::def::FieldsImpl<typename RxmPmreqFields<TOpt>::All>,
        comms::option::def::MsgType<RxmPmreq<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmPmreq,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmPmreq>,
            comms::option::def::FieldsImpl<typename RxmPmreqFields<TOpt>::All>,
            comms::option::def::MsgType<RxmPmreq<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_duration() for @ref RxmPmreqFields::Duration field.
    ///     @li @b field_flags() for @ref RxmPmreqFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        duration,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-PMREQ";
    }
    
    
};

} // namespace message

} // namespace ublox


