/// @file
/// @brief Contains definition of <b>"CFG-EKF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgEkfFields.
/// @see @ref CfgEkfFields
/// @headerfile "ublox/message/CfgEkf.h"
struct CfgEkfFieldsCommon
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
    enum class DisableEkfVal : std::uint8_t
    {
        Enabled = 0, ///< value @b Enabled
        Disabled = 1, ///< value @b Disabled
        
        // --- Extra values generated for convenience ---
        FirstValue = 0, ///< First defined value.
        LastValue = 1, ///< Last defined value.
        ValuesLimit = 2, ///< Upper limit for defined values.
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
    struct DisableEkfCommon
    {
        /// @brief Retrieve name of the enum value
        static const char* valueName(DisableEkfVal val)
        {
            static const char* Map[] = {
                "Enabled",
                "Disabled"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::ActionFlags field.
    struct ActionFlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "clTab",
                "clCalib",
                nullptr,
                "nomTacho",
                "nomGyro",
                "setTemp",
                "dir"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::ConfigFlags field.
    struct ConfigFlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "pulsesPerM",
                "useSerWt"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::InverseFlags field.
    struct InverseFlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "invDir",
                "invGyro"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgEkf.
/// @tparam TOpt Extra options
/// @see @ref CfgEkf
/// @headerfile "ublox/message/CfgEkf.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgEkfFields
{
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
    using DisableEkfVal = ublox::message::CfgEkfFieldsCommon::DisableEkfVal;
    
    /// @brief Definition of <b>"disableEkf"</b> field.
    /// @see @ref ublox::message::CfgEkfFields::DisableEkfVal
    struct DisableEkf : public
        comms::field::EnumValue<
            ublox::field::FieldBase<>,
            DisableEkfVal,
            comms::option::def::ValidNumValueRange<0, 1>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "disableEkf";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(DisableEkfVal val)
        {
            return ublox::message::CfgEkfFieldsCommon::DisableEkfCommon::valueName(val);
        }
        
    };
    
    /// @brief Definition of <b>"actionFlags"</b> field.
    class ActionFlags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0x9U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0x9U, 0x0U>
            >;
    public:
        /// @brief Provide names for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values:
        ///      @li @b BitIdx_clTab.
        ///      @li @b BitIdx_clCalib.
        ///      @li @b BitIdx_nomTacho.
        ///      @li @b BitIdx_nomGyro.
        ///      @li @b BitIdx_setTemp.
        ///      @li @b BitIdx_dir.
        COMMS_BITMASK_BITS(
            clTab=1,
            clCalib=2,
            nomTacho=4,
            nomGyro=5,
            setTemp=6,
            dir=7
        );
        
        /// @brief Generates independent access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_ACCESS macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///     The generated access functions are:
        ///      @li @b getBitValue_clTab() and @b setBitValue_clTab().
        ///      @li @b getBitValue_clCalib() and @b setBitValue_clCalib().
        ///      @li @b getBitValue_nomTacho() and @b setBitValue_nomTacho().
        ///      @li @b getBitValue_nomGyro() and @b setBitValue_nomGyro().
        ///      @li @b getBitValue_setTemp() and @b setBitValue_setTemp().
        ///      @li @b getBitValue_dir() and @b setBitValue_dir().
        COMMS_BITMASK_BITS_ACCESS(
            clTab,
            clCalib,
            nomTacho,
            nomGyro,
            setTemp,
            dir
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "actionFlags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgEkfFieldsCommon::ActionFlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"configFlags"</b> field.
    class ConfigFlags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_pulsesPerM, @b getBitValue_pulsesPerM() and @b setBitValue_pulsesPerM().
        ///      @li @b BitIdx_useSerWt, @b getBitValue_useSerWt() and @b setBitValue_useSerWt().
        COMMS_BITMASK_BITS_SEQ(
            pulsesPerM,
            useSerWt
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "configFlags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgEkfFieldsCommon::ConfigFlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"inverseFlags"</b> field.
    class InverseFlags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xFCU, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_invDir, @b getBitValue_invDir() and @b setBitValue_invDir().
        ///      @li @b BitIdx_invGyro, @b getBitValue_invGyro() and @b setBitValue_invGyro().
        COMMS_BITMASK_BITS_SEQ(
            invDir,
            invGyro
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "inverseFlags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgEkfFieldsCommon::InverseFlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res4<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"nomPPDist"</b> field.
    struct NomPPDist : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nomPPDist";
        }
        
    };
    
    /// @brief Definition of <b>"nomZero"</b> field.
    struct NomZero : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nomZero";
        }
        
    };
    
    /// @brief Definition of <b>"nomSens"</b> field.
    struct NomSens : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<20, 40>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nomSens";
        }
        
    };
    
    /// @brief Definition of <b>"rmsTemp"</b> field.
    struct RmsTemp : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ScalingRatio<1, 10>,
            comms::option::def::ValidNumValueRange<1, 10>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "rmsTemp";
        }
        
    };
    
    /// @brief Definition of <b>"tempUpdate"</b> field.
    struct TempUpdate : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::ValidNumValueRange<9, 65535L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tempUpdate";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        DisableEkf,
        ActionFlags,
        ConfigFlags,
        InverseFlags,
        Reserved2,
        NomPPDist,
        NomZero,
        NomSens,
        RmsTemp,
        TempUpdate
    >;
};

/// @brief Definition of <b>"CFG-EKF"</b> message class.
/// @details
///     See @ref CfgEkfFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgEkf.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgEkf : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEkf>,
        comms::option::def::FieldsImpl<typename CfgEkfFields<TOpt>::All>,
        comms::option::def::MsgType<CfgEkf<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgEkf>,
            comms::option::def::FieldsImpl<typename CfgEkfFields<TOpt>::All>,
            comms::option::def::MsgType<CfgEkf<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_disableEkf() for @ref CfgEkfFields::DisableEkf field.
    ///     @li @b field_actionFlags() for @ref CfgEkfFields::ActionFlags field.
    ///     @li @b field_configFlags() for @ref CfgEkfFields::ConfigFlags field.
    ///     @li @b field_inverseFlags() for @ref CfgEkfFields::InverseFlags field.
    ///     @li @b field_reserved2() for @ref CfgEkfFields::Reserved2 field.
    ///     @li @b field_nomPPDist() for @ref CfgEkfFields::NomPPDist field.
    ///     @li @b field_nomZero() for @ref CfgEkfFields::NomZero field.
    ///     @li @b field_nomSens() for @ref CfgEkfFields::NomSens field.
    ///     @li @b field_rmsTemp() for @ref CfgEkfFields::RmsTemp field.
    ///     @li @b field_tempUpdate() for @ref CfgEkfFields::TempUpdate field.
    COMMS_MSG_FIELDS_ACCESS(
        disableEkf,
        actionFlags,
        configFlags,
        inverseFlags,
        reserved2,
        nomPPDist,
        nomZero,
        nomSens,
        rmsTemp,
        tempUpdate
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 16U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-EKF";
    }
    
    
};

} // namespace message

} // namespace ublox


