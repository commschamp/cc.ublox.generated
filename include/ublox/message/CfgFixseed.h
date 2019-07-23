/// @file
/// @brief Contains definition of <b>"CFG-FIXSEED"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/MsgId.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref CfgFixseed.
/// @tparam TOpt Extra options
/// @see @ref CfgFixseed
/// @headerfile "ublox/message/CfgFixseed.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct CfgFixseedFields
{
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::DefaultNumValue<2>,
            comms::option::def::ValidNumValue<2>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
        }
        
    };
    
    /// @brief Definition of <b>"length"</b> field.
    struct Length : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<1, 10>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "length";
        }
        
    };
    
    /// @brief Definition of <b>"reserved1"</b> field.
    struct Reserved1 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved1";
        }
        
    };
    
    /// @brief Definition of <b>"seedHi"</b> field.
    struct SeedHi : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "seedHi";
        }
        
    };
    
    /// @brief Definition of <b>"seedLo"</b> field.
    struct SeedLo : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "seedLo";
        }
        
    };
    
    /// @brief Definition of <b>"list"</b> field.
    struct List : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            ublox::field::MsgId<TOpt>,
            typename TOpt::message::CfgFixseedFields::List,
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
        Length,
        Reserved1,
        SeedHi,
        SeedLo,
        List
    >;
};

/// @brief Definition of <b>"CFG-FIXSEED"</b> message class.
/// @details
///     See @ref CfgFixseedFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/CfgFixseed.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class CfgFixseed : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::CfgFixseed,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgFixseed>,
        comms::option::def::FieldsImpl<typename CfgFixseedFields<TOpt>::All>,
        comms::option::def::MsgType<CfgFixseed<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::CfgFixseed,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_CfgFixseed>,
            comms::option::def::FieldsImpl<typename CfgFixseedFields<TOpt>::All>,
            comms::option::def::MsgType<CfgFixseed<TMsgBase, TOpt> >,
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
    ///     @li @b field_version() for @ref CfgFixseedFields::Version field.
    ///     @li @b field_length() for @ref CfgFixseedFields::Length field.
    ///     @li @b field_reserved1() for @ref CfgFixseedFields::Reserved1 field.
    ///     @li @b field_seedHi() for @ref CfgFixseedFields::SeedHi field.
    ///     @li @b field_seedLo() for @ref CfgFixseedFields::SeedLo field.
    ///     @li @b field_list() for @ref CfgFixseedFields::List field.
    COMMS_MSG_FIELDS_ACCESS(
        version,
        length,
        reserved1,
        seedHi,
        seedLo,
        list
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 12U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "CFG-FIXSEED";
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
            static_cast<std::size_t>(field_length().value()));
        
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
            auto expectedValue = static_cast<std::size_t>(field_length().value());
            auto realValue = field_list().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_length().value())>::type;
                field_length().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


