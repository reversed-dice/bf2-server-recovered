// FUNCTION: BF2 0x8adfa0
typedef void* (*vfn1)(void*);
extern "C" void* g_0108d9f0;
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x48/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_8adfa0(void* self, void* a, void* b, void* c)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = *(void**)((char*)g_0108d9f0 + 0x30);
    ((vfn1*)*(void***)x)[0x48/8](x);
ret0:
    return 0;
}

