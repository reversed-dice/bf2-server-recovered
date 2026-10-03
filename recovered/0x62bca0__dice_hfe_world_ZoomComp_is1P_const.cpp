// FUNCTION: BF2 0x62bca0
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*);
typedef char (*vfn3)(void*);

extern "C" void* g_playerManager_62bca0;

extern "C" int is1P_62bca0(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 0x18))[0x380/8])(*(void**)((char*)self + 0x18));
    if (p) {
        void* g = ((vfn2)(*(void***)g_playerManager_62bca0)[0x60/8])(g_playerManager_62bca0);
        if (p == g && ((vfn3)(*(void***)p)[0x310/8])(p)) {
            return 1;
        }
    }
    return 0;
}
