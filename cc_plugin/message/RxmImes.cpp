#include "RxmImes.h"

#include "comms_champion/property/field.h"
#include "comms_champion/ProtocolMessageBase.h"
#include "ublox/message/RxmImes.h"
#include "cc_plugin/field/Res1.h"
#include "cc_plugin/field/Res2.h"
#include "cc_plugin/field/Res3.h"

namespace cc = comms_champion;

namespace ublox
{

namespace cc_plugin
{

namespace message
{

namespace
{

static QVariantMap createProps_numTx()
{
    using Field = ublox::message::RxmImesFields<>::NumTx;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .readOnly()
            .asMap();
    
}

static QVariantMap createProps_version()
{
    using Field = ublox::message::RxmImesFields<>::Version;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .asMap();
    
}

static QVariantMap createProps_reserved1()
{
    using Field = ublox::message::RxmImesFields<>::Reserved1;
    auto props = cc_plugin::field::createProps_res2(Field::name());
    return props;
    
}

struct ListMembers
{
    struct ElementMembers
    {
        static QVariantMap createProps_reserved2()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Reserved2;
            auto props = cc_plugin::field::createProps_res1(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_txId()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::TxId;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved3()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Reserved3;
            auto props = cc_plugin::field::createProps_res3(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_cno()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Cno;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_reserved4()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Reserved4;
            auto props = cc_plugin::field::createProps_res2(Field::name());
            return props;
            
        }
        
        static QVariantMap createProps_doppler()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Doppler;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .scaledDecimals(9U)
                    .asMap();
            
        }
        
        struct Position1_1Members
        {
            static QVariantMap createProps_pos1Floor()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_1Members::Pos1Floor;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_pos1Lat()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_1Members::Pos1Lat;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_reserved()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_1Members::Reserved;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .hidden()
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_position1_1()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Position1_1Members::createProps_pos1Floor())
                    .add(Position1_1Members::createProps_pos1Lat())
                    .add(Position1_1Members::createProps_reserved())
                    .asMap();
            
        }
        
        struct Position1_2Members
        {
            static QVariantMap createProps_pos1Lon()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_2Members::Pos1Lon;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_flags()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_2Members::Flags;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "pos1Valid")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_position1_2()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position1_2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Position1_2Members::createProps_pos1Lon())
                    .add(Position1_2Members::createProps_flags())
                    .asMap();
            
        }
        
        struct Position2_1Members
        {
            static QVariantMap createProps_pos2Floor()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position2_1Members::Pos2Floor;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_pos2Alt()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position2_1Members::Pos2Alt;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_pos2Acc()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position2_1Members::Pos2Acc;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add("Undef", 0)
                        .add("<7m", 1)
                        .add("<15m", 2)
                        .add(">15m", 3)
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position2_1Members::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "pos2Valid")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_position2_1()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Position2_1;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(Position2_1Members::createProps_pos2Floor())
                    .add(Position2_1Members::createProps_pos2Alt())
                    .add(Position2_1Members::createProps_pos2Acc())
                    .add(Position2_1Members::createProps_bits())
                    .asMap();
            
        }
        
        static QVariantMap createProps_lat()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Lat;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_lon()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::Lon;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        struct ShortIdFrameMembers
        {
            static QVariantMap createProps_shortId()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::ShortIdFrameMembers::ShortId;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .asMap();
                
            }
            
            static QVariantMap createProps_bits()
            {
                using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::ShortIdFrameMembers::Bits;
                return
                    cc::property::field::ForField<Field>()
                        .name(Field::name())
                        .serialisedHidden()
                        .add(0U, "shortValid")
                        .add(1U, "shortBoundary")
                        .asMap();
                
            }
            
        };
        
        static QVariantMap createProps_shortIdFrame()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::ShortIdFrame;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(ShortIdFrameMembers::createProps_shortId())
                    .add(ShortIdFrameMembers::createProps_bits())
                    .asMap();
            
        }
        
        static QVariantMap createProps_mediumIdLSB()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::MediumIdLSB;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .asMap();
            
        }
        
        static QVariantMap createProps_mediumId_2()
        {
            using Field = ublox::message::RxmImesFields<>::ListMembers::ElementMembers::MediumId_2;
            return
                cc::property::field::ForField<Field>()
                    .name(Field::name())
                    .add(0U, "mediumIdMSB")
                    .add(1U, "mediumValid")
                    .add(2U, "mediumboundary")
                    .asMap();
            
        }
        
    };
    
    static QVariantMap createProps_element()
    {
        using Field = ublox::message::RxmImesFields<>::ListMembers::Element;
        return
            cc::property::field::ForField<Field>()
                .name(Field::name())
                .add(ElementMembers::createProps_reserved2())
                .add(ElementMembers::createProps_txId())
                .add(ElementMembers::createProps_reserved3())
                .add(ElementMembers::createProps_cno())
                .add(ElementMembers::createProps_reserved4())
                .add(ElementMembers::createProps_doppler())
                .add(ElementMembers::createProps_position1_1())
                .add(ElementMembers::createProps_position1_2())
                .add(ElementMembers::createProps_position2_1())
                .add(ElementMembers::createProps_lat())
                .add(ElementMembers::createProps_lon())
                .add(ElementMembers::createProps_shortIdFrame())
                .add(ElementMembers::createProps_mediumIdLSB())
                .add(ElementMembers::createProps_mediumId_2())
                .asMap();
        
    }
    
};

static QVariantMap createProps_list()
{
    using Field = ublox::message::RxmImesFields<>::List;
    return
        cc::property::field::ForField<Field>()
            .name(Field::name())
            .add(ListMembers::createProps_element())
            .serialisedHidden()
            .asMap();
    
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_numTx());
    props.append(createProps_version());
    props.append(createProps_reserved1());
    props.append(createProps_list());
    return props;
}

} // namespace

class RxmImesImpl : public
    comms_champion::ProtocolMessageBase<
        ublox::message::RxmImes<ublox::cc_plugin::Message>,
        RxmImesImpl
    >
{
public:
    RxmImesImpl() = default;
    RxmImesImpl(const RxmImesImpl&) = delete;
    RxmImesImpl(RxmImesImpl&&) = delete;
    virtual ~RxmImesImpl() = default;
    RxmImesImpl& operator=(const RxmImesImpl&) = default;
    RxmImesImpl& operator=(RxmImesImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

RxmImes::RxmImes() : m_pImpl(new RxmImesImpl) {}
RxmImes::~RxmImes() = default;

RxmImes& RxmImes::operator=(const RxmImes& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

RxmImes& RxmImes::operator=(RxmImes&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

const char* RxmImes::nameImpl() const
{
    return static_cast<const cc::Message*>(m_pImpl.get())->name();
}

const QVariantList& RxmImes::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void RxmImes::dispatchImpl(cc::MessageHandler& handler)
{
    static_cast<cc::Message*>(m_pImpl.get())->dispatch(handler);
}

void RxmImes::resetImpl()
{
    m_pImpl->reset();
}

bool RxmImes::assignImpl(const cc::Message& other)
{
    auto* castedOther = dynamic_cast<const RxmImes*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

RxmImes::MsgIdParamType RxmImes::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus RxmImes::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus RxmImes::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool RxmImes::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t RxmImes::lengthImpl() const
{
    return m_pImpl->length();
}

bool RxmImes::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_plugin

} // namespace ublox


