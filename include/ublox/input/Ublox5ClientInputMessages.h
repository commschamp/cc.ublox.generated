/// @file
/// @brief Contains definition of all "ublox5" client input messages bundle.

#pragma once

#include <tuple>
#include "ublox/message/AckAck.h"
#include "ublox/message/AckNak.h"
#include "ublox/message/AidAlm.h"
#include "ublox/message/AidAlpStatus.h"
#include "ublox/message/AidAlpsrv.h"
#include "ublox/message/AidAlpsrvToServer.h"
#include "ublox/message/AidEph.h"
#include "ublox/message/AidHui.h"
#include "ublox/message/AidIni.h"
#include "ublox/message/CfgAnt.h"
#include "ublox/message/CfgDat.h"
#include "ublox/message/CfgInf.h"
#include "ublox/message/CfgMsg.h"
#include "ublox/message/CfgMsgCurrent.h"
#include "ublox/message/CfgNav5.h"
#include "ublox/message/CfgNavx5.h"
#include "ublox/message/CfgNmea.h"
#include "ublox/message/CfgPrtDdc.h"
#include "ublox/message/CfgPrtSpi.h"
#include "ublox/message/CfgPrtUart.h"
#include "ublox/message/CfgPrtUsb.h"
#include "ublox/message/CfgRate.h"
#include "ublox/message/CfgRxm.h"
#include "ublox/message/CfgSbas.h"
#include "ublox/message/CfgTmode.h"
#include "ublox/message/CfgTp.h"
#include "ublox/message/CfgUsb.h"
#include "ublox/message/InfDebug.h"
#include "ublox/message/InfError.h"
#include "ublox/message/InfNotice.h"
#include "ublox/message/InfTest.h"
#include "ublox/message/InfWarning.h"
#include "ublox/message/MonHw.h"
#include "ublox/message/MonIo.h"
#include "ublox/message/MonMsgpp.h"
#include "ublox/message/MonRxbuf.h"
#include "ublox/message/MonTxbuf.h"
#include "ublox/message/MonVer.h"
#include "ublox/message/NavClock.h"
#include "ublox/message/NavDop.h"
#include "ublox/message/NavPosecef.h"
#include "ublox/message/NavPosllh.h"
#include "ublox/message/NavSbas.h"
#include "ublox/message/NavSol.h"
#include "ublox/message/NavStatus.h"
#include "ublox/message/NavSvinfo.h"
#include "ublox/message/NavTimegps.h"
#include "ublox/message/NavTimeutc.h"
#include "ublox/message/NavVelecef.h"
#include "ublox/message/NavVelned.h"
#include "ublox/message/RxmSvsi.h"
#include "ublox/message/TimSvin.h"
#include "ublox/message/TimTm2.h"
#include "ublox/message/TimTp.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace input
{

/// @brief Messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = ublox::options::DefaultOptions>
using Ublox5ClientInputMessages =
    std::tuple<
        ublox::message::NavPosecef<TBase, TOpt>,
        ublox::message::NavPosllh<TBase, TOpt>,
        ublox::message::NavStatus<TBase, TOpt>,
        ublox::message::NavDop<TBase, TOpt>,
        ublox::message::NavSol<TBase, TOpt>,
        ublox::message::NavVelecef<TBase, TOpt>,
        ublox::message::NavVelned<TBase, TOpt>,
        ublox::message::NavTimegps<TBase, TOpt>,
        ublox::message::NavTimeutc<TBase, TOpt>,
        ublox::message::NavClock<TBase, TOpt>,
        ublox::message::NavSvinfo<TBase, TOpt>,
        ublox::message::NavSbas<TBase, TOpt>,
        ublox::message::RxmSvsi<TBase, TOpt>,
        ublox::message::InfError<TBase, TOpt>,
        ublox::message::InfWarning<TBase, TOpt>,
        ublox::message::InfNotice<TBase, TOpt>,
        ublox::message::InfTest<TBase, TOpt>,
        ublox::message::InfDebug<TBase, TOpt>,
        ublox::message::AckNak<TBase, TOpt>,
        ublox::message::AckAck<TBase, TOpt>,
        ublox::message::CfgPrtDdc<TBase, TOpt>,
        ublox::message::CfgPrtUart<TBase, TOpt>,
        ublox::message::CfgPrtUsb<TBase, TOpt>,
        ublox::message::CfgPrtSpi<TBase, TOpt>,
        ublox::message::CfgMsg<TBase, TOpt>,
        ublox::message::CfgMsgCurrent<TBase, TOpt>,
        ublox::message::CfgInf<TBase, TOpt>,
        ublox::message::CfgDat<TBase, TOpt>,
        ublox::message::CfgTp<TBase, TOpt>,
        ublox::message::CfgRate<TBase, TOpt>,
        ublox::message::CfgRxm<TBase, TOpt>,
        ublox::message::CfgAnt<TBase, TOpt>,
        ublox::message::CfgSbas<TBase, TOpt>,
        ublox::message::CfgNmea<TBase, TOpt>,
        ublox::message::CfgUsb<TBase, TOpt>,
        ublox::message::CfgTmode<TBase, TOpt>,
        ublox::message::CfgNavx5<TBase, TOpt>,
        ublox::message::CfgNav5<TBase, TOpt>,
        ublox::message::MonIo<TBase, TOpt>,
        ublox::message::MonVer<TBase, TOpt>,
        ublox::message::MonMsgpp<TBase, TOpt>,
        ublox::message::MonRxbuf<TBase, TOpt>,
        ublox::message::MonTxbuf<TBase, TOpt>,
        ublox::message::MonHw<TBase, TOpt>,
        ublox::message::AidIni<TBase, TOpt>,
        ublox::message::AidHui<TBase, TOpt>,
        ublox::message::AidAlm<TBase, TOpt>,
        ublox::message::AidEph<TBase, TOpt>,
        ublox::message::AidAlpsrv<TBase, TOpt>,
        ublox::message::AidAlpsrvToServer<TBase, TOpt>,
        ublox::message::AidAlpStatus<TBase, TOpt>,
        ublox::message::TimTp<TBase, TOpt>,
        ublox::message::TimTm2<TBase, TOpt>,
        ublox::message::TimSvin<TBase, TOpt>
    >;

} // namespace input

} // namespace ublox


