// FUNCTION: BF2 0x422e90
namespace dice { namespace hfe {

class UpdateTriggerEvent {
public:
    void eventReceivedByRemote(void* param_2);

    unsigned int m_unk_0x2;
    unsigned int m_unk_0x3;
    unsigned int m_unk_0x4;
    unsigned int m_unk_0x5;
    unsigned int m_unk_0x6;
    unsigned int m_unk_0x10;
    unsigned short m_unk_0x14;
    unsigned int m_unk_0x18;
    unsigned int m_unk_0x1C;
    unsigned int m_unk_0x20;
    unsigned int m_unk_0x24;
    unsigned int m_unk_0x28;
    unsigned int m_unk_0x2C;
    unsigned int m_unk_0x30;
    unsigned int m_unk_0x34;
};

extern void* dice_hfe_game;

void UpdateTriggerEvent::eventReceivedByRemote(void* param_2) {
    typedef void (*VtableFunc)(void*, unsigned int, unsigned int);
    ((VtableFunc)(*(unsigned long long*)(*(unsigned long long*)dice_hfe_game + 0xe0)))(
        dice_hfe_game, *(unsigned int*)param_2, *(unsigned short*)((char*)this + 0x14));
}

} }
// REVERSED_FUNCTION: dice_hfe_CreateObjectEvent_eventReceivedByRemote_voidptr (0x434650)
// REVERSED_FUNCTION: dice_hfe_CreateObjectEvent_eventReceivedByRemote_voidptr (0x422e90)
