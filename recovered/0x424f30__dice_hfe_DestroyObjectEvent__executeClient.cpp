// FUNCTION: BF2 0x424f30
namespace dice { namespace hfe {

class DestroyObjectEvent {
public:
    unsigned char pad0[2];
    unsigned short m_unk_0x2;
    unsigned char pad1[0xc];
    unsigned short m_unk_0x10;
    bool executeClient();
};

extern void* game;
extern unsigned int IID_IGameClient;

bool DestroyObjectEvent::executeClient() {
    void* pClient = ((void*(*)(void*, unsigned int))(*(void***)game)[3])(game, IID_IGameClient);
    if (pClient == 0) return false;
    ((void(*)(void*, unsigned short))(*(void***)pClient)[12])(pClient, m_unk_0x10);
    return true;
}

} }
// REVERSED_FUNCTION: dice_hfe_DestroyObjectEvent::executeClient (0x424f30)