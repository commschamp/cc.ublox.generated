// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgValdel message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/CfgValKeyIdCommon.h"
#include "ublox/field/Res1Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgValdel message.
/// @see ublox::message::CfgValdelFields
struct CfgValdelFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValdelFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgValdelFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgValdelFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgValdelFields::Layers field.
    struct LayersCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValdelFields::Layers field.
        static const char* name()
        {
            return "layers";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgValdelFields::Layers field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
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
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgValdelFields::Transaction field.
    struct TransactionMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgValdelFields::TransactionMembers::Action field.
        struct ActionCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::CfgValdelFields::TransactionMembers::Action field.
            enum class ValueType : std::uint8_t
            {
                Transactionless = 0, ///< value @b Transactionless.
                Start = 1, ///< value @b Start.
                Ongoing = 2, ///< value @b Ongoing.
                End = 3, ///< value @b End.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 3, ///< Last defined value.
                ValuesLimit = 4, ///< Upper limit for defined values.
                
            };
            
            /// @brief Name of the @ref ublox::message::CfgValdelFields::TransactionMembers::Action field.
            static const char* name()
            {
                return "action";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                static const char* Map[] = {
                    "Transactionless",
                    "Start",
                    "Ongoing",
                    "End"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgValdelFields::TransactionMembers::Action field.
        using ActionVal = ActionCommon::ValueType;
        
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgValdelFields::TransactionMembers::Reserved field.
        struct ReservedCommon : public ublox::field::Res1Common
        {
            /// @brief Name of the @ref ublox::message::CfgValdelFields::TransactionMembers::Reserved field.
            static const char* name()
            {
                return "reserved";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgValdelFields::Transaction field.
    struct TransactionCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValdelFields::Transaction field.
        static const char* name()
        {
            return "transaction";
        }
        
    };
    
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgValdelFields::Reserved0 field.
    struct Reserved0Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::CfgValdelFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::CfgValdelFields::Keys list.
    struct KeysMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::CfgValdelFields::KeysMembers::Element field.
        struct ElementCommon : public ublox::field::CfgValKeyIdCommon
        {
            /// @brief Name of the @ref ublox::message::CfgValdelFields::KeysMembers::Element field.
            static const char* name()
            {
                return "Element";
            }
            
        };
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::CfgValdelFields::Keys field.
    struct KeysCommon
    {
        /// @brief Name of the @ref ublox::message::CfgValdelFields::Keys field.
        static const char* name()
        {
            return "keys";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgValdel message.
/// @see ublox::message::CfgValdel
struct CfgValdelCommon
{
    /// @brief Name of the @ref ublox::message::CfgValdel message.
    static const char* name()
    {
        return "CFG-VALDEL";
    }
    
};

} // namespace message

} // namespace ublox


