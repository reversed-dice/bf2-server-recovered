// FUNCTION: BF2 0x415af0
namespace dice { namespace hfe {

class GameEvent {
public:
    void* m_vptr;       // offset 0x00
    unsigned char m_pad[0x1c - sizeof(void*)];  // offset 0x08, to 0x1b

    GameEvent();
};

class PythonCommandEvent : public GameEvent {
public:
    unsigned int m_field1;  // offset 0x1c
    unsigned int m_field2;  // offset 0x20
    unsigned int m_field3;  // offset 0x24
    unsigned int m_field4;  // offset 0x28
};

void* operator new(unsigned long size);

extern "C" void dice_hfe_GameEvent_GameEvent(void* self);

template<typename T>
class GameEventMakerMaker {
public:
    T* createEvent();
};

template<>
PythonCommandEvent* GameEventMakerMaker<PythonCommandEvent>::createEvent() {
    PythonCommandEvent* ev = static_cast<PythonCommandEvent*>(operator new(0x30));
    dice_hfe_GameEvent_GameEvent(ev);
    ev->m_vptr = reinterpret_cast<void*>(0xb2d970);
    ev->m_field1 = 0;
    ev->m_field2 = 0;
    ev->m_field3 = 0;
    ev->m_field4 = 0;
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_PythonCommandEvent_createEvent (0x415af0)