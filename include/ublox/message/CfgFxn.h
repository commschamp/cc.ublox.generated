/// @file
/// @brief Contains definition of <b>"CFG-FXN"</b> message and its fields.

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
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgFxnFields.
/// @see @ref CfgFxnFields
/// @headerfile "ublox/message/CfgFxn.h"
struct CfgFxnFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgFxnFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "sleep",
                nullptr,
                "absAlign",
                "onOff"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgFxn.
/// @tparam TOpt Extra options
/// @see @ref CfgFxn
/// @headerfile "ublox/message/CfgFxn.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgFxnFields
{
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFFE5UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFFE5UL, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_sleep.
        ///      @li @b BitIdx_absAlign.
        ///      @li @b BitIdx_onOff.
        COMMS_BITMASK_BITS(
            sleep=1,
            absAlign=3,
            onOff=4
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_sleep() and @b setBitValue_sleep().
        ///      @li @b getBitValue_absAlign() and @b setBitValue_absAlign().
        ///      @li @b getBitValue_onOff() and @b setBitValue_onOff().
        COMMS_BITMASK_BITS_ACCESS(
            sleep,
            absAlign,
            onOff
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
                ublox::message::CfgFxnFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"tReacq"</b> field.
    struct TReacq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tReacq";
        }
        
    };
    
    /// @brief Definition of <b>"tAcq"</b> field.
    struct TAcq : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAcq";
        }
        
    };
    
    /// @brief Definition of <b>"tReacqOff"</b> field.
    struct TReacqOff : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tReacqOff";
        }
        
    };
    
    /// @brief Definition of <b>"tAcqOff"</b> field.
    struct TAcqOff : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tAcqOff";
        }
        
    };
    
    /// @brief Definition of <b>"tOn"</b> field.
    struct TOn : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tOn";
        }
        
    };
    
    /// @brief Definition of <b>"tOff"</b> field.
    struct TOff : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tOff";
        }
        
    };
    
    /// @brief Definition of <b>"res"</b> field.
    struct Res : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "res";
        }
        
    };
    
    /// @brief Definition of <b>"baseTow"</b> field.
    struct BaseTow : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t,
            comms::option::def::UnitsMilliseconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "baseTow";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Flags,
        TReacq,
        TAcq,
        TReacqOff,
        TAcqOff,
        TOn,
        TOff,
        Res,
        BaseTow
    >;
};

/// @brief Definition of <b>"CFG-FXN"</b> message class.
/// @details
///     See @ref CfgFxnFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgFxn.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgFxn : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgFxn>,
        comms::option::def::FieldsImpl<typename CfgFxnFields<TOpt>::All>,
        comms::option::def::MsgType<CfgFxn<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgFxn>,
            comms::option::def::FieldsImpl<typename CfgFxnFields<TOpt>::All>,
            comms::option::def::MsgType<CfgFxn<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_flags() for @ref CfgFxnFields::Flags field.
    ///     @li @b field_tReacq() for @ref CfgFxnFields::TReacq field.
    ///     @li @b field_tAcq() for @ref CfgFxnFields::TAcq field.
    ///     @li @b field_tReacqOff() for @ref CfgFxnFields::TReacqOff field.
    ///     @li @b field_tAcqOff() for @ref CfgFxnFields::TAcqOff field.
    ///     @li @b field_tOn() for @ref CfgFxnFields::TOn field.
    ///     @li @b field_tOff() for @ref CfgFxnFields::TOff field.
    ///     @li @b field_res() for @ref CfgFxnFields::Res field.
    ///     @li @b field_baseTow() for @ref CfgFxnFields::BaseTow field.
    COMMS_MSG_FIELDS_ACCESS(
        flags,
        tReacq,
        tAcq,
        tReacqOff,
        tAcqOff,
        tOn,
        tOff,
        res,
        baseTow
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 36U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 36U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-FXN";
    }
    
    
};

} // namespace message

} // namespace ublox


