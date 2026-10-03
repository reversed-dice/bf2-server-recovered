// FUNCTION: BF2 0x427730
namespace dice { namespace hfe {

void GameEvent_dtor(void** self);

class GrapplingHookContainerUpdateEvent {
public:
    unsigned int m_unk_0x10;
    unsigned int m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    ~GrapplingHookContainerUpdateEvent();
};

GrapplingHookContainerUpdateEvent::~GrapplingHookContainerUpdateEvent() {
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2cab0);
    GameEvent_dtor(reinterpret_cast<void**>(this));
    ::operator delete(this);
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerUpdateEvent_dtor_GrapplingHookContainerUpdateEvent (0x427730)