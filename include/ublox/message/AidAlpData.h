/// @file
/// @brief Contains definition of <b>"AID-ALP (Data)"</b> message and its fields.

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

/// @brief Fields of @ref AidAlpData.
/// @tparam TOpt Extra options
/// @see @ref AidAlpData
/// @headerfile "ublox/message/AidAlpData.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct AidAlpDataFields
{
    /// @brief Scope for all the member fields of ///     @ref AlpData list.
    struct AlpDataMembers
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
    
    /// @brief Definition of <b>"alpData"</b> field.
    struct AlpData : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename AlpDataMembers::Element,
            typename TOpt::message::AidAlpDataFields::AlpData
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "alpData";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        AlpData
    >;
};

/// @brief Definition of <b>"AID-ALP (Data)"</b> message class.
/// @details
///     See @ref AidAlpDataFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/AidAlpData.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class AidAlpData : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::AidAlpData,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
        comms::option::def::FieldsImpl<typename AidAlpDataFields<TOpt>::All>,
        comms::option::def::MsgType<AidAlpData<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::AidAlpData,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_AidAlp>,
            comms::option::def::FieldsImpl<typename AidAlpDataFields<TOpt>::All>,
            comms::option::def::MsgType<AidAlpData<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_alpData() for @ref AidAlpDataFields::AlpData field.
    COMMS_MSG_FIELDS_ACCESS(
        alpData
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static_assert(MsgMinLen == 0U, "Unexpected min serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "AID-ALP (Data)";
    }
    
    
};

} // namespace message

} // namespace ublox


