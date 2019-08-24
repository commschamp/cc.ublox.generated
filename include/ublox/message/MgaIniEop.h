/// @file
/// @brief Contains definition of <b>"MGA-BDS-EOP"</b> message and its fields.

#pragma once

#include <cstdint>
#include <tuple>
#include "comms/MessageBase.h"
#include "comms/field/ArrayList.h"
#include "comms/field/IntValue.h"
#include "comms/options.h"
#include "ublox/MsgId.h"
#include "ublox/field/FieldBase.h"
#include "ublox/field/Res2.h"
#include "ublox/field/Res4.h"
#include "ublox/options/DefaultOptions.h"

namespace ublox
{

namespace message
{

/// @brief Fields of @ref MgaIniEop.
/// @tparam TOpt Extra options
/// @see @ref MgaIniEop
/// @headerfile "ublox/message/MgaIniEop.h"
template <typename TOpt = ublox::options::DefaultOptions>
struct MgaIniEopFields
{
    /// @brief Definition of <b>"type"</b> field.
    struct Type : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::FailOnInvalid<>,
            comms::option::def::DefaultNumValue<48>,
            comms::option::def::ValidNumValue<48>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "type";
        }
        
    };
    
    /// @brief Definition of <b>"version"</b> field.
    struct Version : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint8_t,
            comms::option::def::ValidNumValue<0>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "version";
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
    
    /// @brief Definition of <b>"d2kRef"</b> field.
    struct D2kRef : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "d2kRef";
        }
        
    };
    
    /// @brief Definition of <b>"d2kMax"</b> field.
    struct D2kMax : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::uint16_t,
            comms::option::def::UnitsDays
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "d2kMax";
        }
        
    };
    
    /// @brief Definition of <b>"xpP0"</b> field.
    struct XpP0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "xpP0";
        }
        
    };
    
    /// @brief Definition of <b>"xpP1"</b> field.
    struct XpP1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "xpP1";
        }
        
    };
    
    /// @brief Definition of <b>"ypP0"</b> field.
    struct YpP0 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ypP0";
        }
        
    };
    
    /// @brief Definition of <b>"ypP1"</b> field.
    struct YpP1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ypP1";
        }
        
    };
    
    /// @brief Definition of <b>"dUT1"</b> field.
    struct DUT1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 33554432L>,
            comms::option::def::UnitsSeconds
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "dUT1";
        }
        
    };
    
    /// @brief Definition of <b>"ddUT1"</b> field.
    struct DdUT1 : public
        comms::field::IntValue<
            ublox::field::FieldBase<>,
            std::int32_t,
            comms::option::def::ScalingRatio<1, 1073741824L>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "ddUT1";
        }
        
    };
    
    /// @brief Scope for all the member fields of ///     @ref Reserved2 list.
    struct Reserved2Members
    {
        /// @brief Definition of <b>""</b> field.
        struct Element : public
            ublox::field::Res4<
                TOpt
            >
        {
            /// @brief Name of the field.
            static const char* name()
            {
                return "";
            }
            
        };
        
    };
    
    /// @brief Definition of <b>"reserved2"</b> field.
    struct Reserved2 : public
        comms::field::ArrayList<
            ublox::field::FieldBase<>,
            typename Reserved2Members::Element,
            typename TOpt::message::MgaIniEopFields::Reserved2,
            comms::option::def::SequenceFixedSize<10U>
        >
    {
        /// @brief Name of the field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief All the fields bundled in std::tuple.
    using All = std::tuple<
        Type,
        Version,
        Reserved1,
        D2kRef,
        D2kMax,
        XpP0,
        XpP1,
        YpP0,
        YpP1,
        DUT1,
        DdUT1,
        Reserved2
    >;
};

/// @brief Definition of <b>"MGA-BDS-EOP"</b> message class.
/// @details
///     See @ref MgaIniEopFields for definition of the fields this message contains.
/// @tparam TMsgBase Base (interface) class.
/// @tparam TOpt Extra options
/// @headerfile "ublox/message/MgaIniEop.h"
template <typename TMsgBase, typename TOpt = ublox::options::DefaultOptions>
class MgaIniEop : public
    comms::MessageBase<
        TMsgBase,
        typename TOpt::message::MgaIniEop,
        comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
        comms::option::def::FieldsImpl<typename MgaIniEopFields<TOpt>::All>,
        comms::option::def::MsgType<MgaIniEop<TMsgBase, TOpt> >,
        comms::option::def::HasName
    >
{
    // Redefinition of the base class type
    using Base =
        comms::MessageBase<
            TMsgBase,
            typename TOpt::message::MgaIniEop,
            comms::option::def::StaticNumIdImpl<ublox::MsgId_MgaIni>,
            comms::option::def::FieldsImpl<typename MgaIniEopFields<TOpt>::All>,
            comms::option::def::MsgType<MgaIniEop<TMsgBase, TOpt> >,
            comms::option::def::HasName
        >;

public:
    /// @brief Allow access to internal fields.
    /// @details See definition of @b COMMS_MSG_FIELDS_ACCESS macro
    ///     related to @b comms::MessageBase class from COMMS library
    ///     for details.
    ///
    ///     The generated functions are:
    ///     @li @b field_type() for @ref MgaIniEopFields::Type field.
    ///     @li @b field_version() for @ref MgaIniEopFields::Version field.
    ///     @li @b field_reserved1() for @ref MgaIniEopFields::Reserved1 field.
    ///     @li @b field_d2kRef() for @ref MgaIniEopFields::D2kRef field.
    ///     @li @b field_d2kMax() for @ref MgaIniEopFields::D2kMax field.
    ///     @li @b field_xpP0() for @ref MgaIniEopFields::XpP0 field.
    ///     @li @b field_xpP1() for @ref MgaIniEopFields::XpP1 field.
    ///     @li @b field_ypP0() for @ref MgaIniEopFields::YpP0 field.
    ///     @li @b field_ypP1() for @ref MgaIniEopFields::YpP1 field.
    ///     @li @b field_dUT1() for @ref MgaIniEopFields::DUT1 field.
    ///     @li @b field_ddUT1() for @ref MgaIniEopFields::DdUT1 field.
    ///     @li @b field_reserved2() for @ref MgaIniEopFields::Reserved2 field.
    COMMS_MSG_FIELDS_ACCESS(
        type,
        version,
        reserved1,
        d2kRef,
        d2kMax,
        xpP0,
        xpP1,
        ypP0,
        ypP1,
        dUT1,
        ddUT1,
        reserved2
    );
    
    // Compile time check for serialisation length.
    static const std::size_t MsgMinLen = Base::doMinLength();
    static const std::size_t MsgMaxLen = Base::doMaxLength();
    static_assert(MsgMinLen == 72U, "Unexpected min serialisation length");
    static_assert(MsgMaxLen == 72U, "Unexpected max serialisation length");
    
    /// @brief Name of the message.
    static const char* doName()
    {
        return "MGA-BDS-EOP";
    }
    
    
};

} // namespace message

} // namespace ublox


