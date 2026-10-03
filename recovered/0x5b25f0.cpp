extern "C" char g_forceDestroy;
extern "C" void* g_gameLogic;
typedef int (*vfn0)(void*);
typedef void (*vfn1)(void*, float);
extern "C" void playEffect_5b1b60(void*);

extern "C" void destroy_5b25f0(void* self)
{
    if (*(char*)&g_forceDestroy != 0) {
        return;
    }
    void* gl = g_gameLogic;
    if (gl && ((vfn0)(*(void***)gl)[0x2b0/8])(gl) == 1) {
        float f = -*(float*)((char*)(*(void**)((char*)self + 0x10)) + 0x164);
        ((vfn1)(*(void***)self)[0x70/8])(self, f);
        playEffect_5b1b60(self);
    }
}
