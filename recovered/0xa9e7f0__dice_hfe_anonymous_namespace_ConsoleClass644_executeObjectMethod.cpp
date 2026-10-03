// FUNCTION: BF2 0xa9e7f0
namespace dice { namespace hfe { namespace anonymous_namespace {
extern void* g_game;              // 0x010c5420
extern int g_iid_IGameClient;     // 0x00c76020
extern void* g_serverSettings;    // 0x0108b660
extern char func_0x00469150(void*);  // ServerSettings_load
typedef void* (*fn18_t)(void*, int);
long executeObjectMethod_0xa83800(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) {
        return 0;
    }
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
    *(char*)((char*)p + 0x10a) = func_0x00469150(ss);
    return (long)((char*)p + 0x10a);
}
} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_ConsoleClass643_executeObjectMethod (0xa83800)
