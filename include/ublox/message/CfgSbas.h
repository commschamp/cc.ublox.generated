/// @file
/// @brief Contains definition of <b>"CFG-SBAS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref CfgSbasFields.
/// @see @ref CfgSbasFields
/// @headerfile "ublox/message/CfgSbas.h"
struct CfgSbasFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::CfgSbasFields::Mode field.
    struct ModeCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "enabled",
                "test"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgSbasFields::Usage field.
    struct UsageCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "range",
                "diffCorr",
                "integrity"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgSbasFields::Scanmode2 field.
    struct Scanmode2Common
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "PRN152",
                "PRN153",
                "PRN154",
                "PRN155",
                "PRN156",
                "PRN157",
                "PRN158"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgSbasFields::Scanmode1 field.
    struct Scanmode1Common
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "PRN120",
                "PRN121",
                "PRN122",
                "PRN123",
                "PRN124",
                "PRN125",
                "PRN126",
                "PRN127",
                "PRN128",
                "PRN129",
                "PRN130",
                "PRN131",
                "PRN132",
                "PRN133",
                "PRN134",
                "PRN135",
                "PRN136",
                "PRN137",
                "PRN138",
                "PRN139",
                "PRN140",
                "PRN141",
                "PRN142",
                "PRN143",
                "PRN144",
                "PRN145",
                "PRN146",
                "PRN147",
                "PRN148",
                "PRN149",
                "PRN150",
                "PRN151"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref CfgSbas.
/// @tparam TOpt Extra options
/// @see @ref CfgSbas
/// @headerfile "ublox/message/CfgSbas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgSbasFields
{
    /// @brief Definition of <b>"mode"</b> field.
    class Mode : public
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
        ///      @li @b BitIdx_enabled, @b getBitValue_enabled() and @b setBitValue_enabled().
        ///      @li @b BitIdx_test, @b getBitValue_test() and @b setBitValue_test().
        COMMS_BITMASK_BITS_SEQ(
            enabled,
            test
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "mode";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgSbasFieldsCommon::ModeCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"usage"</b> field.
    class Usage : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0xF8U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_range, @b getBitValue_range() and @b setBitValue_range().
        ///      @li @b BitIdx_diffCorr, @b getBitValue_diffCorr() and @b setBitValue_diffCorr().
        ///      @li @b BitIdx_integrity, @b getBitValue_integrity() and @b setBitValue_integrity().
        COMMS_BITMASK_BITS_SEQ(
            range,
            diffCorr,
            integrity
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "usage";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgSbasFieldsCommon::UsageCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"maxSBAS"</b> field.
    struct MaxSBAS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<0, 3>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "maxSBAS";
        }
        
    };
    
    /// @brief Definition of <b>"scanmode2"</b> field.
    class Scanmode2 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<1U>,
            comms::option::def::BitmaskReservedBits<0x80U, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<1U>,
                comms::option::def::BitmaskReservedBits<0x80U, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_PRN152, @b getBitValue_PRN152() and @b setBitValue_PRN152().
        ///      @li @b BitIdx_PRN153, @b getBitValue_PRN153() and @b setBitValue_PRN153().
        ///      @li @b BitIdx_PRN154, @b getBitValue_PRN154() and @b setBitValue_PRN154().
        ///      @li @b BitIdx_PRN155, @b getBitValue_PRN155() and @b setBitValue_PRN155().
        ///      @li @b BitIdx_PRN156, @b getBitValue_PRN156() and @b setBitValue_PRN156().
        ///      @li @b BitIdx_PRN157, @b getBitValue_PRN157() and @b setBitValue_PRN157().
        ///      @li @b BitIdx_PRN158, @b getBitValue_PRN158() and @b setBitValue_PRN158().
        COMMS_BITMASK_BITS_SEQ(
            PRN152,
            PRN153,
            PRN154,
            PRN155,
            PRN156,
            PRN157,
            PRN158
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "scanmode2";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgSbasFieldsCommon::Scanmode2Common::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief Definition of <b>"scanmode1"</b> field.
    class Scanmode1 : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_PRN120, @b getBitValue_PRN120() and @b setBitValue_PRN120().
        ///      @li @b BitIdx_PRN121, @b getBitValue_PRN121() and @b setBitValue_PRN121().
        ///      @li @b BitIdx_PRN122, @b getBitValue_PRN122() and @b setBitValue_PRN122().
        ///      @li @b BitIdx_PRN123, @b getBitValue_PRN123() and @b setBitValue_PRN123().
        ///      @li @b BitIdx_PRN124, @b getBitValue_PRN124() and @b setBitValue_PRN124().
        ///      @li @b BitIdx_PRN125, @b getBitValue_PRN125() and @b setBitValue_PRN125().
        ///      @li @b BitIdx_PRN126, @b getBitValue_PRN126() and @b setBitValue_PRN126().
        ///      @li @b BitIdx_PRN127, @b getBitValue_PRN127() and @b setBitValue_PRN127().
        ///      @li @b BitIdx_PRN128, @b getBitValue_PRN128() and @b setBitValue_PRN128().
        ///      @li @b BitIdx_PRN129, @b getBitValue_PRN129() and @b setBitValue_PRN129().
        ///      @li @b BitIdx_PRN130, @b getBitValue_PRN130() and @b setBitValue_PRN130().
        ///      @li @b BitIdx_PRN131, @b getBitValue_PRN131() and @b setBitValue_PRN131().
        ///      @li @b BitIdx_PRN132, @b getBitValue_PRN132() and @b setBitValue_PRN132().
        ///      @li @b BitIdx_PRN133, @b getBitValue_PRN133() and @b setBitValue_PRN133().
        ///      @li @b BitIdx_PRN134, @b getBitValue_PRN134() and @b setBitValue_PRN134().
        ///      @li @b BitIdx_PRN135, @b getBitValue_PRN135() and @b setBitValue_PRN135().
        ///      @li @b BitIdx_PRN136, @b getBitValue_PRN136() and @b setBitValue_PRN136().
        ///      @li @b BitIdx_PRN137, @b getBitValue_PRN137() and @b setBitValue_PRN137().
        ///      @li @b BitIdx_PRN138, @b getBitValue_PRN138() and @b setBitValue_PRN138().
        ///      @li @b BitIdx_PRN139, @b getBitValue_PRN139() and @b setBitValue_PRN139().
        ///      @li @b BitIdx_PRN140, @b getBitValue_PRN140() and @b setBitValue_PRN140().
        ///      @li @b BitIdx_PRN141, @b getBitValue_PRN141() and @b setBitValue_PRN141().
        ///      @li @b BitIdx_PRN142, @b getBitValue_PRN142() and @b setBitValue_PRN142().
        ///      @li @b BitIdx_PRN143, @b getBitValue_PRN143() and @b setBitValue_PRN143().
        ///      @li @b BitIdx_PRN144, @b getBitValue_PRN144() and @b setBitValue_PRN144().
        ///      @li @b BitIdx_PRN145, @b getBitValue_PRN145() and @b setBitValue_PRN145().
        ///      @li @b BitIdx_PRN146, @b getBitValue_PRN146() and @b setBitValue_PRN146().
        ///      @li @b BitIdx_PRN147, @b getBitValue_PRN147() and @b setBitValue_PRN147().
        ///      @li @b BitIdx_PRN148, @b getBitValue_PRN148() and @b setBitValue_PRN148().
        ///      @li @b BitIdx_PRN149, @b getBitValue_PRN149() and @b setBitValue_PRN149().
        ///      @li @b BitIdx_PRN150, @b getBitValue_PRN150() and @b setBitValue_PRN150().
        ///      @li @b BitIdx_PRN151, @b getBitValue_PRN151() and @b setBitValue_PRN151().
        COMMS_BITMASK_BITS_SEQ(
            PRN120,
            PRN121,
            PRN122,
            PRN123,
            PRN124,
            PRN125,
            PRN126,
            PRN127,
            PRN128,
            PRN129,
            PRN130,
            PRN131,
            PRN132,
            PRN133,
            PRN134,
            PRN135,
            PRN136,
            PRN137,
            PRN138,
            PRN139,
            PRN140,
            PRN141,
            PRN142,
            PRN143,
            PRN144,
            PRN145,
            PRN146,
            PRN147,
            PRN148,
            PRN149,
            PRN150,
            PRN151
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "scanmode1";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::CfgSbasFieldsCommon::Scanmode1Common::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Mode,
        Usage,
        MaxSBAS,
        Scanmode2,
        Scanmode1
    >;
};

/// @brief Definition of <b>"CFG-SBAS"</b> message class.
/// @details
///     See @ref CfgSbasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgSbas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgSbas : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgSbas>,
        comms::option::def::FieldsImpl<typename CfgSbasFields<TOpt>::All>,
        comms::option::def::MsgType<CfgSbas<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgSbas>,
            comms::option::def::FieldsImpl<typename CfgSbasFields<TOpt>::All>,
            comms::option::def::MsgType<CfgSbas<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_mode() for @ref CfgSbasFields::Mode field.
    ///     @li @b field_usage() for @ref CfgSbasFields::Usage field.
    ///     @li @b field_maxSBAS() for @ref CfgSbasFields::MaxSBAS field.
    ///     @li @b field_scanmode2() for @ref CfgSbasFields::Scanmode2 field.
    ///     @li @b field_scanmode1() for @ref CfgSbasFields::Scanmode1 field.
    COMMS_MSG_FIELDS_ACCESS(
        mode,
        usage,
        maxSBAS,
        scanmode2,
        scanmode1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 8U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-SBAS";
    }
    
    
};

} // namespace message

} // namespace ublox


