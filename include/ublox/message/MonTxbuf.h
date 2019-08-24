/// @file
/// @brief Contains definition of <b>"MON-TXBUF"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res1.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonTxbufFields.
/// @see @ref MonTxbufFields
/// @headerfile "ublox/message/MonTxbuf.h"
struct MonTxbufFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonTxbufFields::Errors bitfield.
    struct ErrorsMembersCommon
    {
        /// @brief Common functions for
        ///     @ref ublox::message::MonTxbufFields::ErrorsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "mem",
                    "alloc"
                };
            
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                if (MapSize <= idx) {
                    return nullptr;
                }
            
                return Map[idx];
            }
            
        };
        
    };
    
};

/// @brief Fields of @ref MonTxbuf.
/// @tparam TOpt Extra options
/// @see @ref MonTxbuf
/// @headerfile "ublox/message/MonTxbuf.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonTxbufFields
{
    /// @brief Scope for all the member fields of ///     @ref Pending list.
    struct PendingMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint16_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"pending"</b> field.
    struct Pending : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename PendingMembers::Element,
            typename TOpt::message::MonTxbufFields::Pending,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "pending";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Usage list.
    struct UsageMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"usage"</b> field.
    struct Usage : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename UsageMembers::Element,
            typename TOpt::message::MonTxbufFields::Usage,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "usage";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref PeakUsage list.
    struct PeakUsageMembers
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"peakUsage"</b> field.
    struct PeakUsage : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename PeakUsageMembers::Element,
            typename TOpt::message::MonTxbufFields::PeakUsage,
            comms::option::def::SequenceFixedSize<6U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "peakUsage";
        }
        
    };
    
    /// @brief Definition of <b>"tUsage"</b> field.
    struct TUsage : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tUsage";
        }
        
    };
    
    /// @brief Definition of <b>"tPeakusage"</b> field.
    struct TPeakusage : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "tPeakusage";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Errors bitfield.
    struct ErrorsMembers
    {
        /// @brief Definition of <b>"limit"</b> field.
        struct Limit : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint8_t,
                comms::option::def::FixedBitLength<6U>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "limit";
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<2U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<2U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_mem, @b getBitValue_mem() and @b setBitValue_mem().
            ///      @li @b BitIdx_alloc, @b getBitValue_alloc() and @b setBitValue_alloc().
            COMMS_BITMASK_BITS_SEQ(
                mem,
                alloc
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
            /// @brief Retrieve name of the bit
            static const char* bitName(BitIdx idx)
            {
                return
                    ublox::message::MonTxbufFieldsCommon::ErrorsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               Limit,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"errors"</b> field.
    class Errors : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename ErrorsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ErrorsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_limit() - for ErrorsMembers::Limit member field.
        ///     @li @b field_bits() - for ErrorsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            limit,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "errors";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res1<
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
        Pending,
        Usage,
        PeakUsage,
        TUsage,
        TPeakusage,
        Errors,
        Reserved1
    >;
};

/// @brief Definition of <b>"MON-TXBUF"</b> message class.
/// @details
///     See @ref MonTxbufFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonTxbuf.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonTxbuf : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonTxbuf,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonTxbuf>,
        comms::option::def::FieldsImpl<typename MonTxbufFields<TOpt>::All>,
        comms::option::def::MsgType<MonTxbuf<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonTxbuf,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonTxbuf>,
            comms::option::def::FieldsImpl<typename MonTxbufFields<TOpt>::All>,
            comms::option::def::MsgType<MonTxbuf<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_pending() for @ref MonTxbufFields::Pending field.
    ///     @li @b field_usage() for @ref MonTxbufFields::Usage field.
    ///     @li @b field_peakUsage() for @ref MonTxbufFields::PeakUsage field.
    ///     @li @b field_tUsage() for @ref MonTxbufFields::TUsage field.
    ///     @li @b field_tPeakusage() for @ref MonTxbufFields::TPeakusage field.
    ///     @li @b field_errors() for @ref MonTxbufFields::Errors field.
    ///     @li @b field_reserved1() for @ref MonTxbufFields::Reserved1 field.
    COMMS_MSG_FIELDS_ACCESS(
        pending,
        usage,
        peakUsage,
        tUsage,
        tPeakusage,
        errors,
        reserved1
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 28U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 28U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-TXBUF";
    }
    
    
};

} // namespace message

} // namespace ublox


