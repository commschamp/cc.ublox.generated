/// @file
/// @brief Contains definition of <b>"RXM-SFRBX"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/GnssId.h"
#include "ublox/field/Res1.h"
#include "ublox/field/Res2.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref RxmSfrbx.
/// @tparam TOpt Extra options
/// @see @ref RxmSfrbx
/// @headerfile "ublox/message/RxmSfrbx.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct RxmSfrbxFields
{
    /// @brief Definition of <b>"gnssId"</b> field.
    using GnssId =
        ublox::field::GnssId<
            TOpt
        >;
    
    /// @brief Definition of <b>"svid"</b> field.
    struct Svid : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "svid";
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
    
    /// @brief Definition of <b>"freqId"</b> field.
    struct FreqId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValueRange<0, 13>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "freqId";
        }
        
    };
    
    /// @brief Definition of <b>"numWords"</b> field.
    struct NumWords : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "numWords";
        }
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
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
    
    /// @brief Definition of <b>"reserved3"</b> field.
    struct Reserved3 : public
        ublox::field::Res2<
            TOpt
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved3";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Dwrd list.
    struct DwrdMembers
    {
        /// @brief Definition of <b>"element"</b> field.
        struct Element : public
            comms::field::IntValue<
                ublox::field::FieldBase<>,
                std::uint32_t
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "element";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"dwrd"</b> field.
    struct Dwrd : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename DwrdMembers::Element,
            typename TOpt::message::RxmSfrbxFields::Dwrd,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dwrd";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        GnssId,
        Svid,
        Reserved1,
        FreqId,
        NumWords,
        Reserved2,
        Version,
        Reserved3,
        Dwrd
    >;
};

/// @brief Definition of <b>"RXM-SFRBX"</b> message class.
/// @details
///     See @ref RxmSfrbxFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/RxmSfrbx.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class RxmSfrbx : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::RxmSfrbx,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmSfrbx>,
        comms::option::def::FieldsImpl<typename RxmSfrbxFields<TOpt>::All>,
        comms::option::def::MsgType<RxmSfrbx<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::RxmSfrbx,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_RxmSfrbx>,
            comms::option::def::FieldsImpl<typename RxmSfrbxFields<TOpt>::All>,
            comms::option::def::MsgType<RxmSfrbx<TMsgBase, TOpt> >,
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
    ///     @li @b field_gnssId() for @ref RxmSfrbxFields::GnssId field.
    ///     @li @b field_svid() for @ref RxmSfrbxFields::Svid field.
    ///     @li @b field_reserved1() for @ref RxmSfrbxFields::Reserved1 field.
    ///     @li @b field_freqId() for @ref RxmSfrbxFields::FreqId field.
    ///     @li @b field_numWords() for @ref RxmSfrbxFields::NumWords field.
    ///     @li @b field_reserved2() for @ref RxmSfrbxFields::Reserved2 field.
    ///     @li @b field_version() for @ref RxmSfrbxFields::Version field.
    ///     @li @b field_reserved3() for @ref RxmSfrbxFields::Reserved3 field.
    ///     @li @b field_dwrd() for @ref RxmSfrbxFields::Dwrd field.
    COMMS_MSG_FIELDS_ACCESS(
        gnssId,
        svid,
        reserved1,
        freqId,
        numWords,
        reserved2,
        version,
        reserved3,
        dwrd
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 10U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "RXM-SFRBX";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_dwrd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_dwrd().forceReadElemCount(
            static_cast<std::size_t>(field_numWords().value()));
        
        es = Base::template doReadFrom<FieldIdx_dwrd>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_dwrd() || updated;
        return updated;
    }
    
    
private:
    bool refresh_dwrd()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_numWords().value());
            auto realValue = field_dwrd().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_numWords().value())>::type;
                field_numWords().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


