// FUNCTION: BF2 0xad95b0
typedef void* (*vfn1)(void*);
extern "C" void* g_010935c8;
extern "C" void fn_6b1eb0(void*);
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x48/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_ad95b0(void* self, void* a, void* b, void* c, void* d)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_010935c8;
    void* r = ((vfn1*)*(void***)x)[0x48/8](x);
    fn_6b1eb0(r);
ret0:
    return 0;
}
