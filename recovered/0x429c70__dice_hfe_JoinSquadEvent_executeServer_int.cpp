// FUNCTION: BF2 0x429c70
namespace dice { namespace hfe {

extern long* game;
extern unsigned int IID_IGameServer;
extern long* squadManager;

extern "C" unsigned int JoinSquadEvent_executeServer(long param_1, unsigned int param_2) {
    typedef long (*f1_t)(long*, unsigned int);
    long lVar1 = ((f1_t)(*(long**)game)[3])(game, IID_IGameServer);
    unsigned int uVar2 = 0;
    if (lVar1 != 0) {
        uVar2 = 1;
        if (squadManager != 0) {
            typedef void (*f2_t)(long*, unsigned char, unsigned char, unsigned int);
            ((f2_t)(*(long**)squadManager)[0xc])(squadManager, *(unsigned char*)(param_1+0x10), *(unsigned char*)(param_1+0x12), param_2);
            uVar2 = 1;
        }
    }
    return uVar2;
}
} }
