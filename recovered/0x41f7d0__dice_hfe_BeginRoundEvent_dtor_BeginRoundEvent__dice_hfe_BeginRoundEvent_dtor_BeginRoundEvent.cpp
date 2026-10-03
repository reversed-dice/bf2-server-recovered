// FUNCTION: BF2 0x41f7d0
namespace dice { namespace hfe {

class GameEvent {
public:
    virtual ~GameEvent();
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

class BeginRoundEvent : public GameEvent {
public:
    unsigned int getType() const;
    ~BeginRoundEvent();
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
};

} }

namespace dice { namespace hfe {

GameEvent::~GameEvent() {}

BeginRoundEvent::~BeginRoundEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_BeginRoundEvent_dtor_BeginRoundEvent (0x41f7d0)