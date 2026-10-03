// FUNCTION: BF2 0xaf8960
typedef void* (*vfn1)(void*);
extern "C" void* g_01140ad8;
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x120/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x120/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad3(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x120/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_af8960(void* self, void* a, void* b, void* c, void* d)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_01140ad8;
    ((vfn1*)*(void***)x)[0x120/8](x);
ret0:
    return 0;
}

