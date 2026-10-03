// FUNCTION: BF2 0xad94f0
typedef void* (*vfn1)(void*);
extern "C" void* g_010935c8;
extern "C" void fn_6b32f0(void*);
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x48/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_ad94f0(void* self, void* a, void* b, void* c)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_010935c8;
    void* r = ((vfn1*)*(void***)x)[0x48/8](x);
    fn_6b32f0(r);
ret0:
    return 0;
}

