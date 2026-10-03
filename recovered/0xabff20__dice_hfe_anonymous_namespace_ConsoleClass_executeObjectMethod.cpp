// FUNCTION: BF2 0xabff20
extern "C" char fn_6ac140(int, int);
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6ac140(0x1092d60, 0x1092d80);
    return (char*)self + 0x110;
}
extern "C" void* target_abff20(void* self, void* a, void* b, void* c)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_6ac140(0x1092d80, 0x1092d60);
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
