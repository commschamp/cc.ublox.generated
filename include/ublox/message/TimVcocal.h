/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL"</b> message and its fields.

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
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref TimVcocalFields.
/// @see @ref TimVcocalFields
/// @headerfile "ublox/message/TimVcocal.h"
struct TimVcocalFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::TimVcocalFields::OscId field.
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
    ///     @ref ublox::message::TimVcocalFields::OscId field.
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
    
};

/// @brief Fields of @ref TimVcocal.
/// @tparam TOpt Extra options
/// @see @ref TimVcocal
/// @headerfile "ublox/message/TimVcocal.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimVcocalFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<3>,
            comms::option::def::ValidNumValue<3>
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
    ///     @ref ublox::message::TimVcocalFields::OscId field.
    using OscIdVal = ublox::message::TimVcocalFieldsCommon::OscIdVal;
    
    /// @brief Definition of <b>"oscId"</b> field.
    /// @see @ref ublox::message::TimVcocalFields::OscIdVal
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
            return ublox::message::TimVcocalFieldsCommon::OscIdCommon::valueName(val);
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
    
    /// @brief Definition of <b>"gainUncertainty"</b> field.
    struct GainUncertainty : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gainUncertainty";
        }
        
    };
    
    /// @brief Definition of <b>"gainVco"</b> field.
    struct GainVco : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 65536L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gainVco";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        OscId,
        Reserved1,
        GainUncertainty,
        GainVco
    >;
};

/// @brief Definition of <b>"TIM-VCOCAL"</b> message class.
/// @details
///     See @ref TimVcocalFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimVcocal.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimVcocal : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocal,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
        comms::option::def::FieldsImpl<typename TimVcocalFields<TOpt>::All>,
        comms::option::def::MsgType<TimVcocal<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocal,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
            comms::option::def::FieldsImpl<typename TimVcocalFields<TOpt>::All>,
            comms::option::def::MsgType<TimVcocal<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref TimVcocalFields::Type field.
    ///     @li @b field_version() for @ref TimVcocalFields::Version field.
    ///     @li @b field_oscId() for @ref TimVcocalFields::OscId field.
    ///     @li @b field_reserved1() for @ref TimVcocalFields::Reserved1 field.
    ///     @li @b field_gainUncertainty() for @ref TimVcocalFields::GainUncertainty field.
    ///     @li @b field_gainVco() for @ref TimVcocalFields::GainVco field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        oscId,
        reserved1,
        gainUncertainty,
        gainVco
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-VCOCAL";
    }
    
    
};

} // namespace message

} // namespace ublox


