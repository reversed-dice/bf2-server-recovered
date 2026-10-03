// FUNCTION: BF2 0x9bc6e0
typedef void* (*vfn1)(void*);
typedef int (*vfn2)(void*);

extern "C" void* g_objectManager_9bc6e0;
extern "C" unsigned int g_cid_9bc6e0;

extern "C" long getActiveEffectBundle_9bc6e0(void)
{
    void* p = ((vfn1)(*(void***)g_objectManager_9bc6e0)[0x120/8])(g_objectManager_9bc6e0);
    if (__builtin_expect(p == 0, 1)) {
        return 0;
    }
    void* t = *(void**)((char*)p + 0x28);
    if (t == 0) {
        return 0;
    }
    if (((vfn2)(*(void***)t)[0x20/8])(t) != g_cid_9bc6e0) {
        return 0;
    }
    return (long)p;
}
