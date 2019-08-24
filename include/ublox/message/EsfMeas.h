/// @file
/// @brief Contains definition of <b>"ESF-MEAS"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/field/Optional.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref EsfMeasFields.
/// @see @ref EsfMeasFields
/// @headerfile "ublox/message/EsfMeas.h"
struct EsfMeasFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::EsfMeasFields::Flags bitfield.
    struct FlagsMembersCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::EsfMeasFields::FlagsMembers::TimeMarkSent field.
        enum class TimeMarkSentVal : std::uint8_t
        {
            None = 0, ///< value @b None
            Ext0 = 1, ///< value @b Ext0
            Ext1 = 2, ///< value @b Ext1
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 2, ///< Last defined value.
            ValuesLimit = 3, ///< Upper limit for defined values.
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::EsfMeasFields::FlagsMembers::TimeMarkSent field.
        struct TimeMarkSentCommon
        {
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeMarkSentVal val)
            {
                static const char* Map[] = {
                    "None",
                    "Ext0",
                    "Ext1"
                };
                static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                
                if (MapSize <= static_cast<std::size_t>(val)) {
                    return nullptr;
                }
                
                return Map[static_cast<std::size_t>(val)];
            }
            
        };
        
        /// @brief Common functions for
        ///     @ref ublox::message::EsfMeasFields::FlagsMembers::Bits field.
        struct BitsCommon
        {
            /// @brief Retrieve name of the bit
            static const char* bitName(std::size_t idx)
            {
                static const char* Map[] = {
                    "timeMarkEdge",
                    "calibTtagValid"
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

/// @brief Fields of @ref EsfMeas.
/// @tparam TOpt Extra options
/// @see @ref EsfMeas
/// @headerfile "ublox/message/EsfMeas.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct EsfMeasFields
{
    /// @brief Definition of <b>"timeTag"</b> field.
    struct TimeTag : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "timeTag";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref Flags bitfield.
    struct FlagsMembers
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::EsfMeasFields::FlagsMembers::TimeMarkSent field.
        using TimeMarkSentVal = ublox::message::EsfMeasFieldsCommon::FlagsMembersCommon::TimeMarkSentVal;
        
        /// @brief Definition of <b>"timeMarkSent"</b> field.
        /// @see @ref ublox::message::EsfMeasFields::FlagsMembers::TimeMarkSentVal
        struct TimeMarkSent : public
            comms::field::EnumValue<
                ublox::field::FieldBase<>,
                TimeMarkSentVal,
                comms::option::def::FixedBitLength<2U>,
                comms::option::def::ValidNumValueRange<0, 2>
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "timeMarkSent";
            }
            
            /// @brief Retrieve name of the enum value
            static const char* valueName(TimeMarkSentVal val)
            {
                return ublox::message::EsfMeasFieldsCommon::FlagsMembersCommon::TimeMarkSentCommon::valueName(val);
            }
            
        };
        
        /// @brief Definition of <b>""</b> field.
        class Bits : public
            comms::field::BitmaskValue<
                ublox::field::FieldBase<>,
                comms::option::def::FixedBitLength<14U>,
                comms::option::def::BitmaskReservedBits<0x3FFCU, 0x0U>
            >
        {
            using Base = 
                comms::field::BitmaskValue<
                    ublox::field::FieldBase<>,
                    comms::option::def::FixedBitLength<14U>,
                    comms::option::def::BitmaskReservedBits<0x3FFCU, 0x0U>
                >;
        public:
            /// @brief Provides names and generates access functions for internal bits.
            /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
            ///     related to @b comms::field::BitmaskValue class from COMMS library
            ///     for details.
            ///
            ///      The generated enum values and functions are:
            ///      @li @b BitIdx_timeMarkEdge, @b getBitValue_timeMarkEdge() and @b setBitValue_timeMarkEdge().
            ///      @li @b BitIdx_calibTtagValid, @b getBitValue_calibTtagValid() and @b setBitValue_calibTtagValid().
            COMMS_BITMASK_BITS_SEQ(
                timeMarkEdge,
                calibTtagValid
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
                    ublox::message::EsfMeasFieldsCommon::FlagsMembersCommon::BitsCommon::bitName(
                        static_cast<std::size_t>(idx));
            }
            
        };
        
        /// @brief All members bundled in @b std::tuple.
        using All =
            std::tuple<
               TimeMarkSent,
               Bits
            >;
    };
    
    /// @brief Definition of <b>"flags"</b> field.
    class Flags : public
        comms::field::Bitfield<
            ublox::field::FieldBase<>,
            typename FlagsMembers::All
        >
    {
        using Base = 
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename FlagsMembers::All
            >;
    public:
        /// @brief Allow access to internal fields.
        /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
        ///     related to @b comms::field::Bitfield class from COMMS library
        ///     for details.
        ///
        ///      The generated access functions are:
        ///     @li @b field_timeMarkSent() - for FlagsMembers::TimeMarkSent member field.
        ///     @li @b field_bits() - for FlagsMembers::Bits member field.
        COMMS_FIELD_MEMBERS_ACCESS(
            timeMarkSent,
            bits
        );
        
        /// @brief Name of the field.
        static const char* name()
        {
            return "flags";
        }
        
    };
    
    /// @brief Definition of <b>"id"</b> field.
    struct Id : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "id";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bitfield.
        struct ElementMembers
        {
            /// @brief Definition of <b>"dataField"</b> field.
            struct DataField : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t,
                    comms::option::def::FixedBitLength<24U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "dataField";
                }
                
            };
            
            /// @brief Definition of <b>"dataType"</b> field.
            struct DataType : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FixedBitLength<6U>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "dataType";
                }
                
            };
            
            /// @brief Definition of <b>"reserved"</b> field.
            /// @details
            ///     Reserved field with 1 byte length
            struct Reserved : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint8_t,
                    comms::option::def::FixedBitLength<2U>,
                    comms::option::def::ValidNumValue<0>
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "reserved";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   DataField,
                   DataType,
                   Reserved
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bitfield<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bitfield class from COMMS library
            ///     for details.
            ///
            ///      The generated access functions are:
            ///     @li @b field_dataField() - for ElementMembers::DataField member field.
            ///     @li @b field_dataType() - for ElementMembers::DataType member field.
            ///     @li @b field_reserved() - for ElementMembers::Reserved member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                dataField,
                dataType,
                reserved
            );
            
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename ListMembers::Element,
            typename TOpt::message::EsfMeasFields::List
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    /// @brief Scope for all the member fields of @ref CalibTtag optional.
    struct CalibTtagMembers
    {
        /// @brief Definition of <b>"calibTtag"</b> field.
        struct CalibTtag : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t,
                comms::option::def::UnitsMilliseconds
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "calibTtag";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"calibTtag"</b> field.
    struct CalibTtag : public
        comms::field::Optional<
            typename CalibTtagMembers::CalibTtag
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "calibTtag";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        TimeTag,
        Flags,
        Id,
        List,
        CalibTtag
    >;
};

/// @brief Definition of <b>"ESF-MEAS"</b> message class.
/// @details
///     See @ref EsfMeasFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/EsfMeas.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class EsfMeas : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfMeas>,
        comms::option::def::FieldsImpl<typename EsfMeasFields<TOpt>::All>,
        comms::option::def::MsgType<EsfMeas<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_EsfMeas>,
            comms::option::def::FieldsImpl<typename EsfMeasFields<TOpt>::All>,
            comms::option::def::MsgType<EsfMeas<TMsgBase, TOpt> >,
            comms::option::def::HasName,
            comms::option::def::HasCustomRefresh
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_timeTag() for @ref EsfMeasFields::TimeTag field.
    ///     @li @b field_flags() for @ref EsfMeasFields::Flags field.
    ///     @li @b field_id() for @ref EsfMeasFields::Id field.
    ///     @li @b field_list() for @ref EsfMeasFields::List field.
    ///     @li @b field_calibTtag() for @ref EsfMeasFields::CalibTtag field.
    COMMS_MSG_FIELDS_ACCESS(
        timeTag,
        flags,
        id,
        list,
        calibTtag
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "ESF-MEAS";
    }
    
    /// @brief Custom read functionality
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        refresh_calibTtag();
        if (field_calibTtag().isMissing()) {
            return Base::template doReadFrom<FieldIdx_list>(iter, len);
        }
    
        std::size_t calibTtagLen = field_calibTtag().field().maxLength();
        if (len < calibTtagLen) {
            return comms::ErrorStatus::NotEnoughData;
        }
    
        len -= calibTtagLen;
        es = Base::template doReadFromUntilAndUpdateLen<FieldIdx_list, FieldIdx_calibTtag>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
    
        len += calibTtagLen; 
        return Base::template doReadFrom<FieldIdx_calibTtag>(iter, calibTtagLen);
    }
    
    /// @brief Custom refresh functionality
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_calibTtag() || updated;
        return updated;
    }
    
    
private:
    bool refresh_calibTtag()
    {
        auto mode = comms::field::OptionalMode::Missing;    
        if (field_flags().field_bits().getBitValue_calibTtagValid()) {
            mode = comms::field::OptionalMode::Exists;
        }
        
        if (field_calibTtag().getMode() == mode) {
            return false;
        }
        
        field_calibTtag().setMode(mode);
        return true;
    }
        
    
};

} // namespace message

} // namespace ublox


