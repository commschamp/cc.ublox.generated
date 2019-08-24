/// @file
/// @brief Contains definition of <b>"RXM-PMREQ (v0)"</b> message and its fields.

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
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref RxmPmreqV0Fields.
/// @see @ref RxmPmreqV0Fields
/// @headerfile "ublox/message/RxmPmreqV0.h"
struct RxmPmreqV0FieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::RxmPmreqV0Fields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "backup",
                "force"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::RxmPmreqV0Fields::WakeupSources field.
    struct WakeupSourcesCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                nullptr,
                nullptr,
                "uartrx",
                nullptr,
                "extint0",
                "extint1",
                "spics"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref RxmPmreqV0.
/// @tparam TOpt Extra options
/// @see @ref RxmPmreqV0
/// @headerfile "ublox/message/RxmPmreqV0.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmPmreqV0Fields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res3<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
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
            comms::option::def::BitmaskReservedBits<0xFFFFFFF9UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFFF9UL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_backup.
        ///      @li @b BitIdx_force.
        COMMS_BITMASK_BITS(
            backup=1,
            force=2
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_backup() and @b setBitValue_backup().
        ///      @li @b getBitValue_force() and @b setBitValue_force().
        COMMS_BITMASK_BITS_ACCESS(
            backup,
            force
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
                ublox::message::RxmPmreqV0FieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"wakeupSources"</b> field.
    class WakeupSources : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFF17UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFF17UL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_uartrx.
        ///      @li @b BitIdx_extint0.
        ///      @li @b BitIdx_extint1.
        ///      @li @b BitIdx_spics.
        COMMS_BITMASK_BITS(
            uartrx=3,
            extint0=5,
            extint1=6,
            spics=7
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_uartrx() and @b setBitValue_uartrx().
        ///      @li @b getBitValue_extint0() and @b setBitValue_extint0().
        ///      @li @b getBitValue_extint1() and @b setBitValue_extint1().
        ///      @li @b getBitValue_spics() and @b setBitValue_spics().
        COMMS_BITMASK_BITS_ACCESS(
            uartrx,
            extint0,
            extint1,
            spics
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "wakeupSources";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::RxmPmreqV0FieldsCommon::WakeupSourcesCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Duration,
        Flags,
        WakeupSources
    >;
};

/// @brief Definition of <b>"RXM-PMREQ (v0)"</b> message class.
/// @details
///     See @ref RxmPmreqV0Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmPmreqV0.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmPmreqV0 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmPmreqV0,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmPmreq>,
        comms::option::def::FieldsImpl<typename RxmPmreqV0Fields<TOpt>::All>,
        comms::option::def::MsgType<RxmPmreqV0<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmPmreqV0,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmPmreq>,
            comms::option::def::FieldsImpl<typename RxmPmreqV0Fields<TOpt>::All>,
            comms::option::def::MsgType<RxmPmreqV0<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref RxmPmreqV0Fields::Version field.
    ///     @li @b field_reserved1() for @ref RxmPmreqV0Fields::Reserved1 field.
    ///     @li @b field_duration() for @ref RxmPmreqV0Fields::Duration field.
    ///     @li @b field_flags() for @ref RxmPmreqV0Fields::Flags field.
    ///     @li @b field_wakeupSources() for @ref RxmPmreqV0Fields::WakeupSources field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        duration,
        flags,
        wakeupSources
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-PMREQ (v0)";
    }
    
    
};

} // namespace message

} // namespace ublox


