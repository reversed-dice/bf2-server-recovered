// FUNCTION: BF2 0xa9c9b0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* g_game;              // 0x010c5420
extern int g_iid_IGameClient;     // 0x00c76020
extern void* g_serverSettings;    // 0x0108b660
typedef void* (*fn18_t)(void*, int);

long executeObjectMethod_0xa9c9b0(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) goto not_zero;
    {
        *(char*)((char*)p + 0x108) = 1;
        void* ss;
        void* game = g_game;
        if (game != 0) {
            void* client = ((fn18_t)*(void**)((char*)*(void**)game + 0x18))(game, g_iid_IGameClient);
            if (client != 0) {
                ss = 0;
                goto use;
            }
        }
        ss = g_serverSettings;
use:
        *(unsigned int*)((char*)p + 0x10c) = *(unsigned int*)((char*)ss + 0x88);
        return (long)((char*)p + 0x10c);
    }
not_zero:
    if (*(int*)((char*)p + 0x30) != 1) return 0;
    {
        unsigned int val = **(unsigned int**)((char*)p + 0x38);
        *(char*)((char*)p + 0x108) = 0;
        void* ss;
        void* game = g_game;
        if (game != 0) {
            void* client = ((fn18_t)*(void**)((char*)*(void**)game + 0x18))(game, g_iid_IGameClient);
            if (client != 0) {
                ss = 0;
                goto use2;
            }
        }
        ss = g_serverSettings;
use2:
        *(unsigned int*)((char*)ss + 0x88) = val;
        return 0;
    }
}
} } }
