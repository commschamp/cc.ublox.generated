/// @file
/// @brief Contains dispatch to handling function(s) for "ublox7" all input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox7Messages.h"

namespace ublox
{

namespace dispatch
{

/// @brief Dispatch message object to its appropriate handling function.
/// @details @b switch statement based (on message ID) cast and dispatch functionality.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object. Must define
///     @b handle() member function for every message type it exects
///     to handle and one for the interface class as well.
///     @code
///     using MyInterface = ublox::Message<...>;
///     using MyNavPosecef = ublox::message::NavPosecef<MyInterface, ublox::options::DefaultOptions>;
///     using MyNavPosecefPoll = ublox::message::NavPosecefPoll<MyInterface, ublox::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyNavPosecef& msg) {...}
///         void handle(MyNavPosecefPoll& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in ublox/dispatch/DispatchUblox7Message.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox7Message(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case ublox::MsgId_NavPosecef:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavPosecef<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavPosecefPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavPosllh:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavPosllh<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavPosllhPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavStatus:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavStatus<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavStatusPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavDop:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavDop<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavDopPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSol:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSol<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSolPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavPvt:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavPvt<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavPvtPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavVelecef:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavVelecef<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavVelecefPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavVelned:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavVelned<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavVelnedPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavTimegps:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavTimegps<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavTimegpsPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavTimeutc:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavTimeutc<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavTimeutcPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavClock:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavClock<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavClockPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSvinfo:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSvinfo<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSvinfoPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavDgps:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavDgps<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavDgpsPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavSbas:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavSbas<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavSbasPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_NavAopstatus:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::NavAopstatus<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::NavAopstatusPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmRaw:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmRaw<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmRawPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmSfrb:
    {
        using MsgType = ublox::message::RxmSfrb<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_RxmSvsi:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmSvsi<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmSvsiPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmAlm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmAlm<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmAlmPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::RxmAlmPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmEph:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::RxmEph<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::RxmEphPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::RxmEphPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_RxmPmreq:
    {
        using MsgType = ublox::message::RxmPmreq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_InfError:
    {
        using MsgType = ublox::message::InfError<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_InfWarning:
    {
        using MsgType = ublox::message::InfWarning<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_InfNotice:
    {
        using MsgType = ublox::message::InfNotice<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_InfTest:
    {
        using MsgType = ublox::message::InfTest<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_InfDebug:
    {
        using MsgType = ublox::message::InfDebug<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_AckNak:
    {
        using MsgType = ublox::message::AckNak<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_AckAck:
    {
        using MsgType = ublox::message::AckAck<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_CfgPrt:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgPrtDdc<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgPrtUart<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgPrtUsb<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 3U:
        {
            using MsgType = ublox::message::CfgPrtSpi<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 4U:
        {
            using MsgType = ublox::message::CfgPrtPortPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 5U:
        {
            using MsgType = ublox::message::CfgPrtPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgMsg:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgMsg<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgMsgCurrent<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgMsgPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgInf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgInf<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgInfPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRst:
    {
        using MsgType = ublox::message::CfgRst<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_CfgDat:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgDat<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgDatUser<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgDatPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRate:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRate<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRatePoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgCfg:
    {
        using MsgType = ublox::message::CfgCfg<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_CfgRxm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRxm<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRxmPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgAnt:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgAnt<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgAntPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgSbas:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgSbas<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgSbasPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNmea:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNmeaV0<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgNmeaPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgUsb:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgUsb<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgUsbPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNvs:
    {
        using MsgType = ublox::message::CfgNvs<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_CfgNavx5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNavx5<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNavx5Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgNav5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgNav5<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgNav5Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgTp5:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTp5<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTp5PollSelect<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::CfgTp5Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgRinv:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgRinv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgRinvPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgItfm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgItfm<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgItfmPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgPm2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgPm2<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgPm2Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgGnss:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgGnss<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgGnssPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_CfgLogfilter:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgLogfilter<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgLogfilterPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonIo:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonIo<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonIoPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonVer:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonVer<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonVerPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonMsgpp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonMsgpp<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonMsgppPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonRxbuf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonRxbuf<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonRxbufPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonTxbuf:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonTxbuf<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonTxbufPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonHw:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonHw<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonHwPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonHw2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::MonHw2<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::MonHw2Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_MonRxr:
    {
        using MsgType = ublox::message::MonRxr<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_AidReq:
    {
        using MsgType = ublox::message::AidReq<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_AidIni:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidIni<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidIniPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidHui:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidHui<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidHuiPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidData:
    {
        using MsgType = ublox::message::AidData<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_AidAlm:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlm<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlmPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAlmPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidEph:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidEph<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidEphPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::AidEphPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidAlpsrv:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlpsrv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlpsrvToServer<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidAop:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAop<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAopPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAopPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_AidAlp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::AidAlp<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::AidAlpStatus<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 2U:
        {
            using MsgType = ublox::message::AidAlpData<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimTp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimTp<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::TimTpPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimTm2:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimTm2<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::TimTm2Poll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_TimVrfy:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::TimVrfy<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::TimVrfyPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_LogErase:
    {
        using MsgType = ublox::message::LogErase<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogString:
    {
        using MsgType = ublox::message::LogString<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogCreate:
    {
        using MsgType = ublox::message::LogCreate<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogInfo:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::LogInfo<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::LogInfoPoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    case ublox::MsgId_LogRetrieve:
    {
        using MsgType = ublox::message::LogRetrieve<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogRetrievepos:
    {
        using MsgType = ublox::message::LogRetrievepos<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogRetrievestring:
    {
        using MsgType = ublox::message::LogRetrievestring<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_LogFindtime:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::LogFindtime<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::LogFindtimeResp<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7Message(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7Message()
/// @note Defined in ublox/dispatch/DispatchUblox7Message.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox7Message(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7Message(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7Message(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7Message()
/// @note Defined in ublox/dispatch/DispatchUblox7Message.h
template<typename TMsg, typename THandler>
auto dispatchUblox7MessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7Message<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox7MessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox7MessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox7Message.h
template<typename TMsg, typename THandler>
auto dispatchUblox7MessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox7Message<ublox::options::DefaultOptions>(id, msg, handler);
}

} // namespace dispatch

} // namespace ublox


