/// @file
/// @brief Contains definition of <b>"MON-PATCH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include <type_traits>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Common definitions for fields from @ref MonPatchFields.
/// @see @ref MonPatchFields
/// @headerfile "ublox/message/MonPatch.h"
struct MonPatchFieldsCommon
{
    /// @brief Scope for all the common definitions of the member fields of
    ///     @ref ublox::message::MonPatchFields::List list.
    struct ListMembersCommon
    {
        /// @brief Scope for all the common definitions of the member fields of
        ///     @ref ublox::message::MonPatchFields::ListMembers::Element bundle.
        struct ElementMembersCommon
        {
            /// @brief Scope for all the common definitions of the member fields of
            ///     @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfo bitfield.
            struct PatchInfoMembersCommon
            {
                /// @brief Common functions for
                ///     @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfoMembers::Bits field.
                struct BitsCommon
                {
                    /// @brief Retrieve name of the bit
                    static const char* bitName(std::size_t idx)
                    {
                        static const char* Map[] = {
                            "activated"
                        };
                    
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        if (MapSize <= idx) {
                            return nullptr;
                        }
                    
                        return Map[idx];
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfoMembers::Location field.
                enum class LocationVal : std::uint8_t
                {
                    eFuse = 0, ///< value @b eFuse
                    ROM = 1, ///< value @b ROM
                    BBR = 2, ///< value @b BBR
                    FileSystem = 3, ///< value @b FileSystem
                    
                    // --- Extra values generated for convenience ---
                    firstValue = 0, ///< First defined value.
                    lastValue = 3, ///< Last defined value.
                    valuesLimit = 4, ///< Upper limit for defined values.
                    
                };
                
                /// @brief Common functions for
                ///     @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfoMembers::Location field.
                struct LocationCommon
                {
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(LocationVal val)
                    {
                        static const char* Map[] = {
                            "eFuse",
                            "ROM",
                            "BBR",
                            "FileSystem"
                        };
                        static const std::size_t MapSize = std::extent<decltype(Map)>::value;
                        
                        if (MapSize <= static_cast<std::size_t>(val)) {
                            return nullptr;
                        }
                        
                        return Map[static_cast<std::size_t>(val)];
                    }
                    
                };
                
            };
            
        };
        
    };
    
};

/// @brief Fields of @ref MonPatch.
/// @tparam TOpt Extra options
/// @see @ref MonPatch
/// @headerfile "ublox/message/MonPatch.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MonPatchFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
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
    
    /// @brief Definition of <b>"nEntries"</b> field.
    struct NEntries : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "nEntries";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bundle.
        struct ElementMembers
        {
            /// @brief Scope for all the member fields of @ref PatchInfo bitfield.
            struct PatchInfoMembers
            {
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::def::FixedBitLength<1U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::def::FixedBitLength<1U>
                        >;
                public:
                    /// @brief Provides names and generates access functions for internal bits.
                    /// @details See definition of @b COMMS_BITMASK_BITS_SEQ macro
                    ///     related to @b comms::field::BitmaskValue class from COMMS library
                    ///     for details.
                    ///
                    ///      The generated enum values and functions are:
                    ///      @li @b BitIdx_activated, @b getBitValue_activated() and @b setBitValue_activated().
                    COMMS_BITMASK_BITS_SEQ(
                        activated
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
                            ublox::message::MonPatchFieldsCommon::ListMembersCommon::ElementMembersCommon::PatchInfoMembersCommon::BitsCommon::bitName(
                                static_cast<std::size_t>(idx));
                    }
                    
                };
                
                /// @brief Values enumerator for
                ///     @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfoMembers::Location field.
                using LocationVal = ublox::message::MonPatchFieldsCommon::ListMembersCommon::ElementMembersCommon::PatchInfoMembersCommon::LocationVal;
                
                /// @brief Definition of <b>"location"</b> field.
                /// @see @ref ublox::message::MonPatchFields::ListMembers::ElementMembers::PatchInfoMembers::LocationVal
                struct Location : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        LocationVal,
                        comms::option::def::FixedBitLength<2U>,
                        comms::option::def::ValidNumValueRange<0, 3>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "location";
                    }
                    
                    /// @brief Retrieve name of the enum value
                    static const char* valueName(LocationVal val)
                    {
                        return ublox::message::MonPatchFieldsCommon::ListMembersCommon::ElementMembersCommon::PatchInfoMembersCommon::LocationCommon::valueName(val);
                    }
                    
                };
                
                /// @brief Definition of <b>"res4"</b> field.
                /// @details
                ///     Reserved field with 4 bytes length
                struct Res4 : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint32_t,
                        comms::option::def::FixedBitLength<29U>,
                        comms::option::def::ValidNumValue<0>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "res4";
                    }
                    
                };
                
                /// @brief All members bundled in @b std::tuple.
                using All =
                    std::tuple<
                       Bits,
                       Location,
                       Res4
                    >;
            };
            
            /// @brief Definition of <b>"patchInfo"</b> field.
            class PatchInfo : public
                comms::field::Bitfield<
                    ublox::field::FieldBase<>,
                    typename PatchInfoMembers::All
                >
            {
                using Base = 
                    comms::field::Bitfield<
                        ublox::field::FieldBase<>,
                        typename PatchInfoMembers::All
                    >;
            public:
                /// @brief Allow access to internal fields.
                /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
                ///     related to @b comms::field::Bitfield class from COMMS library
                ///     for details.
                ///
                ///      The generated access functions are:
                ///     @li @b field_bits() - for PatchInfoMembers::Bits member field.
                ///     @li @b field_location() - for PatchInfoMembers::Location member field.
                ///     @li @b field_res4() - for PatchInfoMembers::Res4 member field.
                COMMS_FIELD_MEMBERS_ACCESS(
                    bits,
                    location,
                    res4
                );
                
                /// @brief Name of the field.
                static const char* name()
                {
                    return "patchInfo";
                }
                
            };
            
            /// @brief Definition of <b>"comparatorNumber"</b> field.
            struct ComparatorNumber : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "comparatorNumber";
                }
                
            };
            
            /// @brief Definition of <b>"patchAddress"</b> field.
            struct PatchAddress : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "patchAddress";
                }
                
            };
            
            /// @brief Definition of <b>"patchData"</b> field.
            struct PatchData : public
                comms::field::IntValue<
                    ublox::field::FieldBase<>,
                    std::uint32_t
                >
            {
                /// @brief Name of the field.
                static const char* name()
                {
                    return "patchData";
                }
                
            };
            
            /// @brief All members bundled in @b std::tuple.
            using All =
                std::tuple<
                   PatchInfo,
                   ComparatorNumber,
                   PatchAddress,
                   PatchData
                >;
        };
        
        /// @brief Definition of <b>""</b> field.
        class Element : public
            comms::field::Bundle<
                ublox::field::FieldBase<>,
                typename ElementMembers::All
            >
        {
            using Base = 
                comms::field::Bundle<
                    ublox::field::FieldBase<>,
                    typename ElementMembers::All
                >;
        public:
            /// @brief Allow access to internal fields.
            /// @details See definition of @b COMMS_FIELD_MEMBERS_ACCESS macro
            ///     related to @b comms::field::Bundle class from COMMS library
            ///     for details.
            ///
            ///     The generated access functions are:
            ///     @li @b field_patchInfo() - for ElementMembers::PatchInfo member field.
            ///     @li @b field_comparatorNumber() - for ElementMembers::ComparatorNumber member field.
            ///     @li @b field_patchAddress() - for ElementMembers::PatchAddress member field.
            ///     @li @b field_patchData() - for ElementMembers::PatchData member field.
            COMMS_FIELD_MEMBERS_ACCESS(
                patchInfo,
                comparatorNumber,
                patchAddress,
                patchData
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
            typename TOpt::message::MonPatchFields::List,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "list";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Version,
        NEntries,
        List
    >;
};

/// @brief Definition of <b>"MON-PATCH"</b> message class.
/// @details
///     See @ref MonPatchFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MonPatch.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MonPatch : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonPatch,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MonPatch>,
        comms::option::def::FieldsImpl<typename MonPatchFields<TOpt>::All>,
        comms::option::def::MsgType<MonPatch<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonPatch,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MonPatch>,
            comms::option::def::FieldsImpl<typename MonPatchFields<TOpt>::All>,
            comms::option::def::MsgType<MonPatch<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref MonPatchFields::Version field.
    ///     @li @b field_nEntries() for @ref MonPatchFields::NEntries field.
    ///     @li @b field_list() for @ref MonPatchFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        nEntries,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 4U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MON-PATCH";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_list().forceReadElemCount(
            static_cast<std::size_t>(field_nEntries().value()));
        
        es = Base::template doReadFrom<FieldIdx_list>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_list() || updated;
        return updated;
    }
    
    
private:
    bool refresh_list()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_nEntries().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_nEntries().value())>::type;
                field_nEntries().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


