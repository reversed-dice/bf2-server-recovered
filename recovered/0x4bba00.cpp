extern "C" void* g_gameLogic;
extern "C" void* g_spawnManager;
typedef char (*vfn0)(void*);
typedef void (*vfn1)(void*, void*);
extern "C" void objectDestroy_68a3f0(void*, bool);

extern "C" void destroy_4bba00(void* self, bool flag)
{
    if (!((vfn0)(*(void***)g_gameLogic)[0x450/8])(g_gameLogic)) {
        ((vfn1)(*(void***)g_spawnManager)[0x38/8])(g_spawnManager, (char*)self + 0x218);
    }
    objectDestroy_68a3f0(self, flag);
}
