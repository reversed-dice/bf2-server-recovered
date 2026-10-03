// FUNCTION: BF2 0x8ae070
extern "C" void fn_4d3840(void*);
extern "C" void* g_0108d9f0;
extern "C" void* pad1_8ae070(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_4d3840((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_8ae070(void* self)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_4d3840(g_0108d9f0);
ret0:
    return 0;
}

