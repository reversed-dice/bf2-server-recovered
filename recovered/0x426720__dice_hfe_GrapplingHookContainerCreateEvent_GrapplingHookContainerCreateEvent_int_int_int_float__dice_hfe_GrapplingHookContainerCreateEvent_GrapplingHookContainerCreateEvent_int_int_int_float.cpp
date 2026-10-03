// FUNCTION: BF2 0x426720
void GameEvent_GameEvent(void*);

namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

class GrapplingHookContainerCreateEvent : public GameEvent {
public:
    unsigned int m_field_10;
    unsigned int m_field_14;
    unsigned int m_field_18;
    unsigned int m_field_1c;

    GrapplingHookContainerCreateEvent(unsigned int, unsigned int, unsigned int, float);
};

GrapplingHookContainerCreateEvent::GrapplingHookContainerCreateEvent(unsigned int a1, unsigned int a2, unsigned int a3, float a4) {
    GameEvent_GameEvent(this);
    m_field_10 = a1;
    m_field_14 = a2;
    m_field_18 = a3;
    m_field_1c = *reinterpret_cast<unsigned int*>(&a4);
    vptr = reinterpret_cast<void*>(0xb2c8d0);
}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerCreateEvent_GrapplingHookContainerCreateEvent_int_int_int_float (0x426720)