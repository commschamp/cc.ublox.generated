/// @file
/// @brief Contains dispatch to handling function(s) for "ublox5" server input messages.

#pragma once

#include <type_traits>
#include "ublox/MsgId.h"
#include "ublox/input/Ublox5ServerInputMessages.h"

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
///     using MyNavPosecefPoll = ublox::message::NavPosecefPoll<MyInterface, ublox::options::DefaultOptions>;
///     using MyNavPosllhPoll = ublox::message::NavPosllhPoll<MyInterface, ublox::options::DefaultOptions>;
///     struct MyHandler {
///         void handle(MyNavPosecefPoll& msg) {...}
///         void handle(MyNavPosllhPoll& msg) {...}
///         ...
///         // Handle all unexpected or irrelevant messages.
///         void handle(MyInterface& msg) {...}
///     };
///     @endcode
///     Every @b handle() function may return a value, but every
///     function must return the @b same type.
/// @note Defined in ublox/dispatch/DispatchUblox5ServerInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5ServerInputMessage(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    using InterfaceType = typename std::decay<decltype(msg)>::type;
    switch(id) {
    case ublox::MsgId_NavPosecef:
    {
        using MsgType = ublox::message::NavPosecefPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavPosllh:
    {
        using MsgType = ublox::message::NavPosllhPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavStatus:
    {
        using MsgType = ublox::message::NavStatusPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavDop:
    {
        using MsgType = ublox::message::NavDopPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavSol:
    {
        using MsgType = ublox::message::NavSolPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavVelecef:
    {
        using MsgType = ublox::message::NavVelecefPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavVelned:
    {
        using MsgType = ublox::message::NavVelnedPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavTimegps:
    {
        using MsgType = ublox::message::NavTimegpsPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavTimeutc:
    {
        using MsgType = ublox::message::NavTimeutcPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavClock:
    {
        using MsgType = ublox::message::NavClockPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavSvinfo:
    {
        using MsgType = ublox::message::NavSvinfoPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_NavSbas:
    {
        using MsgType = ublox::message::NavSbasPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_RxmSvsi:
    {
        using MsgType = ublox::message::RxmSvsiPoll<InterfaceType, TProtOptions>;
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
            using MsgType = ublox::message::CfgDatUser<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgDatStandard<InterfaceType, TProtOptions>;
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
    case ublox::MsgId_CfgTp:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTp<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTpPoll<InterfaceType, TProtOptions>;
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
            using MsgType = ublox::message::CfgNmea<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
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
    case ublox::MsgId_CfgTmode:
    {
        switch (idx) {
        case 0U:
        {
            using MsgType = ublox::message::CfgTmode<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
        {
            using MsgType = ublox::message::CfgTmodePoll<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        default:
            return handler.handle(msg);
        };
        break;
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
    case ublox::MsgId_MonIo:
    {
        using MsgType = ublox::message::MonIoPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_MonVer:
    {
        using MsgType = ublox::message::MonVerPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_MonMsgpp:
    {
        using MsgType = ublox::message::MonMsgppPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_MonRxbuf:
    {
        using MsgType = ublox::message::MonRxbufPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_MonTxbuf:
    {
        using MsgType = ublox::message::MonTxbufPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_MonHw:
    {
        using MsgType = ublox::message::MonHwPoll<InterfaceType, TProtOptions>;
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
            using MsgType = ublox::message::AidAlmPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
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
            using MsgType = ublox::message::AidEphPollSv<InterfaceType, TProtOptions>;
            auto& castedMsg = static_cast<MsgType&>(msg);
            return handler.handle(castedMsg);
        }
        case 1U:
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
        using MsgType = ublox::message::AidAlpsrv<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
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
        using MsgType = ublox::message::TimTpPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_TimTm2:
    {
        using MsgType = ublox::message::TimTm2Poll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    case ublox::MsgId_TimSvin:
    {
        using MsgType = ublox::message::TimSvinPoll<InterfaceType, TProtOptions>;
        auto& castedMsg = static_cast<MsgType&>(msg);
        return handler.handle(castedMsg);
    }
    default:
        break;
    };

    return handler.handle(msg);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ServerInputMessage(), but without @b idx parameter.
/// @tparam TProtOptions Protocol options struct used for the application,
///     like @ref ublox::options::DefaultOptions.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ServerInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox5ServerInputMessage.h
template<typename TProtOptions, typename TMsg, typename THandler>
auto dispatchUblox5ServerInputMessage(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ServerInputMessage(id, 0U, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ServerInputMessage(), but passing
///     ublox::options::DefaultOptions as first template parameter.
/// @param[in] id Numeric message ID.
/// @param[in] idx Index of the message among messages with the same ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ServerInputMessage()
/// @note Defined in ublox/dispatch/DispatchUblox5ServerInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox5ServerInputMessageDefaultOptions(
    ublox::MsgId id,
    std::size_t idx,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ServerInputMessage<ublox::options::DefaultOptions>(id, idx, msg, handler);
}

/// @brief Dispatch message object to its appropriate handling function.
/// @details Same as other dispatchUblox5ServerInputMessageDefaultOptions(), 
///     but without @b idx parameter.
/// @param[in] id Numeric message ID.
/// @param[in] msg Message object held by reference to its interface class.
/// @param[in] handler Reference to handling object.
/// @see dispatchUblox5ServerInputMessageDefaultOptions()
/// @note Defined in ublox/dispatch/DispatchUblox5ServerInputMessage.h
template<typename TMsg, typename THandler>
auto dispatchUblox5ServerInputMessageDefaultOptions(
    ublox::MsgId id,
    TMsg& msg,
    THandler& handler) -> decltype(handler.handle(msg))
{
    return dispatchUblox5ServerInputMessage<ublox::options::DefaultOptions>(id, msg, handler);
}

} // namespace dispatch

} // namespace ublox


