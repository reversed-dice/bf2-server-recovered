// FUNCTION: BF2 0x425320
namespace dice { namespace hfe {

class GameEvent {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;

    virtual ~GameEvent();
};

class DestroyPlayerEvent : public GameEvent {
public:
    unsigned char m_unk_0x2;
    char m_unk_0x10;

    virtual ~DestroyPlayerEvent();
};

DestroyPlayerEvent::~DestroyPlayerEvent()
{
}

} }
class dice_hfe_DestroyPlayerEvent {
public:
    // REVERSED_FUNCTION: dtor_DestroyPlayerEvent(0x425320);
};

// REVERSED_FUNCTION: dice_hfe_DestroyPlayerEvent::dtor_DestroyPlayerEvent (0x425320)