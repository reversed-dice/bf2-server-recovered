// FUNCTION: BF2 0x5b95e0
typedef void* (*vfn1)(void*);
typedef char (*vfn2)(void*);

extern "C" void* g_gameLogic_5b95e0;

extern "C" long is1P_5b95e0(void* self)
{
    void* obj = *(void**)((char*)self + 0x18);
    if (obj) {
        void* p = ((vfn1)(*(void***)obj)[0x380/8])(obj);
        if (p) {
            if (((vfn2)(*(void***)p)[0x310/8])(p)) {
                return 1;
            }
            if (__builtin_expect(((vfn2)(*(void***)g_gameLogic_5b95e0)[0x278/8])(g_gameLogic_5b95e0) != 0, 1)) {
                if (((vfn2)(*(void***)p)[0xc8/8])(p)) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
