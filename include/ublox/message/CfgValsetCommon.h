// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgValset message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/CfgValPairSimpleCommon.h"
#include "ublox/field/Res2Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgValset message.
/// @see ublox::message::CfgValsetFields
struct CfgValsetFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValsetFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgValsetFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgValsetFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgValsetFields::Layers field.
    struct LayersCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValsetFields::Layers field.
        static const char* name()
        {
            return "layers";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgValsetFields::Layers field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "ram",
                "bbr",
                "flash"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValsetFields::Reserved0 field.
    struct Reserved0Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::CfgValsetFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgValsetFields::Cfgdata list.
    struct CfgdataMembersCommon
    {
        /// @brief Common types and functions for members of
        ///     @ref ublox::message::CfgValsetFields::CfgdataMembers::Element field.
        using ElementMembersCommon = ublox::field::CfgValPairSimpleMembersCommon;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgValsetFields::CfgdataMembers::Element field.
        struct ElementCommon : public ublox::field::CfgValPairSimpleCommon
        {
            /// @brief Name of the @ref ublox::message::CfgValsetFields::CfgdataMembers::Element field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgValsetFields::Cfgdata field.
    struct CfgdataCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValsetFields::Cfgdata field.
        static const char* name()
        {
            return "cfgdata";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgValset message.
/// @see ublox::message::CfgValset
struct CfgValsetCommon
{
    /// @brief Name of the @ref ublox::message::CfgValset message.
    static const char* name()
    {
        return "CFG-VALSET";
    }
    
};

} // namespace message

} // namespace ublox

