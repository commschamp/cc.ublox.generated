/// @file
/// @brief Contains definition of <b>"CFG-NMEA (V0)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/CfgMainTalkerId.h"
#include "ublox/field/CfgNmeaFilter.h"
#include "ublox/field/CfgNmeaFlags.h"
#include "ublox/field/CfgNmeaGnssToFilter.h"
#include "ublox/field/CfgNmeaGsvTalkerId.h"
#include "ublox/field/CfgNmeaNumSV.h"
#include "ublox/field/CfgNmeaSvNumbering.h"
#include "ublox/field/CfgNmeaVersion.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNmeaV0.
/// @tparam TOpt Extra options
/// @see @ref CfgNmeaV0
/// @headerfile "ublox/message/CfgNmeaV0.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNmeaV0Fields
{
    /// @brief Definition of <b>"filter"</b> field.
    struct Filter : public
        ublox::field::CfgNmeaFilter<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "filter";
        }
        
    };
    
    /// @brief Definition of <b>"nmeaVersion"</b> field.
    struct NmeaVersion : public
        ublox::field::CfgNmeaVersion<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nmeaVersion";
        }
        
    };
    
    /// @brief Definition of <b>"numSV"</b> field.
    struct NumSV : public
        ublox::field::CfgNmeaNumSV<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numSV";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    struct Flags : public
        ublox::field::CfgNmeaFlags<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"gnssToFilter"</b> field.
    struct GnssToFilter : public
        ublox::field::CfgNmeaGnssToFilter<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gnssToFilter";
        }
        
    };
    
    /// @brief Definition of <b>"svNumbering"</b> field.
    struct SvNumbering : public
        ublox::field::CfgNmeaSvNumbering<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svNumbering";
        }
        
    };
    
    /// @brief Definition of <b>"mainTalkerId"</b> field.
    struct MainTalkerId : public
        ublox::field::CfgMainTalkerId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "mainTalkerId";
        }
        
    };
    
    /// @brief Definition of <b>"gsvTalkerId"</b> field.
    struct GsvTalkerId : public
        ublox::field::CfgNmeaGsvTalkerId<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "gsvTalkerId";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Filter,
        NmeaVersion,
        NumSV,
        Flags,
        GnssToFilter,
        SvNumbering,
        MainTalkerId,
        GsvTalkerId,
        Version
    >;
};

/// @brief Definition of <b>"CFG-NMEA (V0)"</b> message class.
/// @details
///     See @ref CfgNmeaV0Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNmeaV0.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNmeaV0 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
        comms::option::def::FieldsImpl<typename CfgNmeaV0Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNmeaV0<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
            comms::option::def::FieldsImpl<typename CfgNmeaV0Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNmeaV0<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_filter() for @ref CfgNmeaV0Fields::Filter field.
    ///     @li @b field_nmeaVersion() for @ref CfgNmeaV0Fields::NmeaVersion field.
    ///     @li @b field_numSV() for @ref CfgNmeaV0Fields::NumSV field.
    ///     @li @b field_flags() for @ref CfgNmeaV0Fields::Flags field.
    ///     @li @b field_gnssToFilter() for @ref CfgNmeaV0Fields::GnssToFilter field.
    ///     @li @b field_svNumbering() for @ref CfgNmeaV0Fields::SvNumbering field.
    ///     @li @b field_mainTalkerId() for @ref CfgNmeaV0Fields::MainTalkerId field.
    ///     @li @b field_gsvTalkerId() for @ref CfgNmeaV0Fields::GsvTalkerId field.
    ///     @li @b field_version() for @ref CfgNmeaV0Fields::Version field.
    COMMS_MSG_FIELDS_ACCESS(
        filter,
        nmeaVersion,
        numSV,
        flags,
        gnssToFilter,
        svNumbering,
        mainTalkerId,
        gsvTalkerId,
        version
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 12U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-NMEA (V0)";
    }
    
    
};

} // namespace message

} // namespace ublox


