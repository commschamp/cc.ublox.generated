// Generated by commsdsl2comms v3.6.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::MonComms message and its fields.

#pragma once

#include <algorithm>
#include <cstdint>
#include <iterator>
#include <type_traits>
#include <utility>
#include "ublox/field/Res1Common.h"
#include "ublox/field/Res8Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::MonComms message.
/// @see ublox::message::MonCommsFields
struct MonCommsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonCommsFields::Version field.
    struct VersionCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonCommsFields::Version field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MonCommsFields::Version field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonCommsFields::NPorts field.
    struct NPortsCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::MonCommsFields::NPorts field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::MonCommsFields::NPorts field.
        static const char* name()
        {
            return "nPorts";
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::MonCommsFields::TxErrors field.
    struct TxErrorsCommon
    {
        /// @brief Name of the @ref ublox::message::MonCommsFields::TxErrors field.
        static const char* name()
        {
            return "txErrors";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::MonCommsFields::TxErrors field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "mem",
                "alloc"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::MonCommsFields::Reserved0 field.
    struct Reserved0Common : public ublox::field::Res1Common
    {
        /// @brief Name of the @ref ublox::message::MonCommsFields::Reserved0 field.
        static const char* name()
        {
            return "reserved0";
        }
        
    };
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonCommsFields::ProtIds list.
    struct ProtIdsMembersCommon
    {
        /// @brief Common types and functions for
        ///     @ref ublox::message::MonCommsFields::ProtIdsMembers::Element field.
        struct ElementCommon
        {
            /// @brief Values enumerator for
            ///     @ref ublox::message::MonCommsFields::ProtIdsMembers::Element field.
            enum class ValueType : std::uint8_t
            {
                UBX = 0, ///< value @b UBX.
                NMEA = 1, ///< value @b NMEA.
                RTCM2 = 2, ///< value @b RTCM2.
                RTCM3 = 5, ///< value @b RTCM3.
                None = 255, ///< value @b None.
                
                // --- Extra values generated for convenience ---
                FirstValue = 0, ///< First defined value.
                LastValue = 255, ///< Last defined value.
                
            };
            
            /// @brief Name of the @ref ublox::message::MonCommsFields::ProtIdsMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(ValueType val)
            {
                using NameInfo = std::pair<ValueType, const char*>;
                static const NameInfo Map[] = {
                    std::make_pair(ValueType::UBX, "UBX"),
                    std::make_pair(ValueType::NMEA, "NMEA"),
                    std::make_pair(ValueType::RTCM2, "RTCM2"),
                    std::make_pair(ValueType::RTCM3, "RTCM3"),
                    std::make_pair(ValueType::None, "None")
                };
                
                auto iter = std::lower_bound(
                    std::begin(Map), std::end(Map), val,
                    [](const NameInfo& info, ValueType v) -> bool
                    {
                        return info.first < v;
                    });
                
                if ((iter == std::end(Map)) || (iter->first != val)) {
                    return nullptr;
                }
                
                return iter->second;
            }
            
        };
        
        /// @brief Values enumerator for
        ///     @ref ublox::message::MonCommsFields::ProtIdsMembers::Element field.
        using ElementVal = ElementCommon::ValueType;
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonCommsFields::ProtIds field.
    struct ProtIdsCommon
    {
        /// @brief Name of the @ref ublox::message::MonCommsFields::ProtIds field.
        static const char* name()
        {
            return "protIds";
        }
        
    };
    
    
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonCommsFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::MonCommsFields::ListMembers::Element field.
        struct ElementMembersCommon
        {
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::PortId field.
            struct PortIdCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::PortId field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::PortId field.
                static const char* name()
                {
                    return "portId";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPending field.
            struct TxPendingCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPending field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPending field.
                static const char* name()
                {
                    return "txPending";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxBytes field.
            struct TxBytesCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::TxBytes field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxBytes field.
                static const char* name()
                {
                    return "txBytes";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxUsage field.
            struct TxUsageCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::TxUsage field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxUsage field.
                static const char* name()
                {
                    return "txUsage";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPeakUsage field.
            struct TxPeakUsageCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPeakUsage field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::TxPeakUsage field.
                static const char* name()
                {
                    return "txPeakUsage";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPending field.
            struct RxPendingCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPending field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPending field.
                static const char* name()
                {
                    return "rxPending";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxBytes field.
            struct RxBytesCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::RxBytes field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxBytes field.
                static const char* name()
                {
                    return "rxBytes";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxUsage field.
            struct RxUsageCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::RxUsage field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxUsage field.
                static const char* name()
                {
                    return "rxUsage";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPeakUsage field.
            struct RxPeakUsageCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPeakUsage field.
                using ValueType = std::uint8_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::RxPeakUsage field.
                static const char* name()
                {
                    return "rxPeakUsage";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::OverrunErrs field.
            struct OverrunErrsCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::OverrunErrs field.
                using ValueType = std::uint16_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::OverrunErrs field.
                static const char* name()
                {
                    return "overrunErrs";
                }
                
            };
            
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Msgs list.
            struct MsgsMembersCommon
            {
                /// @brief Common types and functions for
                ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::MsgsMembers::Element field.
                struct ElementCommon
                {
                    /// @brief Re-definition of the value type used by
                    ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::MsgsMembers::Element field.
                    using ValueType = std::uint16_t;
                
                    /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::MsgsMembers::Element field.
                    static const char* name()
                    {
                        return "element";
                    }
                    
                };
                
            };
            
            /// @brief Scope for all the common definitions of the
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Msgs field.
            struct MsgsCommon
            {
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Msgs field.
                static const char* name()
                {
                    return "msgs";
                }
                
            };
            
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Reserved1 field.
            struct Reserved1Common : public ublox::field::Res8Common
            {
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Reserved1 field.
                static const char* name()
                {
                    return "reserved1";
                }
                
            };
            
            /// @brief Common types and functions for
            ///     @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Skipped field.
            struct SkippedCommon
            {
                /// @brief Re-definition of the value type used by
                ///     ublox::message::MonCommsFields::ListMembers::ElementMembers::Skipped field.
                using ValueType = std::uint32_t;
            
                /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::ElementMembers::Skipped field.
                static const char* name()
                {
                    return "skipped";
                }
                
            };
            
        };
        
        /// @brief Scope for all the common definitions of the
        ///     @ref ublox::message::MonCommsFields::ListMembers::Element field.
        struct ElementCommon
        {
            /// @brief Name of the @ref ublox::message::MonCommsFields::ListMembers::Element field.
            static const char* name()
            {
                return "";
            }
            
        };
        
        
    };
    
    /// @brief Scope for all the common definitions of the
    ///     @ref ublox::message::MonCommsFields::List field.
    struct ListCommon
    {
        /// @brief Name of the @ref ublox::message::MonCommsFields::List field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::MonComms message.
/// @see ublox::message::MonComms
struct MonCommsCommon
{
    /// @brief Name of the @ref ublox::message::MonComms message.
    static const char* name()
    {
        return "MON-COMMS";
    }
    
};

} // namespace message

} // namespace ublox


