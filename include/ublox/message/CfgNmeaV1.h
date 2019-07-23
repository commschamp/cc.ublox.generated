/// @file
/// @brief Contains definition of <b>"CFG-NMEA (V1)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
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
#include "ublox/field/Res6.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgNmeaV1.
/// @tparam TOpt Extra options
/// @see @ref CfgNmeaV1
/// @headerfile "ublox/message/CfgNmeaV1.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgNmeaV1Fields
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
            comms::option::def::DefaultNumValue<1>,
            comms::option::def::ValidNumValue<1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"bdsTalkerId"</b> field.
    struct BdsTalkerId : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::CfgNmeaV1Fields::BdsTalkerId,
            comms::option::def::SequenceFixedSize<2U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "bdsTalkerId";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res6<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
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
        Version,
        BdsTalkerId,
        Reserved1
    >;
};

/// @brief Definition of <b>"CFG-NMEA (V1)"</b> message class.
/// @details
///     See @ref CfgNmeaV1Fields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgNmeaV1.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgNmeaV1 : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
        comms::option::def::FieldsImpl<typename CfgNmeaV1Fields<TOpt>::All>,
        comms::option::def::MsgType<CfgNmeaV1<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgNmea>,
            comms::option::def::FieldsImpl<typename CfgNmeaV1Fields<TOpt>::All>,
            comms::option::def::MsgType<CfgNmeaV1<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_filter() for @ref CfgNmeaV1Fields::Filter field.
    ///     @li @b field_nmeaVersion() for @ref CfgNmeaV1Fields::NmeaVersion field.
    ///     @li @b field_numSV() for @ref CfgNmeaV1Fields::NumSV field.
    ///     @li @b field_flags() for @ref CfgNmeaV1Fields::Flags field.
    ///     @li @b field_gnssToFilter() for @ref CfgNmeaV1Fields::GnssToFilter field.
    ///     @li @b field_svNumbering() for @ref CfgNmeaV1Fields::SvNumbering field.
    ///     @li @b field_mainTalkerId() for @ref CfgNmeaV1Fields::MainTalkerId field.
    ///     @li @b field_gsvTalkerId() for @ref CfgNmeaV1Fields::GsvTalkerId field.
    ///     @li @b field_version() for @ref CfgNmeaV1Fields::Version field.
    ///     @li @b field_bdsTalkerId() for @ref CfgNmeaV1Fields::BdsTalkerId field.
    ///     @li @b field_reserved1() for @ref CfgNmeaV1Fields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        filter,
        nmeaVersion,
        numSV,
        flags,
        gnssToFilter,
        svNumbering,
        mainTalkerId,
        gsvTalkerId,
        version,
        bdsTalkerId,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 20U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 20U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-NMEA (V1)";
    }
    
    
};

} // namespace message

} // namespace ublox


