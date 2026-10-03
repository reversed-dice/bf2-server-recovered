typedef void* (*vfn1)(void*);
extern "C" void* g_0112ee40;
extern "C" int fn_6a9830(int, void*);
extern "C" void* pad0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9830(t, (char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9830(t, (char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9830(t, (char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad3(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9830(t, (char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_ac0850(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = g_0112ee40;
    void* r = ((vfn1*)*(void***)x)[0xa0/8](x);
    fn_6a9830(0x1092d80, r);
ret0:
    return 0;
}

