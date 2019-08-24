/// @file
/// @brief Contains definition of <b>"MON-HW2"</b> message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <tuple>
#include <utility>
#include "comms/MessageBase.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res3.h"
#include "ublox/field/Res4.h"
#include "ublox/field/Res8.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonHw2Fields.
/// @see @ref MonHw2Fields
/// @headerfile "ublox/message/MonHw2.h"
struct MonHw2FieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHw2Fields::CfgSource field.
    enum class CfgSourceVal : std::uint8_t
    {
        FlashImage = 102, ///< value @b FlashImage
        OTP = 111, ///< value @b OTP
        ConfigPins = 112, ///< value @b ConfigPins
        ROM = 114, ///< value @b ROM
        
        // --- Extra values generated for convenience ---
        FirstValue = 102, ///< First defined value.
        LastValue = 114, ///< Last defined value.
        ValuesLimit = 115, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonHw2Fields::CfgSource field.
    struct CfgSourceCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(CfgSourceVal val)
        {
            using NameInfo = std::pair<CfgSourceVal, const char*>;
            static const NameInfo Map[] = {
                std::make_pair(CfgSourceVal::FlashImage, "FlashImage"),
                std::make_pair(CfgSourceVal::OTP, "OTP"),
                std::make_pair(CfgSourceVal::ConfigPins, "ConfigPins"),
                std::make_pair(CfgSourceVal::ROM, "ROM")
            };
            
            auto iter = std::lower_bound(
                std::begin(Map), std::end(Map), val,
                [](const NameInfo& info, CfgSourceVal v) -> bool
                {
                    return info.first < v;
                });
            
            if ((iter == std::end(Map)) || (iter->first != val)) {
                return nullptr;
            }
            
            return iter->second;
        }
        
    };
    
};

/// @brief Fields of @ref MonHw2.
/// @tparam TOpt Extra options
/// @see @ref MonHw2
/// @headerfile "ublox/message/MonHw2.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonHw2Fields
{
    /// @brief Definition of <b>"ofsI"</b> field.
    struct OfsI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ofsI";
        }
        
    };
    
    /// @brief Definition of <b>"magI"</b> field.
    struct MagI : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "magI";
        }
        
    };
    
    /// @brief Definition of <b>"ofsQ"</b> field.
    struct OfsQ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ofsQ";
        }
        
    };
    
    /// @brief Definition of <b>"magQ"</b> field.
    struct MagQ : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "magQ";
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::MonHw2Fields::CfgSource field.
    using CfgSourceVal = ublox::message::MonHw2FieldsCommon::CfgSourceVal;
    
    /// @brief Definition of <b>"cfgSource"</b> field.
    /// @see @ref ublox::message::MonHw2Fields::CfgSourceVal
    struct CfgSource : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            CfgSourceVal,
            comms::option::def::ValidNumValue<102>,
            comms::option::def::ValidNumValueRange<111, 112>,
            comms::option::def::ValidNumValue<114>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "cfgSource";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(CfgSourceVal val)
        {
            return ublox::message::MonHw2FieldsCommon::CfgSourceCommon::valueName(val);
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
    
    /// @brief Definition of <b>"lowLevCfg"</b> field.
    struct LowLevCfg : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "lowLevCfg";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res8<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"postStatus"</b> field.
    struct PostStatus : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "postStatus";
        }
        
    };
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        OfsI,
        MagI,
        OfsQ,
        MagQ,
        CfgSource,
        Reserved1,
        LowLevCfg,
        Reserved2,
        PostStatus,
        Reserved3
    >;
};

/// @brief Definition of <b>"MON-HW2"</b> message class.
/// @details
///     See @ref MonHw2Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonHw2.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonHw2 : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonHw2,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
        comms::option::def::FieldsImpl<typename MonHw2Fields<TOpt>::All>,
        comms::option::def::MsgType<MonHw2<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonHw2,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonHw2>,
            comms::option::def::FieldsImpl<typename MonHw2Fields<TOpt>::All>,
            comms::option::def::MsgType<MonHw2<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_ofsI() for @ref MonHw2Fields::OfsI field.
    ///     @li @b field_magI() for @ref MonHw2Fields::MagI field.
    ///     @li @b field_ofsQ() for @ref MonHw2Fields::OfsQ field.
    ///     @li @b field_magQ() for @ref MonHw2Fields::MagQ field.
    ///     @li @b field_cfgSource() for @ref MonHw2Fields::CfgSource field.
    ///     @li @b field_reserved1() for @ref MonHw2Fields::Reserved1 field.
    ///     @li @b field_lowLevCfg() for @ref MonHw2Fields::LowLevCfg field.
    ///     @li @b field_reserved2() for @ref MonHw2Fields::Reserved2 field.
    ///     @li @b field_postStatus() for @ref MonHw2Fields::PostStatus field.
    ///     @li @b field_reserved3() for @ref MonHw2Fields::Reserved3 field.
    COMMS_MSG_FIELDS_ACCESS(
        ofsI,
        magI,
        ofsQ,
        magQ,
        cfgSource,
        reserved1,
        lowLevCfg,
        reserved2,
        postStatus,
        reserved3
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-HW2";
    }
    
    
};

} // namespace message

} // namespace ublox


