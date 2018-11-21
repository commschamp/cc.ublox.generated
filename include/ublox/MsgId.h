/// @file
/// @brief Contains definition of message ids enumeration.

#pragma once

#include <cstdint>

namespace ublox
{

/// @brief Message ids enumeration.
enum MsgId : std::uint16_t
{
    MsgId_NavPosecef = 0x0101U, ///< message id <b>NAV-POSECEF</b>.
    MsgId_NavPosllh = 0x0102U, ///< message id <b>NAV-POSLLH</b>.
    MsgId_NavStatus = 0x0103U, ///< message id <b>NAV-STATUS</b>.
    MsgId_NavDop = 0x0104U, ///< message id <b>NAV-DOP</b>.
    MsgId_NavAtt = 0x0105U, ///< message id <b>NAV-ATT</b>.
    MsgId_NavSol = 0x0106U, ///< message id <b>NAV-SOL</b>.
    MsgId_NavPvt = 0x0107U, ///< message id <b>NAV-PVT</b>.
    MsgId_NavOdo = 0x0109U, ///< message id <b>NAV-ODO</b>.
    MsgId_NavResetodo = 0x0110U, ///< message id <b>NAV-RESETODO</b>.
    MsgId_NavVelecef = 0x0111U, ///< message id <b>NAV-VELECEF</b>.
    MsgId_NavVelned = 0x0112U, ///< message id <b>NAV-VELNED</b>.
    MsgId_NavHpposecef = 0x0113U, ///< message id <b>NAV-HPPOSECEF</b>.
    MsgId_NavHpposllh = 0x0114U, ///< message id <b>NAV-HPPOSLLH</b>.
    MsgId_NavTimegps = 0x0120U, ///< message id <b>NAV-TIMEGPS</b>.
    MsgId_NavTimeutc = 0x0121U, ///< message id <b>NAV-TIMEUTC</b>.
    MsgId_NavClock = 0x0122U, ///< message id <b>NAV-CLOCK</b>.
    MsgId_NavTimeglo = 0x0123U, ///< message id <b>NAV-TIMEGLO</b>.
    MsgId_NavTimebds = 0x0124U, ///< message id <b>NAV-TIMEBDS</b>.
    MsgId_NavTimegal = 0x0125U, ///< message id <b>NAV-TIMEGAL</b>.
    MsgId_NavTimels = 0x0126U, ///< message id <b>NAV-MsgId_NAV_TIMELS</b>.
    MsgId_NavSvinfo = 0x0130U, ///< message id <b>NAV-SVINFO</b>.
    MsgId_NavDgps = 0x0131U, ///< message id <b>NAV-DGPS</b>.
    MsgId_NavSbas = 0x0132U, ///< message id <b>NAV-SBAS</b>.
    MsgId_NavOrb = 0x0134U, ///< message id <b>NAV-ORB</b>.
    MsgId_NavSat = 0x0135U, ///< message id <b>NAV-SAT</b>.
    MsgId_NavGeofence = 0x0139U, ///< message id <b>NAV-GEOFENCE</b>.
    MsgId_NavSvin = 0x013BU, ///< message id <b>NAV-SVIN</b>.
    MsgId_NavRelposned = 0x013CU, ///< message id <b>NAV-RELPOSNED</b>.
    MsgId_NavEkfstatus = 0x0140U, ///< message id <b>NAV-EKFSTATUS</b>.
    MsgId_NavAopstatus = 0x0160U, ///< message id <b>NAV-AOPSTATUS</b>.
    MsgId_NavEoe = 0x0161U, ///< message id <b>NAV-EOE</b>.
    MsgId_RxmRaw = 0x0210U, ///< message id <b>RXM-RAW</b>.
    MsgId_RxmSfrb = 0x0211U, ///< message id <b>RXM-SFRB</b>.
    MsgId_RxmSfrbx = 0x0213U, ///< message id <b>RXM-SFRBX</b>.
    MsgId_RxmMeasx = 0x0214U, ///< message id <b>RXM-MEASX</b>.
    MsgId_RxmRawx = 0x0215U, ///< message id <b>RXM-RAWX</b>.
    MsgId_RxmSvsi = 0x0220U, ///< message id <b>RXM-SVSI</b>.
    MsgId_RxmAlm = 0x0230U, ///< message id <b>RXM-ALM</b>.
    MsgId_RxmEph = 0x0231U, ///< message id <b>RXM-EPH</b>.
    MsgId_RxmRtcm = 0x0232U, ///< message id <b>RXM-RTCM</b>.
    MsgId_RxmPmreq = 0x0241U, ///< message id <b>RXM-PMREQ</b>.
    MsgId_RxmRlm = 0x0259U, ///< message id <b>RXM-RLM</b>.
    MsgId_RxmImes = 0x0261U, ///< message id <b>RXM-IMES</b>.
    MsgId_InfError = 0x0400U, ///< message id <b>INF-ERROR</b>.
    MsgId_InfWarning = 0x0401U, ///< message id <b>INF-WARNING</b>.
    MsgId_InfNotice = 0x0402U, ///< message id <b>INF-NOTICE</b>.
    MsgId_InfTest = 0x0403U, ///< message id <b>INF-TEST</b>.
    MsgId_InfDebug = 0x0404U, ///< message id <b>INF-DEBUG</b>.
    MsgId_AckNak = 0x0500U, ///< message id <b>ACK-NAK</b>.
    MsgId_AckAck = 0x0501U, ///< message id <b>ACK-ACK</b>.
    MsgId_CfgPrt = 0x0600U, ///< message id <b>CFG-PRT</b>.
    MsgId_CfgMsg = 0x0601U, ///< message id <b>CFG-MSG</b>.
    MsgId_CfgInf = 0x0602U, ///< message id <b>CFG-INF</b>.
    MsgId_CfgRst = 0x0604U, ///< message id <b>CFG-RST</b>.
    MsgId_CfgDat = 0x0606U, ///< message id <b>CFG-DAT</b>.
    MsgId_CfgTp = 0x0607U, ///< message id <b>CFG-TP</b>.
    MsgId_CfgRate = 0x0608U, ///< message id <b>CFG-RATE</b>.
    MsgId_CfgCfg = 0x0609U, ///< message id <b>CFG-CFG</b>.
    MsgId_CfgFxn = 0x060EU, ///< message id <b>CFG-FXN</b>.
    MsgId_CfgRxm = 0x0611U, ///< message id <b>CFG-RXM</b>.
    MsgId_CfgEkf = 0x0612U, ///< message id <b>CFG-EKF</b>.
    MsgId_CfgAnt = 0x0613U, ///< message id <b>CFG-ANT</b>.
    MsgId_CfgSbas = 0x0616U, ///< message id <b>CFG-SBAS</b>.
    MsgId_CfgNmea = 0x0617U, ///< message id <b>CFG-NMEA</b>.
    MsgId_CfgUsb = 0x061BU, ///< message id <b>CFG-USB</b>.
    MsgId_CfgTmode = 0x061DU, ///< message id <b>CFG-TMODE</b>.
    MsgId_CfgOdo = 0x061EU, ///< message id <b>CFG-ODO</b>.
    MsgId_CfgNvs = 0x0622U, ///< message id <b>CFG-NVS</b>.
    MsgId_CfgNavx5 = 0x0623U, ///< message id <b>CFG-NAVX5</b>.
    MsgId_CfgNav5 = 0x0624U, ///< message id <b>CFG-NAV5</b>.
    MsgId_CfgEsfgwt = 0x0629U, ///< message id <b>CFG-ESFGWT</b>.
    MsgId_CfgTp5 = 0x0631U, ///< message id <b>CFG-TP5</b>.
    MsgId_CfgPm = 0x0632U, ///< message id <b>CFG-PM</b>.
    MsgId_CfgRinv = 0x0634U, ///< message id <b>CFG-RINV</b>.
    MsgId_CfgItfm = 0x0639U, ///< message id <b>CFG-ITFM</b>.
    MsgId_CfgPm2 = 0x063BU, ///< message id <b>CFG-PM2</b>.
    MsgId_CfgTmode2 = 0x063DU, ///< message id <b>CFG-TMODE2</b>.
    MsgId_CfgGnss = 0x063EU, ///< message id <b>CFG-GNSS</b>.
    MsgId_CfgLogfilter = 0x0647U, ///< message id <b>CFG-LOGFILTER</b>.
    MsgId_CfgTxslot = 0x0653U, ///< message id <b>CFG-TXSLOT</b>.
    MsgId_CfgPwr = 0x0657U, ///< message id <b>CFG-PWR</b>.
    MsgId_CfgHnr = 0x065CU, ///< message id <b>CFG-HNR</b>.
    MsgId_CfgEsrc = 0x0660U, ///< message id <b>CFG-ESRC</b>.
    MsgId_CfgDosc = 0x0661U, ///< message id <b>CFG-DOSC</b>.
    MsgId_CfgSmgr = 0x0662U, ///< message id <b>CFG-SMGR</b>.
    MsgId_CfgGeofence = 0x0669U, ///< message id <b>CFG-GEOFENCE</b>.
    MsgId_CfgDgnss = 0x0670U, ///< message id <b>CFG-DGNSS</b>.
    MsgId_CfgTmode3 = 0x0671U, ///< message id <b>CFG-TMODE3</b>.
    MsgId_CfgFixseed = 0x0684U, ///< message id <b>CFG-FIXSEED</b>.
    MsgId_CfgDynseed = 0x0685U, ///< message id <b>CFG-DYNSEED</b>.
    MsgId_CfgPms = 0x0686U, ///< message id <b>CFG-PMS</b>.
    MsgId_UpdSos = 0x0914U, ///< message id <b>UPD-SOS</b>.
    MsgId_MonIo = 0x0A02U, ///< message id <b>MON-IO</b>.
    MsgId_MonVer = 0x0A04U, ///< message id <b>MON-VER</b>.
    MsgId_MonMsgpp = 0x0A06U, ///< message id <b>MON-MSGPP</b>.
    MsgId_MonRxbuf = 0x0A07U, ///< message id <b>MON-RXBUF</b>.
    MsgId_MonTxbuf = 0x0A08U, ///< message id <b>MON-TXBUF</b>.
    MsgId_MonHw = 0x0A09U, ///< message id <b>MON-HW</b>.
    MsgId_MonHw2 = 0x0A0BU, ///< message id <b>MON-HW2</b>.
    MsgId_MonRxr = 0x0A21U, ///< message id <b>MON-RXR</b>.
    MsgId_MonPatch = 0x0A27U, ///< message id <b>MON-PATCH</b>.
    MsgId_MonGnss = 0x0A28U, ///< message id <b>MON-GNSS</b>.
    MsgId_MonSmgr = 0x0A2EU, ///< message id <b>MON-SMGR</b>.
    MsgId_AidReq = 0x0B00U, ///< message id <b>AID-REQ</b>.
    MsgId_AidIni = 0x0B01U, ///< message id <b>AID-INI</b>.
    MsgId_AidHui = 0x0B02U, ///< message id <b>AID-HUI</b>.
    MsgId_AidData = 0x0B10U, ///< message id <b>AID-DATA</b>.
    MsgId_AidAlm = 0x0B30U, ///< message id <b>AID-ALM</b>.
    MsgId_AidEph = 0x0B31U, ///< message id <b>AID-EPH</b>.
    MsgId_AidAlpsrv = 0x0B32U, ///< message id <b>AID-ALPSRV</b>.
    MsgId_AidAop = 0x0B33U, ///< message id <b>AID-AOP</b>.
    MsgId_AidAlp = 0x0B50U, ///< message id <b>AID-ALP</b>.
    MsgId_TimTp = 0x0D01U, ///< message id <b>TIM-TP</b>.
    MsgId_TimTm2 = 0x0D03U, ///< message id <b>TIM-TM2</b>.
    MsgId_TimVrfy = 0x0D04U, ///< message id <b>TIM-VRFY</b>.
    MsgId_TimSvin = 0x0D06U, ///< message id <b>TIM-SVIN</b>.
    MsgId_TimDosc = 0x0D11U, ///< message id <b>TIM-DOSC</b>.
    MsgId_TimTos = 0x0D12U, ///< message id <b>TIM-TOS</b>.
    MsgId_TimSmeas = 0x0D13U, ///< message id <b>TIM-SMEAS</b>.
    MsgId_TimVcocal = 0x0D15U, ///< message id <b>TIM-VCOCAL</b>.
    MsgId_TimFchg = 0x0D16U, ///< message id <b>TIM-FCHG</b>.
    MsgId_TimHoc = 0x0D17U, ///< message id <b>TIM-HOC</b>.
    MsgId_EsfMeas = 0x1002U, ///< message id <b>ESF-MEAS</b>.
    MsgId_EsfRaw = 0x1003U, ///< message id <b>ESF-RAW</b>.
    MsgId_EsfStatus = 0x1010U, ///< message id <b>ESF-STATUS</b>.
    MsgId_EsfIns = 0x1015U, ///< message id <b>ESF-INS</b>.
    MsgId_MgaGps = 0x1300U, ///< message id <b>MGA-GPS</b>.
    MsgId_MgaGal = 0x1302U, ///< message id <b>MGA-GAL</b>.
    MsgId_MgaBds = 0x1303U, ///< message id <b>MGA-BDS</b>.
    MsgId_MgaQzss = 0x1305U, ///< message id <b>MGA-QZSS</b>.
    MsgId_MgaGlo = 0x1306U, ///< message id <b>MGA-GLO</b>.
    MsgId_MgaAno = 0x1320U, ///< message id <b>MGA-ANO</b>.
    MsgId_MgaFlash = 0x1321U, ///< message id <b>MGA-FLASH</b>.
    MsgId_MgaIni = 0x1340U, ///< message id <b>MGA-INI</b>.
    MsgId_MgaAck = 0x1360U, ///< message id <b>MGA-ACK</b>.
    MsgId_MgaDbd = 0x1380U, ///< message id <b>MGA-DBD</b>.
    MsgId_LogErase = 0x2103U, ///< message id <b>LOG-ERASE</b>.
    MsgId_LogString = 0x2104U, ///< message id <b>LOG-STRING</b>.
    MsgId_LogCreate = 0x2107U, ///< message id <b>LOG-CREATE</b>.
    MsgId_LogInfo = 0x2108U, ///< message id <b>LOG-INFO</b>.
    MsgId_LogRetrieve = 0x2109U, ///< message id <b>LOG-RETRIEVE</b>.
    MsgId_LogRetrievepos = 0x210BU, ///< message id <b>LOG-RETRIEVEPOS</b>.
    MsgId_LogRetrievestring = 0x210DU, ///< message id <b>LOG-RETRIEVESTRING</b>.
    MsgId_LogFindtime = 0x210EU, ///< message id <b>LOG-FINDTIME</b>.
    MsgId_LogRetrieveposextra = 0x210FU, ///< message id <b>LOG-RETRIEVEPOSEXTRA</b>.
    MsgId_SecSign = 0x2701U, ///< message id <b>SEC-SIGN</b>.
    MsgId_SecUniqid = 0x2703U, ///< message id <b>SEC-UNIQID</b>.
    MsgId_HnrPvt = 0x2800U, ///< message id <b>HNR-PVT</b>.
    
};

} // namespace ublox


