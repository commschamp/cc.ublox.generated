/// @file
/// @brief Contains definition of <b>"TIM-FCHG"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Itow.h"
#include "ublox/field/Res3.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref TimFchg.
/// @tparam TOpt Extra options
/// @see @ref TimFchg
/// @headerfile "ublox/message/TimFchg.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimFchgFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t,
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
    
    /// @brief Definition of <b>"iTOW"</b> field.
    using Itow =
        ublox::field::Itow<
            TOpt
        >;
    
    /// @brief Definition of <b>"intDeltaFreq"</b> field.
    struct IntDeltaFreq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "intDeltaFreq";
        }
        
    };
    
    /// @brief Definition of <b>"intDeltaFreqUnc"</b> field.
    struct IntDeltaFreqUnc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "intDeltaFreqUnc";
        }
        
    };
    
    /// @brief Definition of <b>"intRaw"</b> field.
    struct IntRaw : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "intRaw";
        }
        
    };
    
    /// @brief Definition of <b>"extDeltaFreq"</b> field.
    struct ExtDeltaFreq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "extDeltaFreq";
        }
        
    };
    
    /// @brief Definition of <b>"extDeltaFreqUnc"</b> field.
    struct ExtDeltaFreqUnc : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::ScalingRatio<1, 256>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "extDeltaFreqUnc";
        }
        
    };
    
    /// @brief Definition of <b>"extRaw"</b> field.
    struct ExtRaw : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "extRaw";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        Reserved1,
        Itow,
        IntDeltaFreq,
        IntDeltaFreqUnc,
        IntRaw,
        ExtDeltaFreq,
        ExtDeltaFreqUnc,
        ExtRaw
    >;
};

/// @brief Definition of <b>"TIM-FCHG"</b> message class.
/// @details
///     See @ref TimFchgFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimFchg.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimFchg : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimFchg,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimFchg>,
        comms::option::def::FieldsImpl<typename TimFchgFields<TOpt>::All>,
        comms::option::def::MsgType<TimFchg<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimFchg,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimFchg>,
            comms::option::def::FieldsImpl<typename TimFchgFields<TOpt>::All>,
            comms::option::def::MsgType<TimFchg<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_version() for @ref TimFchgFields::Version field.
    ///     @li @b field_reserved1() for @ref TimFchgFields::Reserved1 field.
    ///     @li @b field_itow() for @ref TimFchgFields::Itow field.
    ///     @li @b field_intDeltaFreq() for @ref TimFchgFields::IntDeltaFreq field.
    ///     @li @b field_intDeltaFreqUnc() for @ref TimFchgFields::IntDeltaFreqUnc field.
    ///     @li @b field_intRaw() for @ref TimFchgFields::IntRaw field.
    ///     @li @b field_extDeltaFreq() for @ref TimFchgFields::ExtDeltaFreq field.
    ///     @li @b field_extDeltaFreqUnc() for @ref TimFchgFields::ExtDeltaFreqUnc field.
    ///     @li @b field_extRaw() for @ref TimFchgFields::ExtRaw field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        reserved1,
        itow,
        intDeltaFreq,
        intDeltaFreqUnc,
        intRaw,
        extDeltaFreq,
        extDeltaFreqUnc,
        extRaw
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 32U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 32U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-FCHG";
    }
    
    
};

} // namespace message

} // namespace ublox


