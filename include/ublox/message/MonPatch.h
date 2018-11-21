/// @file
/// @brief Contains definition of <b>"MON-PATCH"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/Bitfield.h"
#include "comms/field/BitmaskValue.h"
#include "comms/field/Bundle.h"
#include "comms/field/EnumValue.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/DefaultOptions.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MonPatch.
/// @tparam TOpt Extra options
/// @see @ref MonPatch
/// @headerfile "ublox/message/MonPatch.h"
template <typename TOpt = ublox::DefaultOptions>
struct MonPatchFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::DefaultNumValue<1>,
            comms::option::ValidNumValue<1>
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
    
    /// @brief Scope for all the member fields of @ref List list.
    struct ListMembers
    {
        /// @brief Scope for all the member fields of @ref Element bitfield.
        struct ElementMembers
        {
            /// @brief Scope for all the member fields of @ref PatchInfo bitfield.
            struct PatchInfoMembers
            {
                /// @brief Definition of <b>""</b> field.
                class Bits : public
                    comms::field::BitmaskValue<
                        ublox::field::FieldBase<>,
                        comms::option::FixedBitLength<1U>
                    >
                {
                    using Base = 
                        comms::field::BitmaskValue<
                            ublox::field::FieldBase<>,
                            comms::option::FixedBitLength<1U>
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
                    
                };
                
                /// @brief Values enumerator for @ref Location field.
                enum class LocationVal : std::uint8_t
                {
                    eFuse = 0, ///< value @b eFuse
                    ROM = 1, ///< value @b ROM
                    BBR = 2, ///< value @b BBR
                    FileSystem = 3, ///< value @b FileSystem
                    
                };
                
                /// @brief Definition of <b>"location"</b> field.
                struct Location : public
                    comms::field::EnumValue<
                        ublox::field::FieldBase<>,
                        LocationVal,
                        comms::option::FixedBitLength<2U>,
                        comms::option::ValidNumValueRange<0, 3>
                    >
                {
                    /// @brief Name of the field.
                    static const char* name()
                    {
                        return "location";
                    }
                    
                };
                
                /// @brief Definition of <b>"res4"</b> field.
                /// @details
                ///     Reserved field with 4 bytes length
                struct Res4 : public
                    comms::field::IntValue<
                        ublox::field::FieldBase<>,
                        std::uint32_t,
                        comms::option::FixedBitLength<29U>,
                        comms::option::ValidNumValue<0>
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
            comms::option::SequenceSizeForcingEnabled
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
template <typename TMsgBase, typename TOpt = ublox::DefaultOptions>
class MonPatch : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MonPatch,
        comms::option::StaticNumIdImpl<ublox::MsgId_MonPatch>,
        comms::option::FieldsImpl<typename MonPatchFields<TOpt>::All>,
        comms::option::MsgType<MonPatch<TMsgBase, TOpt> >,
        comms::option::HasName,
        comms::option::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MonPatch,
            comms::option::StaticNumIdImpl<ublox::MsgId_MonPatch>,
            comms::option::FieldsImpl<typename MonPatchFields<TOpt>::All>,
            comms::option::MsgType<MonPatch<TMsgBase, TOpt> >,
            comms::option::HasName,
            comms::option::HasCustomRefresh
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


