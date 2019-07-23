/// @file
/// @brief Contains definition of <b>"AID-ALPSRV"</b> message and its fields.

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

/// @brief Fields of @ref AidAlpsrv.
/// @tparam TOpt Extra options
/// @see @ref AidAlpsrv
/// @headerfile "ublox/message/AidAlpsrv.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlpsrvFields
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
    
    /// @brief Definition of <b>"dataSize"</b> field.
    struct DataSize : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dataSize";
        }
        
    };
    
    /// @brief Definition of <b>"id1"</b> field.
    struct Id1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "id1";
        }
        
    };
    
    /// @brief Definition of <b>"id2"</b> field.
    struct Id2 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "id2";
        }
        
    };
    
    /// @brief Definition of <b>"id3"</b> field.
    struct Id3 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint32_t
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "id3";
        }
        
    };
    
    /// @brief Definition of <b>"data"</b> field.
    struct Data : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            std::uint8_t,
            typename TOpt::message::AidAlpsrvFields::Data,
            comms::option::def::SequenceLengthForcingEnabled
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
        DataSize,
        Id1,
        Id2,
        Id3,
        Data
    >;
};

/// @brief Definition of <b>"AID-ALPSRV"</b> message class.
/// @details
///     See @ref AidAlpsrvFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlpsrv.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlpsrv : public
    comms::MessageBase<
        TMsgBase,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlpsrv>,
        comms::option::def::FieldsImpl<typename AidAlpsrvFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlpsrv<TMsgBase, TOpt> >,
        comms::option::def::HasName,
        comms::option::def::HasCustomRefresh
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlpsrv>,
            comms::option::def::FieldsImpl<typename AidAlpsrvFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlpsrv<TMsgBase, TOpt> >,
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
    ///     @li @b field_idSize() for @ref AidAlpsrvFields::IdSize field.
    ///     @li @b field_type() for @ref AidAlpsrvFields::Type field.
    ///     @li @b field_ofs() for @ref AidAlpsrvFields::Ofs field.
    ///     @li @b field_size() for @ref AidAlpsrvFields::Size field.
    ///     @li @b field_fileId() for @ref AidAlpsrvFields::FileId field.
    ///     @li @b field_dataSize() for @ref AidAlpsrvFields::DataSize field.
    ///     @li @b field_id1() for @ref AidAlpsrvFields::Id1 field.
    ///     @li @b field_id2() for @ref AidAlpsrvFields::Id2 field.
    ///     @li @b field_id3() for @ref AidAlpsrvFields::Id3 field.
    ///     @li @b field_data() for @ref AidAlpsrvFields::Data field.
    COMMS_MSG_FIELDS_ACCESS(
        idSize,
        type,
        ofs,
        size,
        fileId,
        dataSize,
        id1,
        id2,
        id3,
        data
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 16U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-ALPSRV";
    }
    
    /// @brief Custom read functionality.
    template <typename TIter>
    comms::ErrorStatus doRead(TIter& iter, std::size_t len)
    {
        auto es = Base::template doReadUntilAndUpdateLen<FieldIdx_data>(iter, len);
        if (es != comms::ErrorStatus::Success) {
            return es;
        }
        
        field_data().forceReadLength(
            static_cast<std::size_t>(field_dataSize().value()));
        
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
        auto expectedLength = static_cast<std::size_t>(field_dataSize().value());
        auto realLength = field_data().value().size();
        if (expectedLength != realLength) {
            using LenValueType = typename std::decay<decltype(field_dataSize().value())>::type;
            field_dataSize().value() = static_cast<LenValueType>(realLength);
            return true;
        }
        
        return false;
    }
    
};

} // namespace message

} // namespace ublox


