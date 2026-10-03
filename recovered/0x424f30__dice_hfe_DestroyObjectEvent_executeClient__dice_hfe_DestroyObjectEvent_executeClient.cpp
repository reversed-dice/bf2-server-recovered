// FUNCTION: BF2 0x424f30
namespace dice { namespace hfe {

extern void* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameClient;

class DestroyObjectEvent {
public:
    char _pad0[0x02];
    unsigned short m_unk_0x2;
    char _pad1[0x0C];
    unsigned short m_unk_0x10;

    bool executeClient();
};

bool DestroyObjectEvent::executeClient() {
    union { void* vp; void* (*fp)(void*, unsigned int); } u;
    u.vp = (*reinterpret_cast<void***>(dice_hfe_game))[3];
    void* client = u.fp(dice_hfe_game, dice_hfe_IID_IGameClient);
    if (!client) return false;

    union { void* vp; void (*fp)(void*, unsigned int); } u2;
    u2.vp = (*reinterpret_cast<void***>(client))[12];
    u2.fp(client, m_unk_0x10);
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent_executeClient (0x424f30)