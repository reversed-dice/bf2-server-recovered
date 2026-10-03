// FUNCTION: BF2 0xad9670
extern "C" void* fn_ad4140(void*);
extern "C" void fn_6b7070(void*);
extern "C" void* pad1_a9670(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6b7070(fn_ad4140((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad2_a9670(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_6b7070(fn_ad4140((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" void* pad3_a9670(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_6b7070(fn_ad4140((char*)self + 0x110));
    return (char*)self + 0x110;
}
extern "C" int target_a9670(void* self, void* a, void* b, void* c, void* d)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = fn_ad4140(self);
    fn_6b7070(x);
ret0:
    return 0;
}

