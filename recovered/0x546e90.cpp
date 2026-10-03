extern "C" void* g_gameLogic;
extern "C" void fn1_58ac40(void*);
extern "C" void fn2_5741c0(void*);
typedef void (*vfn1)(void*);
typedef void (*vfn2)(void*, void*);
typedef void (*vfn3)(void*, float);

extern "C" void enableCachedObject_546e90(void* self)
{
    fn1_58ac40(self);
    void* r = *(void**)((char*)self + 0x68);
    fn2_5741c0(self);
    if (r) {
        ((vfn1)(*(void***)r)[0x90/8])(r);
    }
    ((vfn2)(*(void***)g_gameLogic)[0x328/8])(g_gameLogic, self);
    ((vfn3)(*(void***)self)[0x480/8])(self, *(float*)0xb2f3bc);
}
