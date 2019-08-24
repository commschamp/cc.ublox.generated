/// @file
/// @brief Contains definition of <b>"CFG-RINV"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/BitmaskValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgRinvFields.
/// @see @ref CfgRinvFields
/// @headerfile "ublox/message/CfgRinv.h"
struct CfgRinvFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgRinvFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "dump",
                "binary"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgRinv.
/// @tparam TOpt Extra options
/// @see @ref CfgRinv
/// @headerfile "ublox/message/CfgRinv.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgRinvFields
{
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_dump, @b getBitValue_dump() and @b setBitValue_dump().
        ///      @li @b BitIdx_binary, @b getBitValue_binary() and @b setBitValue_binary().
        COMMS_BITMASK_BITS_SEQ(
            dump,
            binary
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
                ublox::message::CfgRinvFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::CfgRinvFields::Data
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
        Flags,
        Data
    >;
};

/// @brief Definition of <b>"CFG-RINV"</b> message class.
/// @details
///     See @ref CfgRinvFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgRinv.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgRinv : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRinv>,
        comms::option::def::FieldsImpl<typename CfgRinvFields<TOpt>::All>,
        comms::option::def::MsgType<CfgRinv<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgRinv>,
            comms::option::def::FieldsImpl<typename CfgRinvFields<TOpt>::All>,
            comms::option::def::MsgType<CfgRinv<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref CfgRinvFields::Flags field.
    ///     @li @b field_data() for @ref CfgRinvFields::Data field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 1U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-RINV";
    }
    
    
};

} // namespace message

} // namespace ublox


