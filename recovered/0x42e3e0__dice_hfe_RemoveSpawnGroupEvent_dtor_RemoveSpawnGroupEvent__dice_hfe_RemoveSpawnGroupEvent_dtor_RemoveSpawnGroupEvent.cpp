// FUNCTION: BF2 0x42e3e0
void operator delete(void*);

namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class RemoveSpawnGroupEvent {
public:
    unsigned char m_unk_0x2;
    unsigned char m_unk_0x10;
    unsigned short m_unk_0x12;
    ~RemoveSpawnGroupEvent();
};

RemoveSpawnGroupEvent::~RemoveSpawnGroupEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2dc30);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_dtor_RemoveSpawnGroupEvent (0x42e3e0)