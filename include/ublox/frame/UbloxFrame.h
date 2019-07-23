/// @file
/// @brief Contains definition of <b>"UbloxFrame"</b> frame class.

#pragma once

#include <cstdint>
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "comms/protocol/ChecksumLayer.h"
#include "comms/protocol/MsgDataLayer.h"
#include "comms/protocol/MsgIdLayer.h"
#include "comms/protocol/MsgSizeLayer.h"
#include "comms/protocol/SyncPrefixLayer.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/frame/checksum/UbloxChecksum.h"
#include "ublox/input/AllMessages.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace frame
{

/// @brief Layers definition of @ref UbloxFrame frame class.
/// @tparam TOpt Protocol options.
/// @see @ref UbloxFrame
/// @headerfile "ublox/frame/UbloxFrame.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct UbloxFrameLayers
{
    /// @brief Definition of layer "Payload".
    using Payload =
        comms::protocol::MsgDataLayer<
            typename TOpt::frame::UbloxFrameLayers::Payload
        >;
    
    /// @brief Scope for field(s) of @ref Length layer.
    struct LengthMembers
    {
        /// @brief Definition of <b>"LENGTH"</b> field.
        struct LENGTH : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "LENGTH";
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Length".
    using Length =
        comms::protocol::MsgSizeLayer<
            typename LengthMembers::LENGTH,
            Payload
        >;
    
    /// @brief Scope for field(s) of @ref Id layer.
    struct IdMembers
    {
        /// @brief Definition of <b>"CLASS + ID"</b> field.
        struct MsgId : public
            ublox::field::MsgId<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "CLASS + ID";
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Id".
    template <typename TMessage, typename TAllMessages>
    using Id =
        comms::protocol::MsgIdLayer<
            typename IdMembers::MsgId,
            TMessage,
            TAllMessages,
            Length,
            typename TOpt::frame::UbloxFrameLayers::Id
        >;
    
    /// @brief Scope for field(s) of @ref Checksum layer.
    struct ChecksumMembers
    {
        /// @brief Definition of <b>"CK"</b> field.
        struct Checksum : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "CK";
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Checksum".
    template <typename TMessage, typename TAllMessages>
    using Checksum =
        comms::protocol::ChecksumLayer<
            typename ChecksumMembers::Checksum,
            ublox::frame::checksum::UbloxChecksum,
            Id<TMessage, TAllMessages>
        >;
    
    /// @brief Scope for field(s) of @ref Sync layer.
    struct SyncMembers
    {
        /// @brief Definition of <b>"SYNC"</b> field.
        struct Sync : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t,
                comms::option::def::FailOnInvalid<comms::ErrorStatus::ProtocolError>,
                comms::option::def::DefaultNumValue<25269>,
                comms::option::def::ValidNumValue<25269>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "SYNC";
            }
            
        };
        
    };
    
    /// @brief Definition of layer "Sync".
    template <typename TMessage, typename TAllMessages>
    using Sync =
        comms::protocol::SyncPrefixLayer<
            typename SyncMembers::Sync,
            Checksum<TMessage, TAllMessages>
        >;
    
    /// @brief Final protocol stack definition.
    template<typename TMessage, typename TAllMessages>
    using Stack = Sync<TMessage, TAllMessages>;
    
};

/// @brief Definition of <b>"UbloxFrame"</b> frame class.
/// @tparam TMessage Common interface class of all the messages
/// @tparam TAllMessages All supported input messages.
/// @tparam TOpt Frame definition options
/// @headerfile "ublox/frame/UbloxFrame.h"
template <
   typename TMessage,
   typename TAllMessages = ublox::input::AllMessages<TMessage>,
   typename TOpt = ublox::options::DefaultOptions
>
class UbloxFrame : public
    UbloxFrameLayers<TOpt>::template Stack<TMessage, TAllMessages>
{
    using Base =
        typename UbloxFrameLayers<TOpt>::template Stack<TMessage, TAllMessages>;
public:
    /// @brief Allow access to frame definition layers.
    /// @details See definition of @b COMMS_PROTOCOL_LAYERS_ACCESS macro
    ///     from COMMS library for details.
    ///
    ///     The generated functions are:
    ///     @li layer_payload() for @ref UbloxFrameLayers::Payload layer.
    ///     @li layer_length() for @ref UbloxFrameLayers::Length layer.
    ///     @li layer_id() for @ref UbloxFrameLayers::Id layer.
    ///     @li layer_checksum() for @ref UbloxFrameLayers::Checksum layer.
    ///     @li layer_sync() for @ref UbloxFrameLayers::Sync layer.
    COMMS_PROTOCOL_LAYERS_ACCESS(
        payload,
        length,
        id,
        checksum,
        sync
    );
};

} // namespace frame

} // namespace ublox


