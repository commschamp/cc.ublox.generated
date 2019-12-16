set (ALL_MESSAGES_LIB "all_messages")

######################################################################

function (cc_plugin_all_messages)
    set (name "${ALL_MESSAGES_LIB}")
    set (src
        field/CfgNavx5AopCfg.cpp
        field/CfgNavx5AopOrbMaxErr.cpp
        field/CfgNavx5Mask1.cpp
        field/CfgNavx5Mask2.cpp
        field/CfgNavx5SigAttenCompMode.cpp
        field/GeofenceState.cpp
        field/MsgId.cpp
        field/CfgCfgMask.cpp
        field/CfgDatD.cpp
        field/CfgDatDatumNum.cpp
        field/CfgDatFlat.cpp
        field/CfgDatMajA.cpp
        field/CfgDatRot.cpp
        field/CfgDatScale.cpp
        field/CfgMainTalkerId.cpp
        field/CfgNmeaFilter.cpp
        field/CfgNmeaFlags.cpp
        field/CfgNmeaGnssToFilter.cpp
        field/CfgNmeaGsvTalkerId.cpp
        field/CfgNmeaNumSV.cpp
        field/CfgNmeaSvNumbering.cpp
        field/CfgNmeaVersion.cpp
        field/CfgNvsMask.cpp
        field/CfgPm2Flags.cpp
        field/CfgPrtFlags.cpp
        field/CfgPrtInProtoMask.cpp
        field/CfgPrtOutProtoMask.cpp
        field/CfgPrtPortId.cpp
        field/CfgPrtTxReady.cpp
        field/CfgTp5TpIdx.cpp
        field/Day.cpp
        field/Dop.cpp
        field/EcefHP.cpp
        field/EcefVX.cpp
        field/EcefVY.cpp
        field/EcefVZ.cpp
        field/EcefX.cpp
        field/EcefY.cpp
        field/EcefZ.cpp
        field/Ftow.cpp
        field/GnssId.cpp
        field/GpsFix.cpp
        field/HAcc.cpp
        field/HMSL.cpp
        field/Heading.cpp
        field/HeadingAcc.cpp
        field/Height.cpp
        field/Hour.cpp
        field/Itow.cpp
        field/Lat.cpp
        field/Lon.cpp
        field/Min.cpp
        field/MonMsgppCount.cpp
        field/Month.cpp
        field/PAcc.cpp
        field/Res1.cpp
        field/Res2.cpp
        field/Res3.cpp
        field/Res4.cpp
        field/Res5.cpp
        field/Res6.cpp
        field/Res7.cpp
        field/Res8.cpp
        field/SAcc.cpp
        field/SbasService.cpp
        field/SbasSys.cpp
        field/Sec.cpp
        field/VAcc.cpp
        field/Vel.cpp
        field/Year.cpp
        Message.cpp
        message/AckAck.cpp
        message/AckNak.cpp
        message/AidAlm.cpp
        message/AidAlmPoll.cpp
        message/AidAlmPollSv.cpp
        message/AidAlp.cpp
        message/AidAlpData.cpp
        message/AidAlpStatus.cpp
        message/AidAlpsrv.cpp
        message/AidAlpsrvToServer.cpp
        message/AidAop.cpp
        message/AidAopPoll.cpp
        message/AidAopPollSv.cpp
        message/AidAopU8.cpp
        message/AidData.cpp
        message/AidEph.cpp
        message/AidEphPoll.cpp
        message/AidEphPollSv.cpp
        message/AidHui.cpp
        message/AidHuiPoll.cpp
        message/AidIni.cpp
        message/AidIniPoll.cpp
        message/AidReq.cpp
        message/CfgAnt.cpp
        message/CfgAntPoll.cpp
        message/CfgCfg.cpp
        message/CfgDat.cpp
        message/CfgDatPoll.cpp
        message/CfgDatStandard.cpp
        message/CfgDatUser.cpp
        message/CfgDgnss.cpp
        message/CfgDgnssPoll.cpp
        message/CfgDosc.cpp
        message/CfgDoscPoll.cpp
        message/CfgEkf.cpp
        message/CfgEkfPoll.cpp
        message/CfgEsrc.cpp
        message/CfgEsrcPoll.cpp
        message/CfgFixseed.cpp
        message/CfgFxn.cpp
        message/CfgFxnPoll.cpp
        message/CfgGeofence.cpp
        message/CfgGeofencePoll.cpp
        message/CfgGnss.cpp
        message/CfgGnssPoll.cpp
        message/CfgHnr.cpp
        message/CfgHnrPoll.cpp
        message/CfgInf.cpp
        message/CfgInfPoll.cpp
        message/CfgItfm.cpp
        message/CfgItfmPoll.cpp
        message/CfgLogfilter.cpp
        message/CfgLogfilterPoll.cpp
        message/CfgMsg.cpp
        message/CfgMsgCurrent.cpp
        message/CfgMsgPoll.cpp
        message/CfgNav5.cpp
        message/CfgNav5Poll.cpp
        message/CfgNavx5.cpp
        message/CfgNavx5Poll.cpp
        message/CfgNavx5V2.cpp
        message/CfgNavx5V3.cpp
        message/CfgNmea.cpp
        message/CfgNmeaPoll.cpp
        message/CfgNmeaV0.cpp
        message/CfgNmeaV1.cpp
        message/CfgNvs.cpp
        message/CfgOdo.cpp
        message/CfgOdoPoll.cpp
        message/CfgPm.cpp
        message/CfgPm2.cpp
        message/CfgPm2Poll.cpp
        message/CfgPm2V2.cpp
        message/CfgPmPoll.cpp
        message/CfgPms.cpp
        message/CfgPmsPoll.cpp
        message/CfgPrtDdc.cpp
        message/CfgPrtPoll.cpp
        message/CfgPrtPortPoll.cpp
        message/CfgPrtSpi.cpp
        message/CfgPrtUart.cpp
        message/CfgPrtUsb.cpp
        message/CfgPwr.cpp
        message/CfgRate.cpp
        message/CfgRatePoll.cpp
        message/CfgRinv.cpp
        message/CfgRinvPoll.cpp
        message/CfgRst.cpp
        message/CfgRxm.cpp
        message/CfgRxmPoll.cpp
        message/CfgSbas.cpp
        message/CfgSbasPoll.cpp
        message/CfgSmgr.cpp
        message/CfgSmgrPoll.cpp
        message/CfgTmode.cpp
        message/CfgTmode2.cpp
        message/CfgTmode2Poll.cpp
        message/CfgTmode3.cpp
        message/CfgTmode3Poll.cpp
        message/CfgTmodePoll.cpp
        message/CfgTp.cpp
        message/CfgTp5.cpp
        message/CfgTp5Poll.cpp
        message/CfgTp5PollSelect.cpp
        message/CfgTpPoll.cpp
        message/CfgTxslot.cpp
        message/CfgUsb.cpp
        message/CfgUsbPoll.cpp
        message/EsfIns.cpp
        message/EsfInsPoll.cpp
        message/EsfMeas.cpp
        message/EsfMeasPoll.cpp
        message/EsfRaw.cpp
        message/EsfStatus.cpp
        message/EsfStatusPoll.cpp
        message/HnrPvt.cpp
        message/HnrPvtPoll.cpp
        message/InfDebug.cpp
        message/InfError.cpp
        message/InfNotice.cpp
        message/InfTest.cpp
        message/InfWarning.cpp
        message/LogCreate.cpp
        message/LogErase.cpp
        message/LogFindtime.cpp
        message/LogFindtimeResp.cpp
        message/LogInfo.cpp
        message/LogInfoPoll.cpp
        message/LogRetrieve.cpp
        message/LogRetrievepos.cpp
        message/LogRetrieveposextra.cpp
        message/LogRetrievestring.cpp
        message/LogString.cpp
        message/MgaAck.cpp
        message/MgaAno.cpp
        message/MgaBdsAlm.cpp
        message/MgaBdsEph.cpp
        message/MgaBdsHealth.cpp
        message/MgaBdsIono.cpp
        message/MgaBdsUtc.cpp
        message/MgaDbd.cpp
        message/MgaDbdPoll.cpp
        message/MgaFlashAck.cpp
        message/MgaFlashEph.cpp
        message/MgaFlashStop.cpp
        message/MgaGalAlm.cpp
        message/MgaGalEph.cpp
        message/MgaGalTimeoffset.cpp
        message/MgaGalUtc.cpp
        message/MgaGloAlm.cpp
        message/MgaGloEph.cpp
        message/MgaGloTimeoffset.cpp
        message/MgaGpsAlm.cpp
        message/MgaGpsEph.cpp
        message/MgaGpsHealth.cpp
        message/MgaGpsIono.cpp
        message/MgaGpsUtc.cpp
        message/MgaIniClkd.cpp
        message/MgaIniEop.cpp
        message/MgaIniFreq.cpp
        message/MgaIniPosLlh.cpp
        message/MgaIniPosXyz.cpp
        message/MgaIniTimeGnss.cpp
        message/MgaIniTimeUtc.cpp
        message/MgaQzssAlm.cpp
        message/MgaQzssEph.cpp
        message/MgaQzssHealth.cpp
        message/MonGnss.cpp
        message/MonGnssPoll.cpp
        message/MonHw.cpp
        message/MonHw2.cpp
        message/MonHw2Poll.cpp
        message/MonHwPoll.cpp
        message/MonIo.cpp
        message/MonIoPoll.cpp
        message/MonMsgpp.cpp
        message/MonMsgppPoll.cpp
        message/MonPatch.cpp
        message/MonPatchPoll.cpp
        message/MonRxbuf.cpp
        message/MonRxbufPoll.cpp
        message/MonRxr.cpp
        message/MonSmgr.cpp
        message/MonSmgrPoll.cpp
        message/MonTxbuf.cpp
        message/MonTxbufPoll.cpp
        message/MonVer.cpp
        message/MonVerPoll.cpp
        message/NavAopstatus.cpp
        message/NavAopstatusPoll.cpp
        message/NavAopstatusUblox8.cpp
        message/NavAtt.cpp
        message/NavAttPoll.cpp
        message/NavClock.cpp
        message/NavClockPoll.cpp
        message/NavDgps.cpp
        message/NavDgpsPoll.cpp
        message/NavDop.cpp
        message/NavDopPoll.cpp
        message/NavEoe.cpp
        message/NavGeofence.cpp
        message/NavGeofencePoll.cpp
        message/NavHpposecef.cpp
        message/NavHpposecefPoll.cpp
        message/NavHpposllh.cpp
        message/NavHpposllhPoll.cpp
        message/NavOdo.cpp
        message/NavOdoPoll.cpp
        message/NavOrb.cpp
        message/NavOrbPoll.cpp
        message/NavPosecef.cpp
        message/NavPosecefPoll.cpp
        message/NavPosllh.cpp
        message/NavPosllhPoll.cpp
        message/NavPvt.cpp
        message/NavPvtPoll.cpp
        message/NavPvt_u8.cpp
        message/NavRelposned.cpp
        message/NavRelposnedPoll.cpp
        message/NavResetodo.cpp
        message/NavSat.cpp
        message/NavSatPoll.cpp
        message/NavSbas.cpp
        message/NavSbasPoll.cpp
        message/NavSol.cpp
        message/NavSolPoll.cpp
        message/NavStatus.cpp
        message/NavStatusPoll.cpp
        message/NavSvin.cpp
        message/NavSvinPoll.cpp
        message/NavSvinfo.cpp
        message/NavSvinfoPoll.cpp
        message/NavTimebds.cpp
        message/NavTimebdsPoll.cpp
        message/NavTimegal.cpp
        message/NavTimegalPoll.cpp
        message/NavTimeglo.cpp
        message/NavTimegloPoll.cpp
        message/NavTimegps.cpp
        message/NavTimegpsPoll.cpp
        message/NavTimels.cpp
        message/NavTimelsPoll.cpp
        message/NavTimeutc.cpp
        message/NavTimeutcPoll.cpp
        message/NavVelecef.cpp
        message/NavVelecefPoll.cpp
        message/NavVelned.cpp
        message/NavVelnedPoll.cpp
        message/RxmAlm.cpp
        message/RxmAlmPoll.cpp
        message/RxmAlmPollSv.cpp
        message/RxmEph.cpp
        message/RxmEphPoll.cpp
        message/RxmEphPollSv.cpp
        message/RxmImes.cpp
        message/RxmImesPoll.cpp
        message/RxmMeasx.cpp
        message/RxmPmreq.cpp
        message/RxmPmreqV0.cpp
        message/RxmRaw.cpp
        message/RxmRawPoll.cpp
        message/RxmRawx.cpp
        message/RxmRawxPoll.cpp
        message/RxmRlmLong.cpp
        message/RxmRlmShort.cpp
        message/RxmRtcm.cpp
        message/RxmSfrb.cpp
        message/RxmSfrbx.cpp
        message/RxmSvsi.cpp
        message/RxmSvsiPoll.cpp
        message/SecSign.cpp
        message/SecUniqid.cpp
        message/TimDosc.cpp
        message/TimFchg.cpp
        message/TimFchgPoll.cpp
        message/TimSmeas.cpp
        message/TimSvin.cpp
        message/TimSvinPoll.cpp
        message/TimTm2.cpp
        message/TimTm2Poll.cpp
        message/TimTos.cpp
        message/TimTp.cpp
        message/TimTpPoll.cpp
        message/TimVcocal.cpp
        message/TimVcocalExt.cpp
        message/TimVcocalPoll.cpp
        message/TimVcocalStop.cpp
        message/TimVrfy.cpp
        message/TimVrfyPoll.cpp
        message/UpdSosAck.cpp
        message/UpdSosClear.cpp
        message/UpdSosCreate.cpp
        message/UpdSosPoll.cpp
        message/UpdSosRestored.cpp
        frame/UbloxFrameTransportMessage.cpp
    )

    add_library (${name} STATIC ${src})
    target_link_libraries (${name} PUBLIC ublox cc::comms cc::comms_champion Qt5::Widgets Qt5::Core)
    target_include_directories (${name} PUBLIC ${PROJECT_SOURCE_DIR})
    if (CC_COMMS_CHAMPION_FOUND)
        if (CC_PLUGIN_DIR)
            file (RELATIVE_PATH rel_plugin_install_path "${CC_ROOT_DIR}" "${CC_PLUGIN_DIR}")
            set (PLUGIN_INSTALL_DIR "${rel_plugin_install_path}")
        endif()
    endif ()

    if (TARGET ${CC_EXTERNAL_TGT})
        add_dependencies(${name} ${CC_EXTERNAL_TGT})
    endif ()
endfunction()

######################################################################

function (cc_plugin protocol has_config_widget)
    set (name "cc_plugin_${protocol}")

    set (meta_file "${CMAKE_CURRENT_SOURCE_DIR}/${protocol}.json")
    set (stamp_file "${CMAKE_CURRENT_BINARY_DIR}/${protocol}_refresh_stamp.txt")

    if ((NOT EXISTS ${stamp_file}) OR (${meta_file} IS_NEWER_THAN ${stamp_file}))
        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_SOURCE_DIR}/plugin/${protocol}Plugin.h)

        execute_process(
            COMMAND ${CMAKE_COMMAND} -E touch ${stamp_file})
    endif ()

    set (src
        plugin/${protocol}Protocol.cpp
        plugin/${protocol}Plugin.cpp
    )

    set (hdr
        plugin/${protocol}Plugin.h
    )

    if (has_config_widget)
        list (APPEND src plugin/${protocol}ConfigWidget.cpp)
        list (APPEND hdr plugin/${protocol}ConfigWidget.h)
    endif ()

    qt5_wrap_cpp(moc ${hdr})

    set(extra_link_opts)
    if (CMAKE_COMPILER_IS_GNUCC)
        set(extra_link_opts "-Wl,--no-undefined")
    endif ()

    add_library (${name} MODULE ${src} ${moc})
    target_link_libraries (${name} ${ALL_MESSAGES_LIB} cc::comms_champion Qt5::Widgets Qt5::Core ${extra_link_opts})
    if (CMAKE_COMPILER_IS_GNUCC)
        target_compile_options(${name} PRIVATE "-ftemplate-backtrace-limit=0")
    endif ()

    install (
        TARGETS ${name}
        DESTINATION ${PLUGIN_INSTALL_DIR})

    install (
        FILES plugin/${protocol}.cfg
        DESTINATION ${CONFIG_INSTALL_DIR})

endfunction()

######################################################################

if (NOT Qt5Core_FOUND)
    message (WARNING "Can NOT compile protocol plugin due to missing QT5 Core library")
    return ()
endif ()

if (NOT Qt5Widgets_FOUND)
    message (WARNING "Can NOT compile protocol plugin due to missing QT5 Widgets library")
    return ()
endif ()

if (CMAKE_COMPILER_IS_GNUCC)
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ftemplate-backtrace-limit=0")
endif ()

if (CC_COMMS_CHAMPION_FOUND)
    include_directories (${CC_INCLUDE_DIRS})
endif ()

cc_plugin_all_messages()

cc_plugin ("Ublox" FALSE)

if (TARGET ${CC_EXTERNAL_TGT})
    install (
        FILES plugin/Ublox.cfg
        DESTINATION ${CONFIG_INSTALL_DIR}
        RENAME "default.cfg")
endif()


# For some reason message/AidHui.cpp fails to compile in Release mode with g++-4.8
if ((CMAKE_COMPILER_IS_GNUCC) AND 
    (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.9) AND 
    ("${CMAKE_BUILD_TYPE}" STREQUAL "Release"))
    set_source_files_properties (message/AidHui.cpp PROPERTIES COMPILE_FLAGS "-O2")
endif ()


