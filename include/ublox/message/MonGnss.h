/// @file
/// @brief Contains definition of <b>"MON-GNSS"</b> message and its fields.

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

/// @brief Common definitions for fields from @ref MonGnssFields.
/// @see @ref MonGnssFields
/// @headerfile "ublox/message/MonGnss.h"
struct MonGnssFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::Supported field.
    struct SupportedCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSSup",
                "GlonassSup",
                "BeidouSup",
                "GalileoSup"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::DefaultGnss field.
    struct DefaultGnssCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSDef",
                "GlonassDef",
                "BeidouDef",
                "GalileoDef"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonGnssFields::Enabled field.
    struct EnabledCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "GPSEna",
                "GlonassEna",
                "BeidouEna",
                "GalileoEna"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref MonGnss.
/// @tparam TOpt Extra options
/// @see @ref MonGnss
/// @headerfile "ublox/message/MonGnss.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonGnssFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"supported"</b> field.
    class Supported : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_GPSSup, @b getBitValue_GPSSup() and @b setBitValue_GPSSup().
        ///      @li @b BitIdx_GlonassSup, @b getBitValue_GlonassSup() and @b setBitValue_GlonassSup().
        ///      @li @b BitIdx_BeidouSup, @b getBitValue_BeidouSup() and @b setBitValue_BeidouSup().
        ///      @li @b BitIdx_GalileoSup, @b getBitValue_GalileoSup() and @b setBitValue_GalileoSup().
        COMMS_BITMASK_BITS_SEQ(
            GPSSup,
            GlonassSup,
            BeidouSup,
            GalileoSup
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "supported";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonGnssFieldsCommon::SupportedCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"defaultGnss"</b> field.
    class DefaultGnss : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_GPSDef, @b getBitValue_GPSDef() and @b setBitValue_GPSDef().
        ///      @li @b BitIdx_GlonassDef, @b getBitValue_GlonassDef() and @b setBitValue_GlonassDef().
        ///      @li @b BitIdx_BeidouDef, @b getBitValue_BeidouDef() and @b setBitValue_BeidouDef().
        ///      @li @b BitIdx_GalileoDef, @b getBitValue_GalileoDef() and @b setBitValue_GalileoDef().
        COMMS_BITMASK_BITS_SEQ(
            GPSDef,
            GlonassDef,
            BeidouDef,
            GalileoDef
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "defaultGnss";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonGnssFieldsCommon::DefaultGnssCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"enabled"</b> field.
    class Enabled : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF0U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_GPSEna, @b getBitValue_GPSEna() and @b setBitValue_GPSEna().
        ///      @li @b BitIdx_GlonassEna, @b getBitValue_GlonassEna() and @b setBitValue_GlonassEna().
        ///      @li @b BitIdx_BeidouEna, @b getBitValue_BeidouEna() and @b setBitValue_BeidouEna().
        ///      @li @b BitIdx_GalileoEna, @b getBitValue_GalileoEna() and @b setBitValue_GalileoEna().
        COMMS_BITMASK_BITS_SEQ(
            GPSEna,
            GlonassEna,
            BeidouEna,
            GalileoEna
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "enabled";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::MonGnssFieldsCommon::EnabledCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"simultaneous"</b> field.
    struct Simultaneous : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "simultaneous";
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Supported,
        DefaultGnss,
        Enabled,
        Simultaneous,
        Reserved1
    >;
};

/// @brief Definition of <b>"MON-GNSS"</b> message class.
/// @details
///     See @ref MonGnssFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonGnss.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonGnss : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonGnss,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonGnss>,
        comms::option::def::FieldsImpl<typename MonGnssFields<TOpt>::All>,
        comms::option::def::MsgType<MonGnss<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonGnss,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonGnss>,
            comms::option::def::FieldsImpl<typename MonGnssFields<TOpt>::All>,
            comms::option::def::MsgType<MonGnss<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref MonGnssFields::Version field.
    ///     @li @b field_supported() for @ref MonGnssFields::Supported field.
    ///     @li @b field_defaultGnss() for @ref MonGnssFields::DefaultGnss field.
    ///     @li @b field_enabled() for @ref MonGnssFields::Enabled field.
    ///     @li @b field_simultaneous() for @ref MonGnssFields::Simultaneous field.
    ///     @li @b field_reserved1() for @ref MonGnssFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        supported,
        defaultGnss,
        enabled,
        simultaneous,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-GNSS";
    }
    
    
};

} // namespace message

} // namespace ublox


