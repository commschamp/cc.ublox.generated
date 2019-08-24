/// @file
/// @brief Contains definition of <b>"MON-RXR"</b> message and its fields.

#pragma once

#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonRxrFields.
/// @see @ref MonRxrFields
/// @headerfile "ublox/message/MonRxr.h"
struct MonRxrFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::MonRxrFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "awake"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref MonRxr.
/// @tparam TOpt Extra options
/// @see @ref MonRxr
/// @headerfile "ublox/message/MonRxr.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonRxrFields
{
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFEU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_awake, @b getBitValue_awake() and @b setBitValue_awake().
        COMMS_BITMASK_BITS_SEQ(
            awake
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
                ublox::message::MonRxrFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags
    >;
};

/// @brief Definition of <b>"MON-RXR"</b> message class.
/// @details
///     See @ref MonRxrFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonRxr.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonRxr : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonRxr,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonRxr>,
        comms::option::def::FieldsImpl<typename MonRxrFields<TOpt>::All>,
        comms::option::def::MsgType<MonRxr<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonRxr,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonRxr>,
            comms::option::def::FieldsImpl<typename MonRxrFields<TOpt>::All>,
            comms::option::def::MsgType<MonRxr<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref MonRxrFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 1U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-RXR";
    }
    
    
};

} // namespace message

} // namespace ublox


