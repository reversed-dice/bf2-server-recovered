// FUNCTION: BF2 0xad9a80
extern "C" void fn_6d20d0(void*);
extern "C" void* g_10a3140;
extern "C" void* pad0_ad9a80(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad1_ad9a80(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2_ad9a80(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad3_ad9a80(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}

extern "C" int executeObjectMethod_ad9a80(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_6d20d0(g_10a3140);
ret0:
    return 0;
}

