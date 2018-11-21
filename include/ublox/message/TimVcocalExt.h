/// @file
/// @brief Contains definition of <b>"TIM-VCOCAL (Extended)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimVcocalExt.
/// @tparam TOpt Extra options
/// @see @ref TimVcocalExt
/// @headerfile "ublox/message/TimVcocalExt.h"
template <typename TOpt = ublox::DefaultOptions>
struct TimVcocalExtFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::FailOnInvalid<>,
            comms::option::DefaultNumValue<2>,
            comms::option::ValidNumValue<2>
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
            comms::option::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Values enumerator for @ref OscId field.
    enum class OscIdVal : std::uint8_t
    {
        Internal = 0, ///< value @b Internal
        External = 1, ///< value @b External
        
    };
    
    /// @brief Definition of <b>"oscId"</b> field.
    struct OscId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            OscIdVal,
            comms::option::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "oscId";
        }
        
    };
    
    /// @brief Values enumerator for @ref SrcId field.
    enum class SrcIdVal : std::uint8_t
    {
        Internal = 0, ///< value @b Internal
        GNSS = 1, ///< value @b GNSS
        EXTINT0 = 2, ///< value @b EXTINT0
        EXTINT1 = 3, ///< value @b EXTINT1
        
    };
    
    /// @brief Definition of <b>"srcId"</b> field.
    struct SrcId : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            SrcIdVal,
            comms::option::ValidNumValueRange<0, 3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "srcId";
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
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class TimVcocalExt : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimVcocalExt,
        comms::option::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
        comms::option::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
        comms::option::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
        comms::option::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimVcocalExt,
            comms::option::StaticNumIdImpl<ublox::MsgId_TimVcocal>,
            comms::option::FieldsImpl<typename TimVcocalExtFields<TOpt>::All>,
            comms::option::MsgType<TimVcocalExt<TMsgBase, TOpt> >,
            comms::option::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref TimVcocalExtFields::Type field.
    ///     @li @b field_version() for @ref TimVcocalExtFields::Version field.
    ///     @li @b field_oscId() for @ref TimVcocalExtFields::OscId field.
    ///     @li @b field_srcId() for @ref TimVcocalExtFields::SrcId field.
    ///     @li @b field_reserved1() for @ref TimVcocalExtFields::Reserved1 field.
    ///     @li @b field_raw0() for @ref TimVcocalExtFields::Raw0 field.
    ///     @li @b field_raw1() for @ref TimVcocalExtFields::Raw1 field.
    ///     @li @b field_maxStepSize() for @ref TimVcocalExtFields::MaxStepSize field.
    COMMS_MSG_FIELDS_ACCESS(
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


