// FUNCTION: BF2 0xac4ce0
extern "C" void fn_408238(void*, void*);
extern "C" void* g_1092d70;

extern "C" void* pad1_ac4ce0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_408238((char*)self + 0x110, g_1092d70);
    return (char*)self + 0x110;
}
extern "C" void* pad2_ac4ce0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_408238((char*)self + 0x110, g_1092d70);
    return (char*)self + 0x110;
}
extern "C" void* pad3_ac4ce0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_408238((char*)self + 0x110, g_1092d70);
    return (char*)self + 0x110;
}

extern "C" void* executeObjectMethod_ac4ce0(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    fn_408238((char*)self + 0x110, (void*)0x1092d70);
    return (char*)self + 0x110;
}
