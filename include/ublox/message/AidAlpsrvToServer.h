/// @file
/// @brief Contains definition of <b>"AID-ALPSRV (To Server)"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref AidAlpsrvToServer.
/// @tparam TOpt Extra options
/// @see @ref AidAlpsrvToServer
/// @headerfile "ublox/message/AidAlpsrvToServer.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlpsrvToServerFields
{
    /// @brief Definition of <b>"idSize"</b> field.
    struct IdSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "idSize";
        }
        
    };
    
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"ofs"</b> field.
    struct Ofs : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ofs";
        }
        
    };
    
    /// @brief Definition of <b>"size"</b> field.
    struct Size : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "size";
        }
        
    };
    
    /// @brief Definition of <b>"fileId"</b> field.
    struct FileId : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "fileId";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Data list.
    struct DataMembers
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
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename DataMembers::Element,
            typename TOpt::message::AidAlpsrvToServerFields::Data,
            comms::option::def::SequenceSizeForcingEnabled
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "data";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        IdSize,
        Type,
        Ofs,
        Size,
        FileId,
        Data
    >;
};

/// @brief Definition of <b>"AID-ALPSRV (To Server)"</b> message class.
/// @details
///     See @ref AidAlpsrvToServerFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlpsrvToServer.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlpsrvToServer : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidAlpsrvToServer,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlpsrv>,
        comms::option::def::FieldsImpl<typename AidAlpsrvToServerFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlpsrvToServer<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidAlpsrvToServer,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlpsrv>,
            comms::option::def::FieldsImpl<typename AidAlpsrvToServerFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlpsrvToServer<TMsgBase, TOpt> >,
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
    ///     @li @b field_idSize() for @ref AidAlpsrvToServerFields::IdSize field.
    ///     @li @b field_type() for @ref AidAlpsrvToServerFields::Type field.
    ///     @li @b field_ofs() for @ref AidAlpsrvToServerFields::Ofs field.
    ///     @li @b field_size() for @ref AidAlpsrvToServerFields::Size field.
    ///     @li @b field_fileId() for @ref AidAlpsrvToServerFields::FileId field.
    ///     @li @b field_data() for @ref AidAlpsrvToServerFields::Data field.
    COMMS_MSG_FIELDS_ACCESS(
        idSize,
        type,
        ofs,
        size,
        fileId,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 8U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-ALPSRV (To Server)";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_data>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_data().forceReadElemCount(
            static_cast<std::size_t>(field_size().value()));
        
        es = Base::template doReadFrom<FieldIdx_data>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        return comms::ErrorStatus::Success;
    }
    
    /// @brief Custom refresh functionality.
    bool doRefresh()
    {
        bool updated = Base::doRefresh();
        updated = refresh_data() || updated;
        return updated;
    }
    
    
private:
    bool refresh_data()
    {
        bool updated = false;
        do {
            auto expectedValue = static_cast<std::size_t>(field_size().value());
            auto realValue = field_data().value().size();
            if (expectedValue != realValue) {
                using PrefixValueType = typename std::decay<decltype(field_size().value())>::type;
                field_size().value() = static_cast<PrefixValueType>(realValue);
                updated = true;
            }
        } while (false);
        
        return updated;
        
    }
    
};

} // namespace message

} // namespace ublox


