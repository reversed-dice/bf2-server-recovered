// FUNCTION: BF2 0x42f2c0
namespace dice { namespace hfe {
class GameEvent {
public:
    GameEvent();
};
class SetNightVisionEvent : public GameEvent {
public:
    SetNightVisionEvent(int param_1, bool param_2);
    unsigned int m_unk_0x10;
    unsigned char m_unk_0x14;
};
SetNightVisionEvent::SetNightVisionEvent(int param_1, bool param_2) {
    *(unsigned int*)((char*)this + 0x10) = (unsigned int)param_1;
    *(unsigned char*)((char*)this + 0x14) = (unsigned char)param_2;
    *(void**)this = (void*)0xb2deb0;
}
} }
// REVERSED_FUNCTION: dice_hfe_SetNightVisionEvent_SetNightVisionEvent::int_bool (0x42f2c0)