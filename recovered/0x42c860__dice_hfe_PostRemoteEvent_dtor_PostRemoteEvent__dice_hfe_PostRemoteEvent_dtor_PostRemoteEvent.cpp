// FUNCTION: BF2 0x42c860
namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class PostRemoteEvent {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned char m_unk_0x4C;
    unsigned int m_unk_0x50;
    ~PostRemoteEvent();
};

PostRemoteEvent::~PostRemoteEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2d6b0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
}

} }
// REVERSED_FUNCTION: dice_hfe_PostRemoteEvent_dtor_PostRemoteEvent (0x42c860)