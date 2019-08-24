/// @file
/// @brief Contains definition of protocol default options.

#pragma once

#include "comms/options.h"

namespace ublox
{

namespace options
{

/// @brief Default (empty) options of the protocol.
struct DefaultOptions
{
    /// @brief Extra options for messages.
    struct message
    {
        /// @brief Extra options for
        ///     @ref ublox::message::AckAck message.
        using AckAck = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AckNak message.
        using AckNak = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAlm message.
        struct AidAlmFields
        {
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::AidAlmFields::Dwrd optional.
            struct DwrdMembers
            {
                /// @brief Extra options for @ref
                ///     ublox::message::AidAlmFields::DwrdMembers::List
                ///     field.
                using List = comms::option::app::EmptyOption;
                
            };
            
        }; // struct AidAlmFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlm message.
        using AidAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlmPoll message.
        using AidAlmPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlmPollSv message.
        using AidAlmPollSv = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlp message.
        using AidAlp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAlpData message.
        struct AidAlpDataFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::AidAlpDataFields::AlpData
            ///     field.
            using AlpData = comms::option::app::EmptyOption;
            
        }; // struct AidAlpDataFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlpData message.
        using AidAlpData = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAlpsrv message.
        struct AidAlpsrvFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::AidAlpsrvFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct AidAlpsrvFields
        
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAlpsrvToServer message.
        struct AidAlpsrvToServerFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::AidAlpsrvToServerFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct AidAlpsrvToServerFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAlpsrvToServer message.
        using AidAlpsrvToServer = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAop message.
        struct AidAopFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::AidAopFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::AidAopFields::Optionals optional.
            struct OptionalsMembers
            {
                /// @brief Extra options for all the member fields of
                ///     @ref ublox::message::AidAopFields::OptionalsMembers::OptionalsWrap bundle.
                struct OptionalsWrapMembers
                {
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional0
                    ///     field.
                    using Optional0 = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional1
                    ///     field.
                    using Optional1 = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidAopFields::OptionalsMembers::OptionalsWrapMembers::Optional2
                    ///     field.
                    using Optional2 = comms::option::app::EmptyOption;
                    
                };
                
            };
            
        }; // struct AidAopFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAopPoll message.
        using AidAopPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidAopPollSv message.
        using AidAopPollSv = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidAopU8 message.
        struct AidAopU8Fields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::AidAopU8Fields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct AidAopU8Fields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidData message.
        using AidData = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::AidEph message.
        struct AidEphFields
        {
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::AidEphFields::Sfd optional.
            struct SfdMembers
            {
                /// @brief Extra options for all the member fields of
                ///     @ref ublox::message::AidEphFields::SfdMembers::Lists bundle.
                struct ListsMembers
                {
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf1d
                    ///     field.
                    using Sf1d = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf2d
                    ///     field.
                    using Sf2d = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::AidEphFields::SfdMembers::ListsMembers::Sf3d
                    ///     field.
                    using Sf3d = comms::option::app::EmptyOption;
                    
                };
                
            };
            
        }; // struct AidEphFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidEph message.
        using AidEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidEphPoll message.
        using AidEphPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidEphPollSv message.
        using AidEphPollSv = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidHuiPoll message.
        using AidHuiPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidIniPoll message.
        using AidIniPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::AidReq message.
        using AidReq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgAntPoll message.
        using CfgAntPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgCfg message.
        using CfgCfg = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgDat message.
        struct CfgDatFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgDatFields::DatumName
            ///     field.
            using DatumName = comms::option::app::EmptyOption;
            
        }; // struct CfgDatFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDat message.
        using CfgDat = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDatPoll message.
        using CfgDatPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDatStandard message.
        using CfgDatStandard = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDatUser message.
        using CfgDatUser = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDgnssPoll message.
        using CfgDgnssPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgDosc message.
        struct CfgDoscFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgDoscFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct CfgDoscFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgDoscPoll message.
        using CfgDoscPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgEkfPoll message.
        using CfgEkfPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgEsrc message.
        struct CfgEsrcFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgEsrcFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct CfgEsrcFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgEsrcPoll message.
        using CfgEsrcPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgFixseed message.
        struct CfgFixseedFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgFixseedFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct CfgFixseedFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgFixseed message.
        using CfgFixseed = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgFxnPoll message.
        using CfgFxnPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgGeofence message.
        struct CfgGeofenceFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgGeofenceFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct CfgGeofenceFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgGeofencePoll message.
        using CfgGeofencePoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgGnss message.
        struct CfgGnssFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgGnssFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct CfgGnssFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgGnssPoll message.
        using CfgGnssPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgHnrPoll message.
        using CfgHnrPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgInf message.
        struct CfgInfFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgInfFields::InfMsgMask
            ///     field.
            using InfMsgMask = comms::option::app::EmptyOption;
            
        }; // struct CfgInfFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgInfPoll message.
        using CfgInfPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgItfmPoll message.
        using CfgItfmPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgLogfilterPoll message.
        using CfgLogfilterPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgMsg message.
        struct CfgMsgFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgMsgFields::Rates
            ///     field.
            using Rates = comms::option::app::EmptyOption;
            
        }; // struct CfgMsgFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgMsgPoll message.
        using CfgMsgPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgNav5Poll message.
        using CfgNav5Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgNavx5Poll message.
        using CfgNavx5Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgNmeaPoll message.
        using CfgNmeaPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgNmeaV1 message.
        struct CfgNmeaV1Fields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgNmeaV1Fields::BdsTalkerId
            ///     field.
            using BdsTalkerId = comms::option::app::EmptyOption;
            
        }; // struct CfgNmeaV1Fields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgNvs message.
        using CfgNvs = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgOdoPoll message.
        using CfgOdoPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgPm2 message.
        struct CfgPm2Fields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgPm2Fields::Reserved3
            ///     field.
            using Reserved3 = comms::option::app::EmptyOption;
            
        }; // struct CfgPm2Fields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPm2Poll message.
        using CfgPm2Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgPm2V2 message.
        struct CfgPm2V2Fields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgPm2V2Fields::Reserved3
            ///     field.
            using Reserved3 = comms::option::app::EmptyOption;
            
        }; // struct CfgPm2V2Fields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPmPoll message.
        using CfgPmPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPmsPoll message.
        using CfgPmsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPrtPoll message.
        using CfgPrtPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPrtPortPoll message.
        using CfgPrtPortPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgPwr message.
        using CfgPwr = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgRatePoll message.
        using CfgRatePoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgRinv message.
        struct CfgRinvFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgRinvFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct CfgRinvFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgRinvPoll message.
        using CfgRinvPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgRst message.
        using CfgRst = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgRxmPoll message.
        using CfgRxmPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgSbasPoll message.
        using CfgSbasPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgSmgrPoll message.
        using CfgSmgrPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTmode2Poll message.
        using CfgTmode2Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTmode3Poll message.
        using CfgTmode3Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTmodePoll message.
        using CfgTmodePoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTp5Poll message.
        using CfgTp5Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTp5PollSelect message.
        using CfgTp5PollSelect = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTpPoll message.
        using CfgTpPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgTxslot message.
        struct CfgTxslotFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgTxslotFields::End
            ///     field.
            using End = comms::option::app::EmptyOption;
            
        }; // struct CfgTxslotFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgTxslot message.
        using CfgTxslot = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::CfgUsb message.
        struct CfgUsbFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::CfgUsbFields::VendorString
            ///     field.
            using VendorString = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::CfgUsbFields::ProductString
            ///     field.
            using ProductString = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::CfgUsbFields::SerialNumber
            ///     field.
            using SerialNumber = comms::option::app::EmptyOption;
            
        }; // struct CfgUsbFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::CfgUsbPoll message.
        using CfgUsbPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfIns message.
        using EsfIns = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfInsPoll message.
        using EsfInsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::EsfMeas message.
        struct EsfMeasFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::EsfMeasFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct EsfMeasFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfMeasPoll message.
        using EsfMeasPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::EsfRaw message.
        struct EsfRawFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::EsfRawFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct EsfRawFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfRaw message.
        using EsfRaw = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::EsfStatus message.
        struct EsfStatusFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::EsfStatusFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct EsfStatusFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfStatus message.
        using EsfStatus = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::EsfStatusPoll message.
        using EsfStatusPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::HnrPvt message.
        using HnrPvt = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::HnrPvtPoll message.
        using HnrPvtPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::InfDebug message.
        struct InfDebugFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::InfDebugFields::Str
            ///     field.
            using Str = comms::option::app::EmptyOption;
            
        }; // struct InfDebugFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::InfDebug message.
        using InfDebug = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::InfError message.
        struct InfErrorFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::InfErrorFields::Str
            ///     field.
            using Str = comms::option::app::EmptyOption;
            
        }; // struct InfErrorFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::InfError message.
        using InfError = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::InfNotice message.
        struct InfNoticeFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::InfNoticeFields::Str
            ///     field.
            using Str = comms::option::app::EmptyOption;
            
        }; // struct InfNoticeFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::InfNotice message.
        using InfNotice = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::InfTest message.
        struct InfTestFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::InfTestFields::Str
            ///     field.
            using Str = comms::option::app::EmptyOption;
            
        }; // struct InfTestFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::InfTest message.
        using InfTest = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::InfWarning message.
        struct InfWarningFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::InfWarningFields::Str
            ///     field.
            using Str = comms::option::app::EmptyOption;
            
        }; // struct InfWarningFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::InfWarning message.
        using InfWarning = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogCreate message.
        using LogCreate = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogErase message.
        using LogErase = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogFindtime message.
        using LogFindtime = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogFindtimeResp message.
        using LogFindtimeResp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogInfo message.
        using LogInfo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogInfoPoll message.
        using LogInfoPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogRetrieve message.
        using LogRetrieve = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogRetrievepos message.
        using LogRetrievepos = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::LogRetrieveposextra message.
        struct LogRetrieveposextraFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::LogRetrieveposextraFields::Reserved3
            ///     field.
            using Reserved3 = comms::option::app::EmptyOption;
            
        }; // struct LogRetrieveposextraFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogRetrieveposextra message.
        using LogRetrieveposextra = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::LogRetrievestring message.
        struct LogRetrievestringFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::LogRetrievestringFields::Bytes
            ///     field.
            using Bytes = comms::option::app::EmptyOption;
            
        }; // struct LogRetrievestringFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogRetrievestring message.
        using LogRetrievestring = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::LogString message.
        struct LogStringFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::LogStringFields::Bytes
            ///     field.
            using Bytes = comms::option::app::EmptyOption;
            
        }; // struct LogStringFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::LogString message.
        using LogString = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaAck message.
        struct MgaAckFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaAckFields::MsgPayloadStart
            ///     field.
            using MsgPayloadStart = comms::option::app::EmptyOption;
            
        }; // struct MgaAckFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaAck message.
        using MgaAck = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaAno message.
        struct MgaAnoFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaAnoFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct MgaAnoFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaAno message.
        using MgaAno = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaBdsAlm message.
        using MgaBdsAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaBdsEph message.
        using MgaBdsEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaBdsHealth message.
        struct MgaBdsHealthFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaBdsHealthFields::HealthCode
            ///     field.
            using HealthCode = comms::option::app::EmptyOption;
            
        }; // struct MgaBdsHealthFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaBdsHealth message.
        using MgaBdsHealth = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaBdsIono message.
        using MgaBdsIono = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaBdsUtc message.
        using MgaBdsUtc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaDbd message.
        struct MgaDbdFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaDbdFields::Reserved1
            ///     field.
            using Reserved1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MgaDbdFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct MgaDbdFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaDbdPoll message.
        using MgaDbdPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaFlashAck message.
        using MgaFlashAck = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaFlashEph message.
        struct MgaFlashEphFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaFlashEphFields::Data
            ///     field.
            using Data = comms::option::app::EmptyOption;
            
        }; // struct MgaFlashEphFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaFlashEph message.
        using MgaFlashEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaFlashStop message.
        using MgaFlashStop = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGalAlm message.
        using MgaGalAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGalEph message.
        using MgaGalEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGalTimeoffset message.
        using MgaGalTimeoffset = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGalUtc message.
        using MgaGalUtc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGloAlm message.
        using MgaGloAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGloEph message.
        using MgaGloEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGloTimeoffset message.
        using MgaGloTimeoffset = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGpsAlm message.
        using MgaGpsAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGpsEph message.
        using MgaGpsEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaGpsHealth message.
        struct MgaGpsHealthFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaGpsHealthFields::HealthCode
            ///     field.
            using HealthCode = comms::option::app::EmptyOption;
            
        }; // struct MgaGpsHealthFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGpsHealth message.
        using MgaGpsHealth = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGpsIono message.
        using MgaGpsIono = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaGpsUtc message.
        using MgaGpsUtc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniClkd message.
        using MgaIniClkd = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaIniEop message.
        struct MgaIniEopFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaIniEopFields::Reserved2
            ///     field.
            using Reserved2 = comms::option::app::EmptyOption;
            
        }; // struct MgaIniEopFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniEop message.
        using MgaIniEop = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniFreq message.
        using MgaIniFreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniPosLlh message.
        using MgaIniPosLlh = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniPosXyz message.
        using MgaIniPosXyz = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniTimeGnss message.
        using MgaIniTimeGnss = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaIniTimeUtc message.
        using MgaIniTimeUtc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaQzssAlm message.
        using MgaQzssAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaQzssEph message.
        using MgaQzssEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MgaQzssHealth message.
        struct MgaQzssHealthFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MgaQzssHealthFields::HealthCode
            ///     field.
            using HealthCode = comms::option::app::EmptyOption;
            
        }; // struct MgaQzssHealthFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MgaQzssHealth message.
        using MgaQzssHealth = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonGnss message.
        using MonGnss = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonGnssPoll message.
        using MonGnssPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonHw message.
        struct MonHwFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonHwFields::VP field.
            using VP = comms::option::app::EmptyOption;
            
        }; // struct MonHwFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonHw message.
        using MonHw = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonHw2 message.
        using MonHw2 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonHw2Poll message.
        using MonHw2Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonHwPoll message.
        using MonHwPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonIo message.
        struct MonIoFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonIoFields::List field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct MonIoFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonIo message.
        using MonIo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonIoPoll message.
        using MonIoPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonMsgpp message.
        struct MonMsgppFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg1
            ///     field.
            using Msg1 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg2
            ///     field.
            using Msg2 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg3
            ///     field.
            using Msg3 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg4
            ///     field.
            using Msg4 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg5
            ///     field.
            using Msg5 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Msg6
            ///     field.
            using Msg6 = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonMsgppFields::Skipped
            ///     field.
            using Skipped = comms::option::app::EmptyOption;
            
        }; // struct MonMsgppFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonMsgpp message.
        using MonMsgpp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonMsgppPoll message.
        using MonMsgppPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonPatch message.
        struct MonPatchFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonPatchFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct MonPatchFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonPatch message.
        using MonPatch = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonPatchPoll message.
        using MonPatchPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonRxbuf message.
        struct MonRxbufFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonRxbufFields::Pending
            ///     field.
            using Pending = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonRxbufFields::Usage
            ///     field.
            using Usage = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonRxbufFields::PeakUsage
            ///     field.
            using PeakUsage = comms::option::app::EmptyOption;
            
        }; // struct MonRxbufFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonRxbuf message.
        using MonRxbuf = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonRxbufPoll message.
        using MonRxbufPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonRxr message.
        using MonRxr = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonSmgr message.
        using MonSmgr = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonSmgrPoll message.
        using MonSmgrPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonTxbuf message.
        struct MonTxbufFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonTxbufFields::Pending
            ///     field.
            using Pending = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonTxbufFields::Usage
            ///     field.
            using Usage = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonTxbufFields::PeakUsage
            ///     field.
            using PeakUsage = comms::option::app::EmptyOption;
            
        }; // struct MonTxbufFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonTxbuf message.
        using MonTxbuf = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonTxbufPoll message.
        using MonTxbufPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::MonVer message.
        struct MonVerFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::MonVerFields::SwVersion
            ///     field.
            using SwVersion = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonVerFields::HwVersion
            ///     field.
            using HwVersion = comms::option::app::EmptyOption;
            
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::MonVerFields::List list.
            struct ListMembers
            {
                /// @brief Extra options for @ref
                ///     ublox::message::MonVerFields::ListMembers::Extension
                ///     field.
                using Extension = comms::option::app::EmptyOption;
                
            };
            
            /// @brief Extra options for @ref
            ///     ublox::message::MonVerFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct MonVerFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonVer message.
        using MonVer = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::MonVerPoll message.
        using MonVerPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavAopstatus message.
        using NavAopstatus = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavAopstatusPoll message.
        using NavAopstatusPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavAopstatusUblox8 message.
        using NavAopstatusUblox8 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavAttPoll message.
        using NavAttPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavClock message.
        using NavClock = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavClockPoll message.
        using NavClockPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavDgps message.
        struct NavDgpsFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavDgpsFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavDgpsFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavDgps message.
        using NavDgps = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavDgpsPoll message.
        using NavDgpsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavDop message.
        using NavDop = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavDopPoll message.
        using NavDopPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavEoe message.
        using NavEoe = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavGeofence message.
        struct NavGeofenceFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavGeofenceFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavGeofenceFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavGeofence message.
        using NavGeofence = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavGeofencePoll message.
        using NavGeofencePoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavHpposecef message.
        using NavHpposecef = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavHpposecefPoll message.
        using NavHpposecefPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavHpposllh message.
        using NavHpposllh = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavHpposllhPoll message.
        using NavHpposllhPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavOdo message.
        using NavOdo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavOdoPoll message.
        using NavOdoPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavOrb message.
        struct NavOrbFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavOrbFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavOrbFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavOrb message.
        using NavOrb = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavOrbPoll message.
        using NavOrbPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPosecef message.
        using NavPosecef = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPosecefPoll message.
        using NavPosecefPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPosllh message.
        using NavPosllh = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPosllhPoll message.
        using NavPosllhPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPvt message.
        using NavPvt = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPvtPoll message.
        using NavPvtPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavPvt_u8 message.
        using NavPvt_u8 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavRelposned message.
        using NavRelposned = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavRelposnedPoll message.
        using NavRelposnedPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavResetodo message.
        using NavResetodo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavSat message.
        struct NavSatFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavSatFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavSatFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSat message.
        using NavSat = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSatPoll message.
        using NavSatPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavSbas message.
        struct NavSbasFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavSbasFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavSbasFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSbas message.
        using NavSbas = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSbasPoll message.
        using NavSbasPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSol message.
        using NavSol = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSolPoll message.
        using NavSolPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavStatus message.
        using NavStatus = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavStatusPoll message.
        using NavStatusPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSvin message.
        using NavSvin = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSvinPoll message.
        using NavSvinPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::NavSvinfo message.
        struct NavSvinfoFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::NavSvinfoFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct NavSvinfoFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSvinfo message.
        using NavSvinfo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavSvinfoPoll message.
        using NavSvinfoPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimebds message.
        using NavTimebds = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimebdsPoll message.
        using NavTimebdsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimegal message.
        using NavTimegal = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimegalPoll message.
        using NavTimegalPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimeglo message.
        using NavTimeglo = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimegloPoll message.
        using NavTimegloPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimegps message.
        using NavTimegps = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimegpsPoll message.
        using NavTimegpsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimels message.
        using NavTimels = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimelsPoll message.
        using NavTimelsPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimeutc message.
        using NavTimeutc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavTimeutcPoll message.
        using NavTimeutcPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavVelecef message.
        using NavVelecef = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavVelecefPoll message.
        using NavVelecefPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavVelned message.
        using NavVelned = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::NavVelnedPoll message.
        using NavVelnedPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmAlm message.
        struct RxmAlmFields
        {
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::RxmAlmFields::Dwrd optional.
            struct DwrdMembers
            {
                /// @brief Extra options for @ref
                ///     ublox::message::RxmAlmFields::DwrdMembers::List
                ///     field.
                using List = comms::option::app::EmptyOption;
                
            };
            
        }; // struct RxmAlmFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmAlm message.
        using RxmAlm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmAlmPoll message.
        using RxmAlmPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmAlmPollSv message.
        using RxmAlmPollSv = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmEph message.
        struct RxmEphFields
        {
            /// @brief Extra options for all the member fields of
            ///     @ref ublox::message::RxmEphFields::Sfd optional.
            struct SfdMembers
            {
                /// @brief Extra options for all the member fields of
                ///     @ref ublox::message::RxmEphFields::SfdMembers::Lists bundle.
                struct ListsMembers
                {
                    /// @brief Extra options for @ref
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf1d
                    ///     field.
                    using Sf1d = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf2d
                    ///     field.
                    using Sf2d = comms::option::app::EmptyOption;
                    
                    /// @brief Extra options for @ref
                    ///     ublox::message::RxmEphFields::SfdMembers::ListsMembers::Sf3d
                    ///     field.
                    using Sf3d = comms::option::app::EmptyOption;
                    
                };
                
            };
            
        }; // struct RxmEphFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmEph message.
        using RxmEph = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmEphPoll message.
        using RxmEphPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmEphPollSv message.
        using RxmEphPollSv = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmImes message.
        struct RxmImesFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmImesFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct RxmImesFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmImes message.
        using RxmImes = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmImesPoll message.
        using RxmImesPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmMeasx message.
        struct RxmMeasxFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmMeasxFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct RxmMeasxFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmMeasx message.
        using RxmMeasx = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmPmreq message.
        using RxmPmreq = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmPmreqV0 message.
        using RxmPmreqV0 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmRaw message.
        struct RxmRawFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRawFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct RxmRawFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRaw message.
        using RxmRaw = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRawPoll message.
        using RxmRawPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmRawx message.
        struct RxmRawxFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRawxFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct RxmRawxFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRawx message.
        using RxmRawx = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRawxPoll message.
        using RxmRawxPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmRlmLong message.
        struct RxmRlmLongFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRlmLongFields::Beacon
            ///     field.
            using Beacon = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRlmLongFields::Params
            ///     field.
            using Params = comms::option::app::EmptyOption;
            
        }; // struct RxmRlmLongFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRlmLong message.
        using RxmRlmLong = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmRlmShort message.
        struct RxmRlmShortFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRlmShortFields::Beacon
            ///     field.
            using Beacon = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::message::RxmRlmShortFields::Params
            ///     field.
            using Params = comms::option::app::EmptyOption;
            
        }; // struct RxmRlmShortFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRlmShort message.
        using RxmRlmShort = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmRtcm message.
        using RxmRtcm = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmSfrb message.
        struct RxmSfrbFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmSfrbFields::Dwrd
            ///     field.
            using Dwrd = comms::option::app::EmptyOption;
            
        }; // struct RxmSfrbFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmSfrb message.
        using RxmSfrb = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmSfrbx message.
        struct RxmSfrbxFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmSfrbxFields::Dwrd
            ///     field.
            using Dwrd = comms::option::app::EmptyOption;
            
        }; // struct RxmSfrbxFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmSfrbx message.
        using RxmSfrbx = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::RxmSvsi message.
        struct RxmSvsiFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::RxmSvsiFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct RxmSvsiFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmSvsi message.
        using RxmSvsi = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::RxmSvsiPoll message.
        using RxmSvsiPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::SecSign message.
        struct SecSignFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::SecSignFields::Hash
            ///     field.
            using Hash = comms::option::app::EmptyOption;
            
        }; // struct SecSignFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::SecSign message.
        using SecSign = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::SecUniqid message.
        struct SecUniqidFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::SecUniqidFields::UniqueId
            ///     field.
            using UniqueId = comms::option::app::EmptyOption;
            
        }; // struct SecUniqidFields
        
        /// @brief Extra options for
        ///     @ref ublox::message::SecUniqid message.
        using SecUniqid = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimDosc message.
        using TimDosc = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimFchg message.
        using TimFchg = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimFchgPoll message.
        using TimFchgPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for fields of
        ///     @ref ublox::message::TimSmeas message.
        struct TimSmeasFields
        {
            /// @brief Extra options for @ref
            ///     ublox::message::TimSmeasFields::List
            ///     field.
            using List = comms::option::app::EmptyOption;
            
        }; // struct TimSmeasFields
        
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimSvin message.
        using TimSvin = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimSvinPoll message.
        using TimSvinPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimTm2 message.
        using TimTm2 = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimTm2Poll message.
        using TimTm2Poll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimTos message.
        using TimTos = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimTp message.
        using TimTp = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimTpPoll message.
        using TimTpPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVcocal message.
        using TimVcocal = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVcocalExt message.
        using TimVcocalExt = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVcocalPoll message.
        using TimVcocalPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVcocalStop message.
        using TimVcocalStop = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVrfy message.
        using TimVrfy = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::TimVrfyPoll message.
        using TimVrfyPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::UpdSosAck message.
        using UpdSosAck = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::UpdSosClear message.
        using UpdSosClear = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::UpdSosCreate message.
        using UpdSosCreate = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::UpdSosPoll message.
        using UpdSosPoll = comms::option::app::EmptyOption;
        
        /// @brief Extra options for
        ///     @ref ublox::message::UpdSosRestored message.
        using UpdSosRestored = comms::option::app::EmptyOption;
        
    }; // struct message
    
    /// @brief Extra options for frames.
    struct frame
    {
        /// @brief Extra options for Layers of
        ///     @ref ublox::frame::UbloxFrame frame.
        struct UbloxFrameLayers
        {
            /// @brief Extra options for @ref
            ///     ublox::frame::UbloxFrameLayers::Payload
            ///     layer.
            using Payload = comms::option::app::EmptyOption;
            
            /// @brief Extra options for @ref
            ///     ublox::frame::UbloxFrameLayers::Id
            ///     layer.
            using Id = comms::option::app::EmptyOption;
            
        }; // struct UbloxFrameLayers
        
    }; // struct frame
    
    
};

} // namespace options

} // namespace ublox


