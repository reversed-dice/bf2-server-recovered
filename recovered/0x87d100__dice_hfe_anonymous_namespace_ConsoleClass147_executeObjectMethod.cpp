// FUNCTION: BF2 0x87d100
typedef void* (*vfn1)(void*);
extern "C" void* g_010b8c08;
extern "C" void* pad1_87d100(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x1b8/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad2_87d100(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x1b8/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad3_87d100(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    ((vfn1*)*(void***)((char*)self + 0x110))[0x1b8/8]((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_87d100(void* self, void* a, void* b, void* c, void* d)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_010b8c08;
    ((vfn1*)*(void***)x)[0x1b8/8](x);
ret0:
    return 0;
}
