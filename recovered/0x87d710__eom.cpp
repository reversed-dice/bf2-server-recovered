// FUNCTION: BF2 0x87d710
extern "C" void fn_6d20d0(void*);
extern "C" void* g_0108b620;
extern "C" void* pad0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d20d0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_0x87d710(void* self, void* p0, void* p1, void* p2, void* p3, void* p4, void* p5)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_6d20d0(g_0108b620);
ret0:
    return 0;
}
