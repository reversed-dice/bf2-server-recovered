// FUNCTION: BF2 0x42e0e0
namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class RankEvent {
public:
    unsigned int m_unk_0x2;
    unsigned int m_unk_0x3;
    int m_unk_0x10;
    unsigned int m_unk_0x14;
    int m_unk_0x18;
    unsigned int m_unk_0x1C;
    ~RankEvent();
};

RankEvent::~RankEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2daf0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_RankEvent_dtor_RankEvent (0x42e0e0)