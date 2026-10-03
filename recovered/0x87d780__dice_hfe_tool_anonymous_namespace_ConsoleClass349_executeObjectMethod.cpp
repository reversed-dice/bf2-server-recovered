// FUNCTION: BF2 0x87d780
extern "C" char fn_468230(void*);
extern "C" void* g_0108b620;
extern "C" void* pad1_87d780(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_468230((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2_87d780(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_468230((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad3_87d780(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_468230((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad4_87d780(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_468230((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* target_87d780(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_468230(g_0108b620);
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
