// FUNCTION: BF2 0x629b70
extern "C" void fn_629990(void*, int, int);
extern "C" void* pad1(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    fn_629990((char*)self + 0x110, 0, 0);
    return (char*)self + 0x110;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    fn_629990((char*)self + 0x110, 0, 0);
    return (char*)self + 0x110;
}
extern "C" void* pad3(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_629990((char*)self + 0x110, 0, 0);
    return (char*)self + 0x110;
}
extern "C" void target_629b70(void* self, void* a, void* b, void* c, void* d)
{
    if (*(int*)((char*)self + 0x34)) {
        fn_629990(self, 0, 0);
    }
}

