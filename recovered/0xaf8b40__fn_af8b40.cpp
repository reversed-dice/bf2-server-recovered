// FUNCTION: BF2 0xaf8b40
typedef void* (*vfn1)(void*);
extern "C" void* g_01140ad8;
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x138/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    ((vfn1*)*(void***)((char*)self + t))[0x138/8]((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_af8b40(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_01140ad8;
    ((vfn1*)*(void***)x)[0x138/8](x);
ret0:
    return 0;
}

