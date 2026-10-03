// FUNCTION: BF2 0xad9900
typedef void* (*vfn1)(void*);
extern "C" void* g_010935c8;
extern "C" void* pad1_a9900(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x50/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2_a9900(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x50/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad3_a9900(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x50/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_a9900(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_010935c8;
    ((vfn1*)*(void***)x)[0x50/8](x);
ret0:
    return 0;
}

