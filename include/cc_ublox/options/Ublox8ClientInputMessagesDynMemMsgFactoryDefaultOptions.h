// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of protocol client input "ublox8" platform scpecific messages dynamic memory allocation message factory options.

#pragma once

#include "cc_ublox/factory/Ublox8ClientInputMessagesDynMemMsgFactory.h"
#include "cc_ublox/options/DefaultOptions.h"

namespace cc_ublox
{

namespace options
{

/// @brief Provided client input "ublox8" platform scpecific messages dynamic memory allocation message factory options of the protocol.
/// @details Must be used as the outermost wrapper of the protocol options.
template <typename TBase = cc_ublox::options::DefaultOptions>
struct Ublox8ClientInputMessagesDynMemMsgFactoryDefaultOptionsT : public TBase
{
    /// @brief Alias to @ref cc_ublox::factory::Ublox8ClientInputMessagesDynMemMsgFactory message factory.
    /// @details Exposes the same template parameters as @b comms::MsgFactory.
    template <typename TInterface, typename TAllMessages, typename... TOptions>
    using MsgFactory = cc_ublox::factory::Ublox8ClientInputMessagesDynMemMsgFactory<TInterface, Ublox8ClientInputMessagesDynMemMsgFactoryDefaultOptionsT<TBase> >;

    /// @brief Extra options for frames.
    struct frame : public TBase::frame
    {
        /// @brief Extra options for layers of
        ///     @ref cc_ublox::frame::UbloxFrame frame.
        struct UbloxFrameLayers : public TBase::frame::UbloxFrameLayers
        {
            /// @brief Extra options for @ref
            ///     cc_ublox::frame::UbloxFrameLayers::Id
            ///     layer.
            using Id =
                std::tuple<
                    comms::option::app::MsgFactoryTempl<MsgFactory>,
                    typename TBase::frame::UbloxFrameLayers::Id
                >;
        }; // struct UbloxFrameLayers
    }; // struct frame
};

/// @brief Alias to @ref Ublox8ClientInputMessagesDynMemMsgFactoryDefaultOptionsT with default template parameter.
using Ublox8ClientInputMessagesDynMemMsgFactoryDefaultOptions = Ublox8ClientInputMessagesDynMemMsgFactoryDefaultOptionsT<>;

} // namespace options

} // namespace cc_ublox
