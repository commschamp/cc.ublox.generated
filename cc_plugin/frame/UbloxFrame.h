#pragma once

#include "ublox/frame/UbloxFrame.h"
#include "cc_plugin/Message.h"
#include "cc_plugin/AllMessages.h"

namespace ublox
{

namespace cc_plugin
{

namespace frame
{

using UbloxFrame =
    ublox::frame::UbloxFrame<
        ublox::cc_plugin::Message,
        ublox::cc_plugin::AllMessages
    >;

} // namespace frame

} // namespace cc_plugin

} // namespace ublox


