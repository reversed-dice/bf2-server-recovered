// FUNCTION: BF2 0x42c040
namespace dice { namespace hfe {

class Event {
public:
    virtual ~Event();
};

class PlayerTearGassedEvent : public virtual Event {
public:
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;

    void member_439a80();

    virtual ~PlayerTearGassedEvent();
};

void PlayerTearGassedEvent::member_439a80() {
}

PlayerTearGassedEvent::~PlayerTearGassedEvent() {
    member_439a80();
}

}}
// REVERSED_FUNCTION: dice_hfe_PlayerTearGassedEvent_dtor_PlayerTearGassedEvent (0x42c040)