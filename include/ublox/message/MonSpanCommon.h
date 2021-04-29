// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonSpan message and its fields.

#pragma once

#include <cstdint>
#include "ublox/field/Res2Common.h"
#include "ublox/field/Res3Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonSpan message.
/// @see ublox::message::MonSpanFields
struct MonSpanFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSpanFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonSpanFields::Version field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonSpanFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSpanFields::NumRfblocks field.
    struct NumRfblocksCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonSpanFields::NumRfblocks field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::MonSpanFields::NumRfblocks field.
        static const char* name()
        {
            return "numRfblocks";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonSpanFields::Reserved0 field.
    struct Reserved0Common : public ublox::field::Res2Common
    {
        /// @brief Name of the @ref ublox::message::MonSpanFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonSpanFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::MonSpanFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Spectrum list.
            struct SpectrumMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::SpectrumMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::MonSpanFields::ListMembers::ElementMembers::SpectrumMembers::Element field.
                    using ValueType = std::uint8_t;
                
                    /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::SpectrumMembers::Element field.
                    static const char* name()
                    {
                        return "element";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Spectrum field.
            struct SpectrumCommon
            {
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Spectrum field.
                static const char* name()
                {
                    return "spectrum";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Span field.
            struct SpanCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonSpanFields::ListMembers::ElementMembers::Span field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Span field.
                static const char* name()
                {
                    return "span";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Res field.
            struct ResCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonSpanFields::ListMembers::ElementMembers::Res field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Res field.
                static const char* name()
                {
                    return "res";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Center field.
            struct CenterCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonSpanFields::ListMembers::ElementMembers::Center field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Center field.
                static const char* name()
                {
                    return "center";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Pga field.
            struct PgaCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonSpanFields::ListMembers::ElementMembers::Pga field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Pga field.
                static const char* name()
                {
                    return "pga";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public ublox::field::Res3Common
            {
                /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::MonSpanFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::MonSpanFields::ListMembers::Element field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonSpanFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::MonSpanFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonSpan message.
/// @see ublox::message::MonSpan
struct MonSpanCommon
{
    /// @brief Name of the @ref ublox::message::MonSpan message.
    static const char* name()
    {
        return "MON-SPAN";
    }
    
};

} // namespace message

} // namespace ublox

