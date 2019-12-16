/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL (Extended)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimVcocalExtFields.
/// @see @ref TimVcocalExtFields
/// @headerfile "ublox/message/TimVcocalExt.h"
struct TimVcocalExtFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::OscId field.
    enum class OscIdVal : std::uint8_t
    {
        Internal = 0, ///< value @b Internal
        External = 1, ///< value @b External
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::TimVcocalExtFields::OscId field.
    struct OscIdCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(OscIdVal val)
        {
            static const char* Map[] = {
                "Internal",
                "External"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
    enum class SrcIdVal : std::uint8_t
    {
        Internal = 0, ///< value @b Internal
        GNSS = 1, ///< value @b GNSS
        EXTINT0 = 2, ///< value @b EXTINT0
        EXTINT1 = 3, ///< value @b EXTINT1
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 3, ///< Last defined value.
        ValuesLimit = 4, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
    struct SrcIdCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(SrcIdVal val)
        {
            static const char* Map[] = {
                "Internal",
                "GNSS",
                "EXTINT0",
                "EXTINT1"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
};

/// @brief Fields of @ref TimVcocalExt.
/// @tparam TOpt Extra options
/// @see @ref TimVcocalExt
/// @headerfile "ublox/message/TimVcocalExt.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimVcocalExtFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
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
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::OscId field.
    using OscIdVal = ublox::message::TimVcocalExtFieldsCommon::OscIdVal;
    
    /// @brief Definition of <b>"oscId"</b> field.
    /// @see @ref ublox::message::TimVcocalExtFields::OscIdVal
    struct OscId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            OscIdVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oscId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(OscIdVal val)
        {
            return ublox::message::TimVcocalExtFieldsCommon::OscIdCommon::valueName(val);
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalExtFields::SrcId field.
    using SrcIdVal = ublox::message::TimVcocalExtFieldsCommon::SrcIdVal;
    
    /// @brief Definition of <b>"srcId"</b> field.
    /// @see @ref ublox::message::TimVcocalExtFields::SrcIdVal
    struct SrcId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            SrcIdVal,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "srcId";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(SrcIdVal val)
        {
            return ublox::message::TimVcocalExtFieldsCommon::SrcIdCommon::valueName(val);
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
    
    /// @brief Definition of <b>"raw0"</b> field.
    struct Raw0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "raw0";
        }
        
    };
    
    /// @brief Definition of <b>"raw1"</b> field.
    struct Raw1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "raw1";
        }
        
    };
    
    /// @brief Definition of <b>"maxStepSize"</b> field.
    struct MaxStepSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxStepSize";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        OscId,
        SrcId,
        Reserved1,
        Raw0,
        Raw1,
        MaxStepSize
    >;
};

/// @brief Definition of <b>"TIM-VCOCAL (Extended)"</b> message class.
/// @details
///     See @ref TimVcocalExtFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimVcocalExt.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimVcocalExt : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocalExt,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
        comms::option::def::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
        comms::option::def::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocalExt,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
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
    ///         for @ref TimVcocalExtFields::Type field.
    ///     @li @b Field_version type and @b field_version() fuction
    ///         for @ref TimVcocalExtFields::Version field.
    ///     @li @b Field_oscId type and @b field_oscId() fuction
    ///         for @ref TimVcocalExtFields::OscId field.
    ///     @li @b Field_srcId type and @b field_srcId() fuction
    ///         for @ref TimVcocalExtFields::SrcId field.
    ///     @li @b Field_reserved1 type and @b field_reserved1() fuction
    ///         for @ref TimVcocalExtFields::Reserved1 field.
    ///     @li @b Field_raw0 type and @b field_raw0() fuction
    ///         for @ref TimVcocalExtFields::Raw0 field.
    ///     @li @b Field_raw1 type and @b field_raw1() fuction
    ///         for @ref TimVcocalExtFields::Raw1 field.
    ///     @li @b Field_maxStepSize type and @b field_maxStepSize() fuction
    ///         for @ref TimVcocalExtFields::MaxStepSize field.
    COMMS_MSG_FIELDS_NAMES(
        type,
        version,
        oscId,
        srcId,
        reserved1,
        raw0,
        raw1,
        maxStepSize
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-VCOCAL (Extended)";
    }
    
    
};

} // namespace message

} // namespace ublox


