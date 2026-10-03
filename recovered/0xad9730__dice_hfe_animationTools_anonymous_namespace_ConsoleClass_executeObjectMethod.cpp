// FUNCTION: BF2 0xad9730
extern "C" void* fn_ad4180(void*);
extern "C" void fn_6d0380(void*);
extern "C" void* pad1_a9730(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d0380(fn_ad4180((char*)self + t));
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2_a9730(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_6d0380(fn_ad4180((char*)self + t));
    return (char*)self + 0x110 + t;
}
extern "C" int target_a9730(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = fn_ad4180(self);
    fn_6d0380(x);
ret0:
    return 0;
}

