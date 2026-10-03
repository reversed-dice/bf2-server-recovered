// FUNCTION: BF2 0x8ae250
extern "C" void fn_6d20d0(void*);
extern "C" void fn_4db530(void*, int, int);
extern "C" void* g_0108d9f0;
extern "C" void* pad0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_8ae250(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_4db530(g_0108d9f0, 0, 0);
ret0:
    return 0;
}

