// Generated by commsdsl2comms v7.0.2

/// @file
/// @brief Contains definition of the Ublox9ServerInputMessages messages bundle.

#pragma once

#include <tuple>
#include "cc_ublox/message/CfgAnt.h"
#include "cc_ublox/message/CfgAntPoll.h"
#include "cc_ublox/message/CfgCfg.h"
#include "cc_ublox/message/CfgDatPoll.h"
#include "cc_ublox/message/CfgDatUser.h"
#include "cc_ublox/message/CfgDgnss.h"
#include "cc_ublox/message/CfgDgnssPoll.h"
#include "cc_ublox/message/CfgGeofence.h"
#include "cc_ublox/message/CfgGeofencePoll.h"
#include "cc_ublox/message/CfgGnss.h"
#include "cc_ublox/message/CfgGnssPoll.h"
#include "cc_ublox/message/CfgInf.h"
#include "cc_ublox/message/CfgInfPoll.h"
#include "cc_ublox/message/CfgItfm.h"
#include "cc_ublox/message/CfgItfmPoll.h"
#include "cc_ublox/message/CfgLogfilter.h"
#include "cc_ublox/message/CfgLogfilterPoll.h"
#include "cc_ublox/message/CfgMsg.h"
#include "cc_ublox/message/CfgMsgCurrent.h"
#include "cc_ublox/message/CfgMsgPoll.h"
#include "cc_ublox/message/CfgNav5.h"
#include "cc_ublox/message/CfgNav5Poll.h"
#include "cc_ublox/message/CfgNavx5Poll.h"
#include "cc_ublox/message/CfgNavx5V2.h"
#include "cc_ublox/message/CfgNmeaPoll.h"
#include "cc_ublox/message/CfgNmeaV1.h"
#include "cc_ublox/message/CfgOdo.h"
#include "cc_ublox/message/CfgOdoPoll.h"
#include "cc_ublox/message/CfgPrtDdc.h"
#include "cc_ublox/message/CfgPrtPoll.h"
#include "cc_ublox/message/CfgPrtPortPoll.h"
#include "cc_ublox/message/CfgPrtSpi.h"
#include "cc_ublox/message/CfgPrtUart.h"
#include "cc_ublox/message/CfgPrtUsb.h"
#include "cc_ublox/message/CfgPwr.h"
#include "cc_ublox/message/CfgRate.h"
#include "cc_ublox/message/CfgRatePoll.h"
#include "cc_ublox/message/CfgRinv.h"
#include "cc_ublox/message/CfgRinvPoll.h"
#include "cc_ublox/message/CfgRst.h"
#include "cc_ublox/message/CfgSbas.h"
#include "cc_ublox/message/CfgSbasPoll.h"
#include "cc_ublox/message/CfgTmode3.h"
#include "cc_ublox/message/CfgTmode3Poll.h"
#include "cc_ublox/message/CfgTp5.h"
#include "cc_ublox/message/CfgTp5Poll.h"
#include "cc_ublox/message/CfgTp5PollSelect.h"
#include "cc_ublox/message/CfgUsb.h"
#include "cc_ublox/message/CfgUsbPoll.h"
#include "cc_ublox/message/CfgValdel.h"
#include "cc_ublox/message/CfgValgetPoll.h"
#include "cc_ublox/message/CfgValset.h"
#include "cc_ublox/message/LogCreate.h"
#include "cc_ublox/message/LogErase.h"
#include "cc_ublox/message/LogFindtime.h"
#include "cc_ublox/message/LogInfoPoll.h"
#include "cc_ublox/message/LogRetrieve.h"
#include "cc_ublox/message/LogRetrievebatch.h"
#include "cc_ublox/message/LogString.h"
#include "cc_ublox/message/MgaAno.h"
#include "cc_ublox/message/MgaBdsAlm.h"
#include "cc_ublox/message/MgaBdsEph.h"
#include "cc_ublox/message/MgaBdsHealth.h"
#include "cc_ublox/message/MgaBdsIono.h"
#include "cc_ublox/message/MgaBdsUtc.h"
#include "cc_ublox/message/MgaDbd.h"
#include "cc_ublox/message/MgaDbdPoll.h"
#include "cc_ublox/message/MgaGalAlm.h"
#include "cc_ublox/message/MgaGalEph.h"
#include "cc_ublox/message/MgaGalTimeoffset.h"
#include "cc_ublox/message/MgaGalUtc.h"
#include "cc_ublox/message/MgaGloAlm.h"
#include "cc_ublox/message/MgaGloEph.h"
#include "cc_ublox/message/MgaGloTimeoffset.h"
#include "cc_ublox/message/MgaGpsAlm.h"
#include "cc_ublox/message/MgaGpsEph.h"
#include "cc_ublox/message/MgaGpsHealth.h"
#include "cc_ublox/message/MgaGpsIono.h"
#include "cc_ublox/message/MgaGpsUtc.h"
#include "cc_ublox/message/MgaIniClkd.h"
#include "cc_ublox/message/MgaIniEop.h"
#include "cc_ublox/message/MgaIniFreq.h"
#include "cc_ublox/message/MgaIniPosLlh.h"
#include "cc_ublox/message/MgaIniPosXyz.h"
#include "cc_ublox/message/MgaIniTimeGnss.h"
#include "cc_ublox/message/MgaIniTimeUtc.h"
#include "cc_ublox/message/MgaQzssAlm.h"
#include "cc_ublox/message/MgaQzssEph.h"
#include "cc_ublox/message/MgaQzssHealth.h"
#include "cc_ublox/message/MonCommsPoll.h"
#include "cc_ublox/message/MonGnssPoll.h"
#include "cc_ublox/message/MonHw2Poll.h"
#include "cc_ublox/message/MonHw3Poll.h"
#include "cc_ublox/message/MonHwPoll.h"
#include "cc_ublox/message/MonIoPoll.h"
#include "cc_ublox/message/MonMsgppPoll.h"
#include "cc_ublox/message/MonPatchPoll.h"
#include "cc_ublox/message/MonRfPoll.h"
#include "cc_ublox/message/MonRxbufPoll.h"
#include "cc_ublox/message/MonSpanPoll.h"
#include "cc_ublox/message/MonTxbufPoll.h"
#include "cc_ublox/message/MonVerPoll.h"
#include "cc_ublox/message/NavAopstatusPoll.h"
#include "cc_ublox/message/NavClockPoll.h"
#include "cc_ublox/message/NavDopPoll.h"
#include "cc_ublox/message/NavGeofencePoll.h"
#include "cc_ublox/message/NavHpposecefPoll.h"
#include "cc_ublox/message/NavHpposllhPoll.h"
#include "cc_ublox/message/NavOdoPoll.h"
#include "cc_ublox/message/NavOrbPoll.h"
#include "cc_ublox/message/NavPosecefPoll.h"
#include "cc_ublox/message/NavPosllhPoll.h"
#include "cc_ublox/message/NavPvtPoll.h"
#include "cc_ublox/message/NavRelposnedPoll.h"
#include "cc_ublox/message/NavResetodo.h"
#include "cc_ublox/message/NavSatPoll.h"
#include "cc_ublox/message/NavSbasPoll.h"
#include "cc_ublox/message/NavSigPoll.h"
#include "cc_ublox/message/NavSlasPoll.h"
#include "cc_ublox/message/NavStatusPoll.h"
#include "cc_ublox/message/NavSvinPoll.h"
#include "cc_ublox/message/NavTimebdsPoll.h"
#include "cc_ublox/message/NavTimegalPoll.h"
#include "cc_ublox/message/NavTimegloPoll.h"
#include "cc_ublox/message/NavTimelsPoll.h"
#include "cc_ublox/message/NavTimeutcPoll.h"
#include "cc_ublox/message/NavVelecefPoll.h"
#include "cc_ublox/message/NavVelnedPoll.h"
#include "cc_ublox/message/RxmMeasxPoll.h"
#include "cc_ublox/message/RxmPmreq.h"
#include "cc_ublox/message/RxmPmreqV0.h"
#include "cc_ublox/message/RxmRawxPoll.h"
#include "cc_ublox/message/SecUniqidPoll.h"
#include "cc_ublox/message/TimTm2Poll.h"
#include "cc_ublox/message/TimTpPoll.h"
#include "cc_ublox/message/TimVrfyPoll.h"
#include "cc_ublox/message/UpdSosClear.h"
#include "cc_ublox/message/UpdSosCreate.h"
#include "cc_ublox/message/UpdSosPoll.h"
#include "cc_ublox/options/DefaultOptions.h"

namespace cc_ublox
{

namespace input
{

/// @brief Server input ublox9 platform messages of the protocol in ascending order.
/// @tparam TBase Base class of all the messages.
/// @tparam TOpt Protocol definition options.
template <typename TBase, typename TOpt = cc_ublox::options::DefaultOptions>
using Ublox9ServerInputMessages =
    std::tuple<
        cc_ublox::message::NavPosecefPoll<TBase, TOpt>,
        cc_ublox::message::NavPosllhPoll<TBase, TOpt>,
        cc_ublox::message::NavStatusPoll<TBase, TOpt>,
        cc_ublox::message::NavDopPoll<TBase, TOpt>,
        cc_ublox::message::NavPvtPoll<TBase, TOpt>,
        cc_ublox::message::NavOdoPoll<TBase, TOpt>,
        cc_ublox::message::NavResetodo<TBase, TOpt>,
        cc_ublox::message::NavVelecefPoll<TBase, TOpt>,
        cc_ublox::message::NavVelnedPoll<TBase, TOpt>,
        cc_ublox::message::NavHpposecefPoll<TBase, TOpt>,
        cc_ublox::message::NavHpposllhPoll<TBase, TOpt>,
        cc_ublox::message::NavTimeutcPoll<TBase, TOpt>,
        cc_ublox::message::NavClockPoll<TBase, TOpt>,
        cc_ublox::message::NavTimegloPoll<TBase, TOpt>,
        cc_ublox::message::NavTimebdsPoll<TBase, TOpt>,
        cc_ublox::message::NavTimegalPoll<TBase, TOpt>,
        cc_ublox::message::NavTimelsPoll<TBase, TOpt>,
        cc_ublox::message::NavSbasPoll<TBase, TOpt>,
        cc_ublox::message::NavOrbPoll<TBase, TOpt>,
        cc_ublox::message::NavSatPoll<TBase, TOpt>,
        cc_ublox::message::NavGeofencePoll<TBase, TOpt>,
        cc_ublox::message::NavSvinPoll<TBase, TOpt>,
        cc_ublox::message::NavRelposnedPoll<TBase, TOpt>,
        cc_ublox::message::NavSlasPoll<TBase, TOpt>,
        cc_ublox::message::NavSigPoll<TBase, TOpt>,
        cc_ublox::message::NavAopstatusPoll<TBase, TOpt>,
        cc_ublox::message::RxmMeasxPoll<TBase, TOpt>,
        cc_ublox::message::RxmRawxPoll<TBase, TOpt>,
        cc_ublox::message::RxmPmreqV0<TBase, TOpt>,
        cc_ublox::message::RxmPmreq<TBase, TOpt>,
        cc_ublox::message::CfgPrtDdc<TBase, TOpt>,
        cc_ublox::message::CfgPrtUart<TBase, TOpt>,
        cc_ublox::message::CfgPrtUsb<TBase, TOpt>,
        cc_ublox::message::CfgPrtSpi<TBase, TOpt>,
        cc_ublox::message::CfgPrtPortPoll<TBase, TOpt>,
        cc_ublox::message::CfgPrtPoll<TBase, TOpt>,
        cc_ublox::message::CfgMsg<TBase, TOpt>,
        cc_ublox::message::CfgMsgCurrent<TBase, TOpt>,
        cc_ublox::message::CfgMsgPoll<TBase, TOpt>,
        cc_ublox::message::CfgInf<TBase, TOpt>,
        cc_ublox::message::CfgInfPoll<TBase, TOpt>,
        cc_ublox::message::CfgRst<TBase, TOpt>,
        cc_ublox::message::CfgDatUser<TBase, TOpt>,
        cc_ublox::message::CfgDatPoll<TBase, TOpt>,
        cc_ublox::message::CfgRate<TBase, TOpt>,
        cc_ublox::message::CfgRatePoll<TBase, TOpt>,
        cc_ublox::message::CfgCfg<TBase, TOpt>,
        cc_ublox::message::CfgAnt<TBase, TOpt>,
        cc_ublox::message::CfgAntPoll<TBase, TOpt>,
        cc_ublox::message::CfgSbas<TBase, TOpt>,
        cc_ublox::message::CfgSbasPoll<TBase, TOpt>,
        cc_ublox::message::CfgNmeaV1<TBase, TOpt>,
        cc_ublox::message::CfgNmeaPoll<TBase, TOpt>,
        cc_ublox::message::CfgUsb<TBase, TOpt>,
        cc_ublox::message::CfgUsbPoll<TBase, TOpt>,
        cc_ublox::message::CfgOdo<TBase, TOpt>,
        cc_ublox::message::CfgOdoPoll<TBase, TOpt>,
        cc_ublox::message::CfgNavx5V2<TBase, TOpt>,
        cc_ublox::message::CfgNavx5Poll<TBase, TOpt>,
        cc_ublox::message::CfgNav5<TBase, TOpt>,
        cc_ublox::message::CfgNav5Poll<TBase, TOpt>,
        cc_ublox::message::CfgTp5<TBase, TOpt>,
        cc_ublox::message::CfgTp5PollSelect<TBase, TOpt>,
        cc_ublox::message::CfgTp5Poll<TBase, TOpt>,
        cc_ublox::message::CfgRinv<TBase, TOpt>,
        cc_ublox::message::CfgRinvPoll<TBase, TOpt>,
        cc_ublox::message::CfgItfm<TBase, TOpt>,
        cc_ublox::message::CfgItfmPoll<TBase, TOpt>,
        cc_ublox::message::CfgGnss<TBase, TOpt>,
        cc_ublox::message::CfgGnssPoll<TBase, TOpt>,
        cc_ublox::message::CfgLogfilter<TBase, TOpt>,
        cc_ublox::message::CfgLogfilterPoll<TBase, TOpt>,
        cc_ublox::message::CfgPwr<TBase, TOpt>,
        cc_ublox::message::CfgGeofence<TBase, TOpt>,
        cc_ublox::message::CfgGeofencePoll<TBase, TOpt>,
        cc_ublox::message::CfgDgnss<TBase, TOpt>,
        cc_ublox::message::CfgDgnssPoll<TBase, TOpt>,
        cc_ublox::message::CfgTmode3<TBase, TOpt>,
        cc_ublox::message::CfgTmode3Poll<TBase, TOpt>,
        cc_ublox::message::CfgValset<TBase, TOpt>,
        cc_ublox::message::CfgValgetPoll<TBase, TOpt>,
        cc_ublox::message::CfgValdel<TBase, TOpt>,
        cc_ublox::message::UpdSosClear<TBase, TOpt>,
        cc_ublox::message::UpdSosCreate<TBase, TOpt>,
        cc_ublox::message::UpdSosPoll<TBase, TOpt>,
        cc_ublox::message::MonIoPoll<TBase, TOpt>,
        cc_ublox::message::MonVerPoll<TBase, TOpt>,
        cc_ublox::message::MonMsgppPoll<TBase, TOpt>,
        cc_ublox::message::MonRxbufPoll<TBase, TOpt>,
        cc_ublox::message::MonTxbufPoll<TBase, TOpt>,
        cc_ublox::message::MonHwPoll<TBase, TOpt>,
        cc_ublox::message::MonHw2Poll<TBase, TOpt>,
        cc_ublox::message::MonPatchPoll<TBase, TOpt>,
        cc_ublox::message::MonGnssPoll<TBase, TOpt>,
        cc_ublox::message::MonSpanPoll<TBase, TOpt>,
        cc_ublox::message::MonCommsPoll<TBase, TOpt>,
        cc_ublox::message::MonHw3Poll<TBase, TOpt>,
        cc_ublox::message::MonRfPoll<TBase, TOpt>,
        cc_ublox::message::TimTpPoll<TBase, TOpt>,
        cc_ublox::message::TimTm2Poll<TBase, TOpt>,
        cc_ublox::message::TimVrfyPoll<TBase, TOpt>,
        cc_ublox::message::MgaGpsEph<TBase, TOpt>,
        cc_ublox::message::MgaGpsAlm<TBase, TOpt>,
        cc_ublox::message::MgaGpsHealth<TBase, TOpt>,
        cc_ublox::message::MgaGpsUtc<TBase, TOpt>,
        cc_ublox::message::MgaGpsIono<TBase, TOpt>,
        cc_ublox::message::MgaGalEph<TBase, TOpt>,
        cc_ublox::message::MgaGalAlm<TBase, TOpt>,
        cc_ublox::message::MgaGalTimeoffset<TBase, TOpt>,
        cc_ublox::message::MgaGalUtc<TBase, TOpt>,
        cc_ublox::message::MgaBdsEph<TBase, TOpt>,
        cc_ublox::message::MgaBdsAlm<TBase, TOpt>,
        cc_ublox::message::MgaBdsHealth<TBase, TOpt>,
        cc_ublox::message::MgaBdsUtc<TBase, TOpt>,
        cc_ublox::message::MgaBdsIono<TBase, TOpt>,
        cc_ublox::message::MgaQzssEph<TBase, TOpt>,
        cc_ublox::message::MgaQzssAlm<TBase, TOpt>,
        cc_ublox::message::MgaQzssHealth<TBase, TOpt>,
        cc_ublox::message::MgaGloEph<TBase, TOpt>,
        cc_ublox::message::MgaGloAlm<TBase, TOpt>,
        cc_ublox::message::MgaGloTimeoffset<TBase, TOpt>,
        cc_ublox::message::MgaAno<TBase, TOpt>,
        cc_ublox::message::MgaIniPosXyz<TBase, TOpt>,
        cc_ublox::message::MgaIniPosLlh<TBase, TOpt>,
        cc_ublox::message::MgaIniTimeUtc<TBase, TOpt>,
        cc_ublox::message::MgaIniTimeGnss<TBase, TOpt>,
        cc_ublox::message::MgaIniClkd<TBase, TOpt>,
        cc_ublox::message::MgaIniFreq<TBase, TOpt>,
        cc_ublox::message::MgaIniEop<TBase, TOpt>,
        cc_ublox::message::MgaDbd<TBase, TOpt>,
        cc_ublox::message::MgaDbdPoll<TBase, TOpt>,
        cc_ublox::message::LogErase<TBase, TOpt>,
        cc_ublox::message::LogString<TBase, TOpt>,
        cc_ublox::message::LogCreate<TBase, TOpt>,
        cc_ublox::message::LogInfoPoll<TBase, TOpt>,
        cc_ublox::message::LogRetrieve<TBase, TOpt>,
        cc_ublox::message::LogFindtime<TBase, TOpt>,
        cc_ublox::message::LogRetrievebatch<TBase, TOpt>,
        cc_ublox::message::SecUniqidPoll<TBase, TOpt>
    >;

} // namespace input

} // namespace cc_ublox

/// @brief Create type aliases for the server input ublox9 platform messages of the protocol.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
/// @param opts_ Type of the used protocol definition options.
#define CC_UBLOX_ALIASES_FOR_UBLOX9_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, opts_) \
    using prefix_ ## NavPosecefPoll ## suffix_ = cc_ublox::message::NavPosecefPoll<interface_, opts_>; \
    using prefix_ ## NavPosllhPoll ## suffix_ = cc_ublox::message::NavPosllhPoll<interface_, opts_>; \
    using prefix_ ## NavStatusPoll ## suffix_ = cc_ublox::message::NavStatusPoll<interface_, opts_>; \
    using prefix_ ## NavDopPoll ## suffix_ = cc_ublox::message::NavDopPoll<interface_, opts_>; \
    using prefix_ ## NavPvtPoll ## suffix_ = cc_ublox::message::NavPvtPoll<interface_, opts_>; \
    using prefix_ ## NavOdoPoll ## suffix_ = cc_ublox::message::NavOdoPoll<interface_, opts_>; \
    using prefix_ ## NavResetodo ## suffix_ = cc_ublox::message::NavResetodo<interface_, opts_>; \
    using prefix_ ## NavVelecefPoll ## suffix_ = cc_ublox::message::NavVelecefPoll<interface_, opts_>; \
    using prefix_ ## NavVelnedPoll ## suffix_ = cc_ublox::message::NavVelnedPoll<interface_, opts_>; \
    using prefix_ ## NavHpposecefPoll ## suffix_ = cc_ublox::message::NavHpposecefPoll<interface_, opts_>; \
    using prefix_ ## NavHpposllhPoll ## suffix_ = cc_ublox::message::NavHpposllhPoll<interface_, opts_>; \
    using prefix_ ## NavTimeutcPoll ## suffix_ = cc_ublox::message::NavTimeutcPoll<interface_, opts_>; \
    using prefix_ ## NavClockPoll ## suffix_ = cc_ublox::message::NavClockPoll<interface_, opts_>; \
    using prefix_ ## NavTimegloPoll ## suffix_ = cc_ublox::message::NavTimegloPoll<interface_, opts_>; \
    using prefix_ ## NavTimebdsPoll ## suffix_ = cc_ublox::message::NavTimebdsPoll<interface_, opts_>; \
    using prefix_ ## NavTimegalPoll ## suffix_ = cc_ublox::message::NavTimegalPoll<interface_, opts_>; \
    using prefix_ ## NavTimelsPoll ## suffix_ = cc_ublox::message::NavTimelsPoll<interface_, opts_>; \
    using prefix_ ## NavSbasPoll ## suffix_ = cc_ublox::message::NavSbasPoll<interface_, opts_>; \
    using prefix_ ## NavOrbPoll ## suffix_ = cc_ublox::message::NavOrbPoll<interface_, opts_>; \
    using prefix_ ## NavSatPoll ## suffix_ = cc_ublox::message::NavSatPoll<interface_, opts_>; \
    using prefix_ ## NavGeofencePoll ## suffix_ = cc_ublox::message::NavGeofencePoll<interface_, opts_>; \
    using prefix_ ## NavSvinPoll ## suffix_ = cc_ublox::message::NavSvinPoll<interface_, opts_>; \
    using prefix_ ## NavRelposnedPoll ## suffix_ = cc_ublox::message::NavRelposnedPoll<interface_, opts_>; \
    using prefix_ ## NavSlasPoll ## suffix_ = cc_ublox::message::NavSlasPoll<interface_, opts_>; \
    using prefix_ ## NavSigPoll ## suffix_ = cc_ublox::message::NavSigPoll<interface_, opts_>; \
    using prefix_ ## NavAopstatusPoll ## suffix_ = cc_ublox::message::NavAopstatusPoll<interface_, opts_>; \
    using prefix_ ## RxmMeasxPoll ## suffix_ = cc_ublox::message::RxmMeasxPoll<interface_, opts_>; \
    using prefix_ ## RxmRawxPoll ## suffix_ = cc_ublox::message::RxmRawxPoll<interface_, opts_>; \
    using prefix_ ## RxmPmreqV0 ## suffix_ = cc_ublox::message::RxmPmreqV0<interface_, opts_>; \
    using prefix_ ## RxmPmreq ## suffix_ = cc_ublox::message::RxmPmreq<interface_, opts_>; \
    using prefix_ ## CfgPrtDdc ## suffix_ = cc_ublox::message::CfgPrtDdc<interface_, opts_>; \
    using prefix_ ## CfgPrtUart ## suffix_ = cc_ublox::message::CfgPrtUart<interface_, opts_>; \
    using prefix_ ## CfgPrtUsb ## suffix_ = cc_ublox::message::CfgPrtUsb<interface_, opts_>; \
    using prefix_ ## CfgPrtSpi ## suffix_ = cc_ublox::message::CfgPrtSpi<interface_, opts_>; \
    using prefix_ ## CfgPrtPortPoll ## suffix_ = cc_ublox::message::CfgPrtPortPoll<interface_, opts_>; \
    using prefix_ ## CfgPrtPoll ## suffix_ = cc_ublox::message::CfgPrtPoll<interface_, opts_>; \
    using prefix_ ## CfgMsg ## suffix_ = cc_ublox::message::CfgMsg<interface_, opts_>; \
    using prefix_ ## CfgMsgCurrent ## suffix_ = cc_ublox::message::CfgMsgCurrent<interface_, opts_>; \
    using prefix_ ## CfgMsgPoll ## suffix_ = cc_ublox::message::CfgMsgPoll<interface_, opts_>; \
    using prefix_ ## CfgInf ## suffix_ = cc_ublox::message::CfgInf<interface_, opts_>; \
    using prefix_ ## CfgInfPoll ## suffix_ = cc_ublox::message::CfgInfPoll<interface_, opts_>; \
    using prefix_ ## CfgRst ## suffix_ = cc_ublox::message::CfgRst<interface_, opts_>; \
    using prefix_ ## CfgDatUser ## suffix_ = cc_ublox::message::CfgDatUser<interface_, opts_>; \
    using prefix_ ## CfgDatPoll ## suffix_ = cc_ublox::message::CfgDatPoll<interface_, opts_>; \
    using prefix_ ## CfgRate ## suffix_ = cc_ublox::message::CfgRate<interface_, opts_>; \
    using prefix_ ## CfgRatePoll ## suffix_ = cc_ublox::message::CfgRatePoll<interface_, opts_>; \
    using prefix_ ## CfgCfg ## suffix_ = cc_ublox::message::CfgCfg<interface_, opts_>; \
    using prefix_ ## CfgAnt ## suffix_ = cc_ublox::message::CfgAnt<interface_, opts_>; \
    using prefix_ ## CfgAntPoll ## suffix_ = cc_ublox::message::CfgAntPoll<interface_, opts_>; \
    using prefix_ ## CfgSbas ## suffix_ = cc_ublox::message::CfgSbas<interface_, opts_>; \
    using prefix_ ## CfgSbasPoll ## suffix_ = cc_ublox::message::CfgSbasPoll<interface_, opts_>; \
    using prefix_ ## CfgNmeaV1 ## suffix_ = cc_ublox::message::CfgNmeaV1<interface_, opts_>; \
    using prefix_ ## CfgNmeaPoll ## suffix_ = cc_ublox::message::CfgNmeaPoll<interface_, opts_>; \
    using prefix_ ## CfgUsb ## suffix_ = cc_ublox::message::CfgUsb<interface_, opts_>; \
    using prefix_ ## CfgUsbPoll ## suffix_ = cc_ublox::message::CfgUsbPoll<interface_, opts_>; \
    using prefix_ ## CfgOdo ## suffix_ = cc_ublox::message::CfgOdo<interface_, opts_>; \
    using prefix_ ## CfgOdoPoll ## suffix_ = cc_ublox::message::CfgOdoPoll<interface_, opts_>; \
    using prefix_ ## CfgNavx5V2 ## suffix_ = cc_ublox::message::CfgNavx5V2<interface_, opts_>; \
    using prefix_ ## CfgNavx5Poll ## suffix_ = cc_ublox::message::CfgNavx5Poll<interface_, opts_>; \
    using prefix_ ## CfgNav5 ## suffix_ = cc_ublox::message::CfgNav5<interface_, opts_>; \
    using prefix_ ## CfgNav5Poll ## suffix_ = cc_ublox::message::CfgNav5Poll<interface_, opts_>; \
    using prefix_ ## CfgTp5 ## suffix_ = cc_ublox::message::CfgTp5<interface_, opts_>; \
    using prefix_ ## CfgTp5PollSelect ## suffix_ = cc_ublox::message::CfgTp5PollSelect<interface_, opts_>; \
    using prefix_ ## CfgTp5Poll ## suffix_ = cc_ublox::message::CfgTp5Poll<interface_, opts_>; \
    using prefix_ ## CfgRinv ## suffix_ = cc_ublox::message::CfgRinv<interface_, opts_>; \
    using prefix_ ## CfgRinvPoll ## suffix_ = cc_ublox::message::CfgRinvPoll<interface_, opts_>; \
    using prefix_ ## CfgItfm ## suffix_ = cc_ublox::message::CfgItfm<interface_, opts_>; \
    using prefix_ ## CfgItfmPoll ## suffix_ = cc_ublox::message::CfgItfmPoll<interface_, opts_>; \
    using prefix_ ## CfgGnss ## suffix_ = cc_ublox::message::CfgGnss<interface_, opts_>; \
    using prefix_ ## CfgGnssPoll ## suffix_ = cc_ublox::message::CfgGnssPoll<interface_, opts_>; \
    using prefix_ ## CfgLogfilter ## suffix_ = cc_ublox::message::CfgLogfilter<interface_, opts_>; \
    using prefix_ ## CfgLogfilterPoll ## suffix_ = cc_ublox::message::CfgLogfilterPoll<interface_, opts_>; \
    using prefix_ ## CfgPwr ## suffix_ = cc_ublox::message::CfgPwr<interface_, opts_>; \
    using prefix_ ## CfgGeofence ## suffix_ = cc_ublox::message::CfgGeofence<interface_, opts_>; \
    using prefix_ ## CfgGeofencePoll ## suffix_ = cc_ublox::message::CfgGeofencePoll<interface_, opts_>; \
    using prefix_ ## CfgDgnss ## suffix_ = cc_ublox::message::CfgDgnss<interface_, opts_>; \
    using prefix_ ## CfgDgnssPoll ## suffix_ = cc_ublox::message::CfgDgnssPoll<interface_, opts_>; \
    using prefix_ ## CfgTmode3 ## suffix_ = cc_ublox::message::CfgTmode3<interface_, opts_>; \
    using prefix_ ## CfgTmode3Poll ## suffix_ = cc_ublox::message::CfgTmode3Poll<interface_, opts_>; \
    using prefix_ ## CfgValset ## suffix_ = cc_ublox::message::CfgValset<interface_, opts_>; \
    using prefix_ ## CfgValgetPoll ## suffix_ = cc_ublox::message::CfgValgetPoll<interface_, opts_>; \
    using prefix_ ## CfgValdel ## suffix_ = cc_ublox::message::CfgValdel<interface_, opts_>; \
    using prefix_ ## UpdSosClear ## suffix_ = cc_ublox::message::UpdSosClear<interface_, opts_>; \
    using prefix_ ## UpdSosCreate ## suffix_ = cc_ublox::message::UpdSosCreate<interface_, opts_>; \
    using prefix_ ## UpdSosPoll ## suffix_ = cc_ublox::message::UpdSosPoll<interface_, opts_>; \
    using prefix_ ## MonIoPoll ## suffix_ = cc_ublox::message::MonIoPoll<interface_, opts_>; \
    using prefix_ ## MonVerPoll ## suffix_ = cc_ublox::message::MonVerPoll<interface_, opts_>; \
    using prefix_ ## MonMsgppPoll ## suffix_ = cc_ublox::message::MonMsgppPoll<interface_, opts_>; \
    using prefix_ ## MonRxbufPoll ## suffix_ = cc_ublox::message::MonRxbufPoll<interface_, opts_>; \
    using prefix_ ## MonTxbufPoll ## suffix_ = cc_ublox::message::MonTxbufPoll<interface_, opts_>; \
    using prefix_ ## MonHwPoll ## suffix_ = cc_ublox::message::MonHwPoll<interface_, opts_>; \
    using prefix_ ## MonHw2Poll ## suffix_ = cc_ublox::message::MonHw2Poll<interface_, opts_>; \
    using prefix_ ## MonPatchPoll ## suffix_ = cc_ublox::message::MonPatchPoll<interface_, opts_>; \
    using prefix_ ## MonGnssPoll ## suffix_ = cc_ublox::message::MonGnssPoll<interface_, opts_>; \
    using prefix_ ## MonSpanPoll ## suffix_ = cc_ublox::message::MonSpanPoll<interface_, opts_>; \
    using prefix_ ## MonCommsPoll ## suffix_ = cc_ublox::message::MonCommsPoll<interface_, opts_>; \
    using prefix_ ## MonHw3Poll ## suffix_ = cc_ublox::message::MonHw3Poll<interface_, opts_>; \
    using prefix_ ## MonRfPoll ## suffix_ = cc_ublox::message::MonRfPoll<interface_, opts_>; \
    using prefix_ ## TimTpPoll ## suffix_ = cc_ublox::message::TimTpPoll<interface_, opts_>; \
    using prefix_ ## TimTm2Poll ## suffix_ = cc_ublox::message::TimTm2Poll<interface_, opts_>; \
    using prefix_ ## TimVrfyPoll ## suffix_ = cc_ublox::message::TimVrfyPoll<interface_, opts_>; \
    using prefix_ ## MgaGpsEph ## suffix_ = cc_ublox::message::MgaGpsEph<interface_, opts_>; \
    using prefix_ ## MgaGpsAlm ## suffix_ = cc_ublox::message::MgaGpsAlm<interface_, opts_>; \
    using prefix_ ## MgaGpsHealth ## suffix_ = cc_ublox::message::MgaGpsHealth<interface_, opts_>; \
    using prefix_ ## MgaGpsUtc ## suffix_ = cc_ublox::message::MgaGpsUtc<interface_, opts_>; \
    using prefix_ ## MgaGpsIono ## suffix_ = cc_ublox::message::MgaGpsIono<interface_, opts_>; \
    using prefix_ ## MgaGalEph ## suffix_ = cc_ublox::message::MgaGalEph<interface_, opts_>; \
    using prefix_ ## MgaGalAlm ## suffix_ = cc_ublox::message::MgaGalAlm<interface_, opts_>; \
    using prefix_ ## MgaGalTimeoffset ## suffix_ = cc_ublox::message::MgaGalTimeoffset<interface_, opts_>; \
    using prefix_ ## MgaGalUtc ## suffix_ = cc_ublox::message::MgaGalUtc<interface_, opts_>; \
    using prefix_ ## MgaBdsEph ## suffix_ = cc_ublox::message::MgaBdsEph<interface_, opts_>; \
    using prefix_ ## MgaBdsAlm ## suffix_ = cc_ublox::message::MgaBdsAlm<interface_, opts_>; \
    using prefix_ ## MgaBdsHealth ## suffix_ = cc_ublox::message::MgaBdsHealth<interface_, opts_>; \
    using prefix_ ## MgaBdsUtc ## suffix_ = cc_ublox::message::MgaBdsUtc<interface_, opts_>; \
    using prefix_ ## MgaBdsIono ## suffix_ = cc_ublox::message::MgaBdsIono<interface_, opts_>; \
    using prefix_ ## MgaQzssEph ## suffix_ = cc_ublox::message::MgaQzssEph<interface_, opts_>; \
    using prefix_ ## MgaQzssAlm ## suffix_ = cc_ublox::message::MgaQzssAlm<interface_, opts_>; \
    using prefix_ ## MgaQzssHealth ## suffix_ = cc_ublox::message::MgaQzssHealth<interface_, opts_>; \
    using prefix_ ## MgaGloEph ## suffix_ = cc_ublox::message::MgaGloEph<interface_, opts_>; \
    using prefix_ ## MgaGloAlm ## suffix_ = cc_ublox::message::MgaGloAlm<interface_, opts_>; \
    using prefix_ ## MgaGloTimeoffset ## suffix_ = cc_ublox::message::MgaGloTimeoffset<interface_, opts_>; \
    using prefix_ ## MgaAno ## suffix_ = cc_ublox::message::MgaAno<interface_, opts_>; \
    using prefix_ ## MgaIniPosXyz ## suffix_ = cc_ublox::message::MgaIniPosXyz<interface_, opts_>; \
    using prefix_ ## MgaIniPosLlh ## suffix_ = cc_ublox::message::MgaIniPosLlh<interface_, opts_>; \
    using prefix_ ## MgaIniTimeUtc ## suffix_ = cc_ublox::message::MgaIniTimeUtc<interface_, opts_>; \
    using prefix_ ## MgaIniTimeGnss ## suffix_ = cc_ublox::message::MgaIniTimeGnss<interface_, opts_>; \
    using prefix_ ## MgaIniClkd ## suffix_ = cc_ublox::message::MgaIniClkd<interface_, opts_>; \
    using prefix_ ## MgaIniFreq ## suffix_ = cc_ublox::message::MgaIniFreq<interface_, opts_>; \
    using prefix_ ## MgaIniEop ## suffix_ = cc_ublox::message::MgaIniEop<interface_, opts_>; \
    using prefix_ ## MgaDbd ## suffix_ = cc_ublox::message::MgaDbd<interface_, opts_>; \
    using prefix_ ## MgaDbdPoll ## suffix_ = cc_ublox::message::MgaDbdPoll<interface_, opts_>; \
    using prefix_ ## LogErase ## suffix_ = cc_ublox::message::LogErase<interface_, opts_>; \
    using prefix_ ## LogString ## suffix_ = cc_ublox::message::LogString<interface_, opts_>; \
    using prefix_ ## LogCreate ## suffix_ = cc_ublox::message::LogCreate<interface_, opts_>; \
    using prefix_ ## LogInfoPoll ## suffix_ = cc_ublox::message::LogInfoPoll<interface_, opts_>; \
    using prefix_ ## LogRetrieve ## suffix_ = cc_ublox::message::LogRetrieve<interface_, opts_>; \
    using prefix_ ## LogFindtime ## suffix_ = cc_ublox::message::LogFindtime<interface_, opts_>; \
    using prefix_ ## LogRetrievebatch ## suffix_ = cc_ublox::message::LogRetrievebatch<interface_, opts_>; \
    using prefix_ ## SecUniqidPoll ## suffix_ = cc_ublox::message::SecUniqidPoll<interface_, opts_>;

/// @brief Create type aliases for the server input ublox9 platform messages of the protocol using default options.
/// @param prefix_ Prefix of the alias message type.
/// @param suffix_ Suffix of the alias message type.
/// @param interface_ Type of the common message interface.
#define CC_UBLOX_ALIASES_FOR_UBLOX9_SERVER_INPUT_MESSAGES_DEFAULT_OPTIONS(prefix_, suffix_, interface_) \
    CC_UBLOX_ALIASES_FOR_UBLOX9_SERVER_INPUT_MESSAGES(prefix_, suffix_, interface_, cc_ublox::options::DefaultOptions)
