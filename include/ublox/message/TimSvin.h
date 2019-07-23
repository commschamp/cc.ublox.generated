/// @file
/// @brief Contains definition of <b>"TIM-SVIN"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
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

/// @brief Fields of @ref TimSvin.
/// @tparam TOpt Extra options
/// @see @ref TimSvin
/// @headerfile "ublox/message/TimSvin.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct TimSvinFields
{
    /// @brief Definition of <b>"dur"</b> field.
    struct Dur : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dur";
        }
        
    };
    
    /// @brief Definition of <b>"meanX"</b> field.
    struct MeanX : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanX";
        }
        
    };
    
    /// @brief Definition of <b>"meanY"</b> field.
    struct MeanY : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanY";
        }
        
    };
    
    /// @brief Definition of <b>"meanZ"</b> field.
    struct MeanZ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::UnitsCentimeters
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanZ";
        }
        
    };
    
    /// @brief Definition of <b>"meanV"</b> field.
    struct MeanV : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "meanV";
        }
        
    };
    
    /// @brief Definition of <b>"obs"</b> field.
    struct Obs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "obs";
        }
        
    };
    
    /// @brief Definition of <b>"valid"</b> field.
    struct Valid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "valid";
        }
        
    };
    
    /// @brief Definition of <b>"active"</b> field.
    struct Active : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "active";
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
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Dur,
        MeanX,
        MeanY,
        MeanZ,
        MeanV,
        Obs,
        Valid,
        Active,
        Reserved1
    >;
};

/// @brief Definition of <b>"TIM-SVIN"</b> message class.
/// @details
///     See @ref TimSvinFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/TimSvin.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class TimSvin : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::TimSvin,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSvin>,
        comms::option::def::FieldsImpl<typename TimSvinFields<TOpt>::All>,
        comms::option::def::MsgType<TimSvin<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::TimSvin,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_TimSvin>,
            comms::option::def::FieldsImpl<typename TimSvinFields<TOpt>::All>,
            comms::option::def::MsgType<TimSvin<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_dur() for @ref TimSvinFields::Dur field.
    ///     @li @b field_meanX() for @ref TimSvinFields::MeanX field.
    ///     @li @b field_meanY() for @ref TimSvinFields::MeanY field.
    ///     @li @b field_meanZ() for @ref TimSvinFields::MeanZ field.
    ///     @li @b field_meanV() for @ref TimSvinFields::MeanV field.
    ///     @li @b field_obs() for @ref TimSvinFields::Obs field.
    ///     @li @b field_valid() for @ref TimSvinFields::Valid field.
    ///     @li @b field_active() for @ref TimSvinFields::Active field.
    ///     @li @b field_reserved1() for @ref TimSvinFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        dur,
        meanX,
        meanY,
        meanZ,
        meanV,
        obs,
        valid,
        active,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "TIM-SVIN";
    }
    
    
};

} // namespace message

} // namespace ublox


