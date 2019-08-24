/// @file
/// @brief Contains definition of <b>"AID-HUI"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/FloatValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref AidHuiFields.
/// @see @ref AidHuiFields
/// @headerfile "ublox/message/AidHui.h"
struct AidHuiFieldsCommon
{
    /// @brief Common functions for
    ///     @ref ublox::message::AidHuiFields::Flags field.
    struct FlagsCommon
    {
        /// @brief Retrieve name of the bit
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "healthValid",
                "utcValid",
                "klobValid"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
};

/// @brief Fields of @ref AidHui.
/// @tparam TOpt Extra options
/// @see @ref AidHui
/// @headerfile "ublox/message/AidHui.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidHuiFields
{
    /// @brief Definition of <b>"health"</b> field.
    struct Health : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "health";
        }
        
    };
    
    /// @brief Definition of <b>"utcA0"</b> field.
    struct UtcA0 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            double
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcA0";
        }
        
    };
    
    /// @brief Definition of <b>"utcA1"</b> field.
    struct UtcA1 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            double
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcA1";
        }
        
    };
    
    /// @brief Definition of <b>"utcTOW"</b> field.
    struct UtcTOW : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcTOW";
        }
        
    };
    
    /// @brief Definition of <b>"utcWNT"</b> field.
    struct UtcWNT : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcWNT";
        }
        
    };
    
    /// @brief Definition of <b>"utcLS"</b> field.
    struct UtcLS : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcLS";
        }
        
    };
    
    /// @brief Definition of <b>"utcWNF"</b> field.
    struct UtcWNF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcWNF";
        }
        
    };
    
    /// @brief Definition of <b>"utcDN"</b> field.
    struct UtcDN : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcDN";
        }
        
    };
    
    /// @brief Definition of <b>"utcLSF"</b> field.
    struct UtcLSF : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcLSF";
        }
        
    };
    
    /// @brief Definition of <b>"utcSpare"</b> field.
    struct UtcSpare : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "utcSpare";
        }
        
    };
    
    /// @brief Definition of <b>"klobA0"</b> field.
    struct KlobA0 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobA0";
        }
        
    };
    
    /// @brief Definition of <b>"klobA1"</b> field.
    struct KlobA1 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobA1";
        }
        
    };
    
    /// @brief Definition of <b>"klobA2"</b> field.
    struct KlobA2 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobA2";
        }
        
    };
    
    /// @brief Definition of <b>"klobA3"</b> field.
    struct KlobA3 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobA3";
        }
        
    };
    
    /// @brief Definition of <b>"klobB0"</b> field.
    struct KlobB0 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobB0";
        }
        
    };
    
    /// @brief Definition of <b>"klobB1"</b> field.
    struct KlobB1 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobB1";
        }
        
    };
    
    /// @brief Definition of <b>"klobB2"</b> field.
    struct KlobB2 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobB2";
        }
        
    };
    
    /// @brief Definition of <b>"klobB3"</b> field.
    struct KlobB3 : public
        comms::field::FloatValue<
            ublox::field::FieldBase<>,
            float,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "klobB3";
        }
        
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::BitmaskValue<
            ublox::field::FieldBase<>,
            comms::option::def::FixedLength<4U>,
            comms::option::def::BitmaskReservedBits<0xFFFFFFF8UL, 0x0U>
        >
    {
        using Base = 
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedLength<4U>,
                comms::option::def::BitmaskReservedBits<0xFFFFFFF8UL, 0x0U>
            >;
    public:
        /// @brief Provides names and generates access functions for internal bits.
        /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
        ///     related to @b comms::field::BitmaskValue class from COMMS library
        ///     for details.
        ///
        ///      The generated enum values and functions are:
        ///      @li @b BitIdx_healthValid, @b getBitValue_healthValid() and @b setBitValue_healthValid().
        ///      @li @b BitIdx_utcValid, @b getBitValue_utcValid() and @b setBitValue_utcValid().
        ///      @li @b BitIdx_klobValid, @b getBitValue_klobValid() and @b setBitValue_klobValid().
        COMMS_BITMASK_BITS_SEQ(
            healthValid,
            utcValid,
            klobValid
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
        /// @brief Retrieve name of the bit
        static const char* bitName(BitIdx idx)
        {
            return
                ublox::message::AidHuiFieldsCommon::FlagsCommon::bitName(
                    static_cast<std::size_t>(idx));
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Health,
        UtcA0,
        UtcA1,
        UtcTOW,
        UtcWNT,
        UtcLS,
        UtcWNF,
        UtcDN,
        UtcLSF,
        UtcSpare,
        KlobA0,
        KlobA1,
        KlobA2,
        KlobA3,
        KlobB0,
        KlobB1,
        KlobB2,
        KlobB3,
        Flags
    >;
};

/// @brief Definition of <b>"AID-HUI"</b> message class.
/// @details
///     See @ref AidHuiFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidHui.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidHui : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidHui>,
        comms::option::def::FieldsImpl<typename AidHuiFields<TOpt>::All>,
        comms::option::def::MsgType<AidHui<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidHui>,
            comms::option::def::FieldsImpl<typename AidHuiFields<TOpt>::All>,
            comms::option::def::MsgType<AidHui<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_health() for @ref AidHuiFields::Health field.
    ///     @li @b field_utcA0() for @ref AidHuiFields::UtcA0 field.
    ///     @li @b field_utcA1() for @ref AidHuiFields::UtcA1 field.
    ///     @li @b field_utcTOW() for @ref AidHuiFields::UtcTOW field.
    ///     @li @b field_utcWNT() for @ref AidHuiFields::UtcWNT field.
    ///     @li @b field_utcLS() for @ref AidHuiFields::UtcLS field.
    ///     @li @b field_utcWNF() for @ref AidHuiFields::UtcWNF field.
    ///     @li @b field_utcDN() for @ref AidHuiFields::UtcDN field.
    ///     @li @b field_utcLSF() for @ref AidHuiFields::UtcLSF field.
    ///     @li @b field_utcSpare() for @ref AidHuiFields::UtcSpare field.
    ///     @li @b field_klobA0() for @ref AidHuiFields::KlobA0 field.
    ///     @li @b field_klobA1() for @ref AidHuiFields::KlobA1 field.
    ///     @li @b field_klobA2() for @ref AidHuiFields::KlobA2 field.
    ///     @li @b field_klobA3() for @ref AidHuiFields::KlobA3 field.
    ///     @li @b field_klobB0() for @ref AidHuiFields::KlobB0 field.
    ///     @li @b field_klobB1() for @ref AidHuiFields::KlobB1 field.
    ///     @li @b field_klobB2() for @ref AidHuiFields::KlobB2 field.
    ///     @li @b field_klobB3() for @ref AidHuiFields::KlobB3 field.
    ///     @li @b field_flags() for @ref AidHuiFields::Flags field.
    COMMS_MSG_FIELDS_ACCESS(
        health,
        utcA0,
        utcA1,
        utcTOW,
        utcWNT,
        utcLS,
        utcWNF,
        utcDN,
        utcLSF,
        utcSpare,
        klobA0,
        klobA1,
        klobA2,
        klobA3,
        klobB0,
        klobB1,
        klobB2,
        klobB3,
        flags
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 72U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 72U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-HUI";
    }
    
    
};

} // namespace message

} // namespace ublox


