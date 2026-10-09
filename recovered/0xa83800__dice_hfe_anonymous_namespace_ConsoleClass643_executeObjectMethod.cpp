// FUNCTION: BF2 0xa83800
namespace dice { namespace hfe {

extern void* g_game;            // 0x010c5420
extern int g_IID_IGameClient;   // 0x00c76020
extern void* g_serverSettings;  // 0x0108b660

extern "C" unsigned char dice_hfe_ServerSettings_load(void* ss);

unsigned char* pad0(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) return 0;
    *(char*)((char*)p + 0x108) = 1;

    void* ss;
    void* game = g_game;
    if (__builtin_expect(game != 0, 1)) {
        void* vtbl = *(void**)game;
        typedef void* (*fn18_t)(void*, int);
        void* client = ((fn18_t)*(void**)((char*)vtbl + 0x18))(game, g_IID_IGameClient);
        if (client != 0) { ss = 0; goto use; }
    }
    ss = g_serverSettings;
use:
    *(unsigned char*)((char*)p + 0x10a) = dice_hfe_ServerSettings_load(ss);
    return (unsigned char*)((char*)p + 0x10a);
}

} }

// FUNCTION: BF2 0xa83800
namespace dice { namespace hfe {

extern void* g_game;            // 0x010c5420
extern int g_IID_IGameClient;   // 0x00c76020
extern void* g_serverSettings;  // 0x0108b660

extern "C" unsigned char dice_hfe_ServerSettings_load(void* ss);

unsigned char* pad1(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) return 0;
    *(char*)((char*)p + 0x108) = 1;

    void* ss;
    void* game = g_game;
    if (__builtin_expect(game != 0, 1)) {
        void* vtbl = *(void**)game;
        typedef void* (*fn18_t)(void*, int);
        void* client = ((fn18_t)*(void**)((char*)vtbl + 0x18))(game, g_IID_IGameClient);
        if (client != 0) { ss = 0; goto use; }
    }
    ss = g_serverSettings;
use:
    *(unsigned char*)((char*)p + 0x10a) = dice_hfe_ServerSettings_load(ss);
    return (unsigned char*)((char*)p + 0x10a);
}

} }

// FUNCTION: BF2 0xa83800
namespace dice { namespace hfe {

extern void* g_game;            // 0x010c5420
extern int g_IID_IGameClient;   // 0x00c76020
extern void* g_serverSettings;  // 0x0108b660

extern "C" unsigned char dice_hfe_ServerSettings_load(void* ss);

unsigned char* executeObjectMethod(void* p) {
    if (*(int*)((char*)p + 0x30) != 0) return 0;
    *(char*)((char*)p + 0x108) = 1;

    void* ss;
    void* game = g_game;
    if (__builtin_expect(game != 0, 1)) {
        void* vtbl = *(void**)game;
        typedef void* (*fn18_t)(void*, int);
        void* client = ((fn18_t)*(void**)((char*)vtbl + 0x18))(game, g_IID_IGameClient);
        if (client != 0) { ss = 0; goto use; }
    }
    ss = g_serverSettings;
use:
    *(unsigned char*)((char*)p + 0x10a) = dice_hfe_ServerSettings_load(ss);
    return (unsigned char*)((char*)p + 0x10a);
}

} }
