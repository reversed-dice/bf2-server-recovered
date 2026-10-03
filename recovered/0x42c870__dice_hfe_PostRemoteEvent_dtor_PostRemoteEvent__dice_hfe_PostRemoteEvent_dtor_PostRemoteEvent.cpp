// FUNCTION: BF2 0x42c870
namespace dice { namespace hfe {

class GameEvent {
public:
    ~GameEvent();
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned int m_unk_0xC;
};

GameEvent::~GameEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2f0b0);
}

class PostRemoteEvent {
public:
    ~PostRemoteEvent();
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned char m_unk_0x4C;
    unsigned int m_unk_0x50;
};

PostRemoteEvent::~PostRemoteEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d6b0);
    reinterpret_cast<GameEvent*>(this)->GameEvent::~GameEvent();
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_dtor_PostRemoteEvent (0x42c870)