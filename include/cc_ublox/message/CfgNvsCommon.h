// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref cc_ublox::message::CfgNvs message and its fields.

#pragma once

#include <type_traits>
#include "cc_ublox/field/CfgNvsMaskCommon.h"

namespace cc_ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref cc_ublox::message::CfgNvs message.
/// @see cc_ublox::message::CfgNvsFields
struct CfgNvsFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNvsFields::ClearMask field.
    struct ClearMaskCommon : public cc_ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNvsFields::ClearMask field.
        static const char* name()
        {
            return "clearMask";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNvsFields::SaveMask field.
    struct SaveMaskCommon : public cc_ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNvsFields::SaveMask field.
        static const char* name()
        {
            return "saveMask";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNvsFields::LoadMask field.
    struct LoadMaskCommon : public cc_ublox::field::CfgNvsMaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNvsFields::LoadMask field.
        static const char* name()
        {
            return "loadMask";
        }
    };

    /// @brief Common types and functions for
    ///     @ref cc_ublox::message::CfgNvsFields::DeviceMask field.
    struct DeviceMaskCommon
    {
        /// @brief Name of the @ref cc_ublox::message::CfgNvsFields::DeviceMask field.
        static const char* name()
        {
            return "deviceMask";
        }

        /// @brief Retrieve name of the bit of
        ///     @ref cc_ublox::message::CfgNvsFields::DeviceMask field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "devBBR",
                "devFlash",
                "devEEPROM",
                nullptr,
                "devSpiFlash"
            };

            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }

            return Map[idx];
        }
    };
};

/// @brief Common types and functions of 
///     @ref cc_ublox::message::CfgNvs message.
struct CfgNvsCommon
{
    /// @brief Name of the @ref cc_ublox::message::CfgNvs message.
    static const char* name()
    {
        return "CFG-NVS";
    }
};

} // namespace message

} // namespace cc_ublox
