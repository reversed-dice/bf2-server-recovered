// FUNCTION: BF2 0xac05a0
extern "C" void fn_6a9290(int);
extern "C" void* pad0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9290(t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9290(t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9290(t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad3(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6a9290(t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_ac05a0(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    fn_6a9290(0x1092d80);
ret0:
    return 0;
}

