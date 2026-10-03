// FUNCTION: BF2 0x87bdc0
extern "C" char fn_467a30(void*);
extern "C" void* g_0108b620;
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_467a30((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* target_87bdc0(void* self, void* a, void* b, void* c)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_467a30(g_0108b620);
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
