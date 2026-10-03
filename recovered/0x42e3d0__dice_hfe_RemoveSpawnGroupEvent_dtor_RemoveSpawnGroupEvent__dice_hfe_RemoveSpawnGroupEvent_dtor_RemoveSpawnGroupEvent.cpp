// FUNCTION: BF2 0x42e3d0
namespace dice { namespace hfe {

class RemoveSpawnGroupEvent {
public:
    ~RemoveSpawnGroupEvent();
    unsigned char m_unk_0x2;
    unsigned char m_unk_0x10;
    unsigned short m_unk_0x12;
};

void GameEvent_dtor(void** self);

RemoveSpawnGroupEvent::~RemoveSpawnGroupEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2dc30);
    GameEvent_dtor(reinterpret_cast<void**>(this));
}

} }
// REVERSED_FUNCTION: dice_hfe_RemoveSpawnGroupEvent_dtor_RemoveSpawnGroupEvent (0x42e3d0)