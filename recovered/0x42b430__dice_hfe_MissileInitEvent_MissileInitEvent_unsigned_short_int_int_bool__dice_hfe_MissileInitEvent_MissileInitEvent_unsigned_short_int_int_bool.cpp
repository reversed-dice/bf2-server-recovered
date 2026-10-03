// FUNCTION: BF2 0x42b430
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent*);

class MissileInitEvent_MissileInitEvent : public GameEvent {
public:
    unsigned short m_unk_0x2;
    unsigned char m_unk_0x12;
    unsigned char m_unk_0x13;
    unsigned char m_unk_0x14;

    MissileInitEvent_MissileInitEvent(unsigned short, int, int, bool);
};

MissileInitEvent_MissileInitEvent::MissileInitEvent_MissileInitEvent(unsigned short a2, int a3, int a4, bool a5) {
    GameEvent_GameEvent(this);
    m_unk_0x2 = a2;
    m_unk_0x12 = static_cast<unsigned char>(a3);
    m_unk_0x13 = static_cast<unsigned char>(a4);
    m_unk_0x14 = static_cast<unsigned char>(a5);
    vptr = reinterpret_cast<void*>(0xb2d470ULL);
}

} }
// REVERSED_FUNCTION: dice_hfe_MissileInitEvent_MissileInitEvent_unsigned_short_int_int_bool (0x42b430)