// FUNCTION: BF2 0xac0470
extern "C" char fn_6af5a0(int, int, int);
extern "C" void* pad0(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    return (char*)self + 0x110;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    return (char*)self + 0x110;
}
extern "C" void* pad2(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    return (char*)self + 0x110;
}
extern "C" void* pad3(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    return (char*)self + 0x110;
}
extern "C" void* pad4(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    return (char*)self + 0x110;
}
extern "C" void* target_ac0470(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) return 0;
    *(char*)((char*)self + 0x108) = 1;
    char c2 = fn_6af5a0(0x1092d80, 0x1092d68, 0x1092d60);
    *(char*)((char*)self + 0x10a) = c2;
    return (char*)self + 0x10a;
}
