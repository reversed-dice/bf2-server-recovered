// FUNCTION: BF2 0x426bc0
void GameEvent_dtor(void**);

namespace dice { namespace hfe {

class GrapplingHookContainerCreateEvent {
public:
    int m_unk_0x10;
    unsigned short m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;

    ~GrapplingHookContainerCreateEvent();
};

GrapplingHookContainerCreateEvent::~GrapplingHookContainerCreateEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2c8d0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_dtor_GrapplingHookContainerCreateEvent (0x426bc0)