/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>
#include "ublox/Version.h"

namespace ublox
{

/// @brief Message ids enumeration.
enum MsgId : std::uint16_t
{
    MsgId_NavPosecef = 0x0101U, ///< message id of <b>NAV-POSECEF</b> message.
    MsgId_NavPosllh = 0x0102U, ///< message id of <b>NAV-POSLLH</b> message.
    MsgId_NavStatus = 0x0103U, ///< message id of <b>NAV-STATUS</b> message.
    MsgId_NavDop = 0x0104U, ///< message id of <b>NAV-DOP</b> message.
    MsgId_NavAtt = 0x0105U, ///< message id of <b>NAV-ATT</b> message.
    MsgId_NavSol = 0x0106U, ///< message id of <b>NAV-SOL</b> message.
    MsgId_NavPvt = 0x0107U, ///< message id of <b>NAV-PVT</b> message.
    MsgId_NavOdo = 0x0109U, ///< message id of <b>NAV-ODO</b> message.
    MsgId_NavResetodo = 0x0110U, ///< message id of <b>NAV-RESETODO</b> message.
    MsgId_NavVelecef = 0x0111U, ///< message id of <b>NAV-VELECEF</b> message.
    MsgId_NavVelned = 0x0112U, ///< message id of <b>NAV-VELNED</b> message.
    MsgId_NavHpposecef = 0x0113U, ///< message id of <b>NAV-HPPOSECEF</b> message.
    MsgId_NavHpposllh = 0x0114U, ///< message id of <b>NAV-HPPOSLLH</b> message.
    MsgId_NavTimegps = 0x0120U, ///< message id of <b>NAV-TIMEGPS</b> message.
    MsgId_NavTimeutc = 0x0121U, ///< message id of <b>NAV-TIMEUTC</b> message.
    MsgId_NavClock = 0x0122U, ///< message id of <b>NAV-CLOCK</b> message.
    MsgId_NavTimeglo = 0x0123U, ///< message id of <b>NAV-TIMEGLO</b> message.
    MsgId_NavTimebds = 0x0124U, ///< message id of <b>NAV-TIMEBDS</b> message.
    MsgId_NavTimegal = 0x0125U, ///< message id of <b>NAV-TIMEGAL</b> message.
    MsgId_NavTimels = 0x0126U, ///< message id of <b>NAV-MsgId_NAV_TIMELS</b> message.
    MsgId_NavSvinfo = 0x0130U, ///< message id of <b>NAV-SVINFO</b> message.
    MsgId_NavDgps = 0x0131U, ///< message id of <b>NAV-DGPS</b> message.
    MsgId_NavSbas = 0x0132U, ///< message id of <b>NAV-SBAS</b> message.
    MsgId_NavOrb = 0x0134U, ///< message id of <b>NAV-ORB</b> message.
    MsgId_NavSat = 0x0135U, ///< message id of <b>NAV-SAT</b> message.
    MsgId_NavGeofence = 0x0139U, ///< message id of <b>NAV-GEOFENCE</b> message.
    MsgId_NavSvin = 0x013BU, ///< message id of <b>NAV-SVIN</b> message.
    MsgId_NavRelposned = 0x013CU, ///< message id of <b>NAV-RELPOSNED</b> message.
    MsgId_NavEkfstatus = 0x0140U, ///< message id of <b>NAV-EKFSTATUS</b> message.
    MsgId_NavAopstatus = 0x0160U, ///< message id of <b>NAV-AOPSTATUS</b> message.
    MsgId_NavEoe = 0x0161U, ///< message id of <b>NAV-EOE</b> message.
    MsgId_RxmRaw = 0x0210U, ///< message id of <b>RXM-RAW</b> message.
    MsgId_RxmSfrb = 0x0211U, ///< message id of <b>RXM-SFRB</b> message.
    MsgId_RxmSfrbx = 0x0213U, ///< message id of <b>RXM-SFRBX</b> message.
    MsgId_RxmMeasx = 0x0214U, ///< message id of <b>RXM-MEASX</b> message.
    MsgId_RxmRawx = 0x0215U, ///< message id of <b>RXM-RAWX</b> message.
    MsgId_RxmSvsi = 0x0220U, ///< message id of <b>RXM-SVSI</b> message.
    MsgId_RxmAlm = 0x0230U, ///< message id of <b>RXM-ALM</b> message.
    MsgId_RxmEph = 0x0231U, ///< message id of <b>RXM-EPH</b> message.
    MsgId_RxmRtcm = 0x0232U, ///< message id of <b>RXM-RTCM</b> message.
    MsgId_RxmPmreq = 0x0241U, ///< message id of <b>RXM-PMREQ</b> message.
    MsgId_RxmRlm = 0x0259U, ///< message id of <b>RXM-RLM</b> message.
    MsgId_RxmImes = 0x0261U, ///< message id of <b>RXM-IMES</b> message.
    MsgId_InfError = 0x0400U, ///< message id of <b>INF-ERROR</b> message.
    MsgId_InfWarning = 0x0401U, ///< message id of <b>INF-WARNING</b> message.
    MsgId_InfNotice = 0x0402U, ///< message id of <b>INF-NOTICE</b> message.
    MsgId_InfTest = 0x0403U, ///< message id of <b>INF-TEST</b> message.
    MsgId_InfDebug = 0x0404U, ///< message id of <b>INF-DEBUG</b> message.
    MsgId_AckNak = 0x0500U, ///< message id of <b>ACK-NAK</b> message.
    MsgId_AckAck = 0x0501U, ///< message id of <b>ACK-ACK</b> message.
    MsgId_CfgPrt = 0x0600U, ///< message id of <b>CFG-PRT</b> message.
    MsgId_CfgMsg = 0x0601U, ///< message id of <b>CFG-MSG</b> message.
    MsgId_CfgInf = 0x0602U, ///< message id of <b>CFG-INF</b> message.
    MsgId_CfgRst = 0x0604U, ///< message id of <b>CFG-RST</b> message.
    MsgId_CfgDat = 0x0606U, ///< message id of <b>CFG-DAT</b> message.
    MsgId_CfgTp = 0x0607U, ///< message id of <b>CFG-TP</b> message.
    MsgId_CfgRate = 0x0608U, ///< message id of <b>CFG-RATE</b> message.
    MsgId_CfgCfg = 0x0609U, ///< message id of <b>CFG-CFG</b> message.
    MsgId_CfgFxn = 0x060EU, ///< message id of <b>CFG-FXN</b> message.
    MsgId_CfgRxm = 0x0611U, ///< message id of <b>CFG-RXM</b> message.
    MsgId_CfgEkf = 0x0612U, ///< message id of <b>CFG-EKF</b> message.
    MsgId_CfgAnt = 0x0613U, ///< message id of <b>CFG-ANT</b> message.
    MsgId_CfgSbas = 0x0616U, ///< message id of <b>CFG-SBAS</b> message.
    MsgId_CfgNmea = 0x0617U, ///< message id of <b>CFG-NMEA</b> message.
    MsgId_CfgUsb = 0x061BU, ///< message id of <b>CFG-USB</b> message.
    MsgId_CfgTmode = 0x061DU, ///< message id of <b>CFG-TMODE</b> message.
    MsgId_CfgOdo = 0x061EU, ///< message id of <b>CFG-ODO</b> message.
    MsgId_CfgNvs = 0x0622U, ///< message id of <b>CFG-NVS</b> message.
    MsgId_CfgNavx5 = 0x0623U, ///< message id of <b>CFG-NAVX5</b> message.
    MsgId_CfgNav5 = 0x0624U, ///< message id of <b>CFG-NAV5</b> message.
    MsgId_CfgEsfgwt = 0x0629U, ///< message id of <b>CFG-ESFGWT</b> message.
    MsgId_CfgTp5 = 0x0631U, ///< message id of <b>CFG-TP5</b> message.
    MsgId_CfgPm = 0x0632U, ///< message id of <b>CFG-PM</b> message.
    MsgId_CfgRinv = 0x0634U, ///< message id of <b>CFG-RINV</b> message.
    MsgId_CfgItfm = 0x0639U, ///< message id of <b>CFG-ITFM</b> message.
    MsgId_CfgPm2 = 0x063BU, ///< message id of <b>CFG-PM2</b> message.
    MsgId_CfgTmode2 = 0x063DU, ///< message id of <b>CFG-TMODE2</b> message.
    MsgId_CfgGnss = 0x063EU, ///< message id of <b>CFG-GNSS</b> message.
    MsgId_CfgLogfilter = 0x0647U, ///< message id of <b>CFG-LOGFILTER</b> message.
    MsgId_CfgTxslot = 0x0653U, ///< message id of <b>CFG-TXSLOT</b> message.
    MsgId_CfgPwr = 0x0657U, ///< message id of <b>CFG-PWR</b> message.
    MsgId_CfgHnr = 0x065CU, ///< message id of <b>CFG-HNR</b> message.
    MsgId_CfgEsrc = 0x0660U, ///< message id of <b>CFG-ESRC</b> message.
    MsgId_CfgDosc = 0x0661U, ///< message id of <b>CFG-DOSC</b> message.
    MsgId_CfgSmgr = 0x0662U, ///< message id of <b>CFG-SMGR</b> message.
    MsgId_CfgGeofence = 0x0669U, ///< message id of <b>CFG-GEOFENCE</b> message.
    MsgId_CfgDgnss = 0x0670U, ///< message id of <b>CFG-DGNSS</b> message.
    MsgId_CfgTmode3 = 0x0671U, ///< message id of <b>CFG-TMODE3</b> message.
    MsgId_CfgFixseed = 0x0684U, ///< message id of <b>CFG-FIXSEED</b> message.
    MsgId_CfgDynseed = 0x0685U, ///< message id of <b>CFG-DYNSEED</b> message.
    MsgId_CfgPms = 0x0686U, ///< message id of <b>CFG-PMS</b> message.
    MsgId_UpdSos = 0x0914U, ///< message id of <b>UPD-SOS</b> message.
    MsgId_MonIo = 0x0A02U, ///< message id of <b>MON-IO</b> message.
    MsgId_MonVer = 0x0A04U, ///< message id of <b>MON-VER</b> message.
    MsgId_MonMsgpp = 0x0A06U, ///< message id of <b>MON-MSGPP</b> message.
    MsgId_MonRxbuf = 0x0A07U, ///< message id of <b>MON-RXBUF</b> message.
    MsgId_MonTxbuf = 0x0A08U, ///< message id of <b>MON-TXBUF</b> message.
    MsgId_MonHw = 0x0A09U, ///< message id of <b>MON-HW</b> message.
    MsgId_MonHw2 = 0x0A0BU, ///< message id of <b>MON-HW2</b> message.
    MsgId_MonRxr = 0x0A21U, ///< message id of <b>MON-RXR</b> message.
    MsgId_MonPatch = 0x0A27U, ///< message id of <b>MON-PATCH</b> message.
    MsgId_MonGnss = 0x0A28U, ///< message id of <b>MON-GNSS</b> message.
    MsgId_MonSmgr = 0x0A2EU, ///< message id of <b>MON-SMGR</b> message.
    MsgId_AidReq = 0x0B00U, ///< message id of <b>AID-REQ</b> message.
    MsgId_AidIni = 0x0B01U, ///< message id of <b>AID-INI</b> message.
    MsgId_AidHui = 0x0B02U, ///< message id of <b>AID-HUI</b> message.
    MsgId_AidData = 0x0B10U, ///< message id of <b>AID-DATA</b> message.
    MsgId_AidAlm = 0x0B30U, ///< message id of <b>AID-ALM</b> message.
    MsgId_AidEph = 0x0B31U, ///< message id of <b>AID-EPH</b> message.
    MsgId_AidAlpsrv = 0x0B32U, ///< message id of <b>AID-ALPSRV</b> message.
    MsgId_AidAop = 0x0B33U, ///< message id of <b>AID-AOP</b> message.
    MsgId_AidAlp = 0x0B50U, ///< message id of <b>AID-ALP</b> message.
    MsgId_TimTp = 0x0D01U, ///< message id of <b>TIM-TP</b> message.
    MsgId_TimTm2 = 0x0D03U, ///< message id of <b>TIM-TM2</b> message.
    MsgId_TimVrfy = 0x0D04U, ///< message id of <b>TIM-VRFY</b> message.
    MsgId_TimSvin = 0x0D06U, ///< message id of <b>TIM-SVIN</b> message.
    MsgId_TimDosc = 0x0D11U, ///< message id of <b>TIM-DOSC</b> message.
    MsgId_TimTos = 0x0D12U, ///< message id of <b>TIM-TOS</b> message.
    MsgId_TimSmeas = 0x0D13U, ///< message id of <b>TIM-SMEAS</b> message.
    MsgId_TimVcocal = 0x0D15U, ///< message id of <b>TIM-VCOCAL</b> message.
    MsgId_TimFchg = 0x0D16U, ///< message id of <b>TIM-FCHG</b> message.
    MsgId_TimHoc = 0x0D17U, ///< message id of <b>TIM-HOC</b> message.
    MsgId_EsfMeas = 0x1002U, ///< message id of <b>ESF-MEAS</b> message.
    MsgId_EsfRaw = 0x1003U, ///< message id of <b>ESF-RAW</b> message.
    MsgId_EsfStatus = 0x1010U, ///< message id of <b>ESF-STATUS</b> message.
    MsgId_EsfIns = 0x1015U, ///< message id of <b>ESF-INS</b> message.
    MsgId_MgaGps = 0x1300U, ///< message id of <b>MGA-GPS</b> message.
    MsgId_MgaGal = 0x1302U, ///< message id of <b>MGA-GAL</b> message.
    MsgId_MgaBds = 0x1303U, ///< message id of <b>MGA-BDS</b> message.
    MsgId_MgaQzss = 0x1305U, ///< message id of <b>MGA-QZSS</b> message.
    MsgId_MgaGlo = 0x1306U, ///< message id of <b>MGA-GLO</b> message.
    MsgId_MgaAno = 0x1320U, ///< message id of <b>MGA-ANO</b> message.
    MsgId_MgaFlash = 0x1321U, ///< message id of <b>MGA-FLASH</b> message.
    MsgId_MgaIni = 0x1340U, ///< message id of <b>MGA-INI</b> message.
    MsgId_MgaAck = 0x1360U, ///< message id of <b>MGA-ACK</b> message.
    MsgId_MgaDbd = 0x1380U, ///< message id of <b>MGA-DBD</b> message.
    MsgId_LogErase = 0x2103U, ///< message id of <b>LOG-ERASE</b> message.
    MsgId_LogString = 0x2104U, ///< message id of <b>LOG-STRING</b> message.
    MsgId_LogCreate = 0x2107U, ///< message id of <b>LOG-CREATE</b> message.
    MsgId_LogInfo = 0x2108U, ///< message id of <b>LOG-INFO</b> message.
    MsgId_LogRetrieve = 0x2109U, ///< message id of <b>LOG-RETRIEVE</b> message.
    MsgId_LogRetrievepos = 0x210BU, ///< message id of <b>LOG-RETRIEVEPOS</b> message.
    MsgId_LogRetrievestring = 0x210DU, ///< message id of <b>LOG-RETRIEVESTRING</b> message.
    MsgId_LogFindtime = 0x210EU, ///< message id of <b>LOG-FINDTIME</b> message.
    MsgId_LogRetrieveposextra = 0x210FU, ///< message id of <b>LOG-RETRIEVEPOSEXTRA</b> message.
    MsgId_SecSign = 0x2701U, ///< message id of <b>SEC-SIGN</b> message.
    MsgId_SecUniqid = 0x2703U, ///< message id of <b>SEC-UNIQID</b> message.
    MsgId_HnrPvt = 0x2800U, ///< message id of <b>HNR-PVT</b> message.
    
    // --- Extra values generated for convenience ---
    MsgId_FirstValue = 0x0101U, ///< First defined value.
    MsgId_LastValue = 0x2800U, ///< Last defined value.
    MsgId_ValuesLimit = 0x2801U, ///< Upper limit for defined values.
    
};

} // namespace ublox


