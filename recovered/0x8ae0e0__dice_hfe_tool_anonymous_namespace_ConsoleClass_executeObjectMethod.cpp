// FUNCTION: BF2 0x8ae0e0
extern "C" void fn_6d20d0(void*);
extern "C" void fn_4da9e0(void*);
extern "C" void* g_0108d9f0;
extern "C" void* pad1_8ae0e0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6d20d0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad2_8ae0e0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6d20d0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad3_8ae0e0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_6d20d0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_8ae0e0(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_4da9e0(g_0108d9f0);
ret0:
    return 0;
}

