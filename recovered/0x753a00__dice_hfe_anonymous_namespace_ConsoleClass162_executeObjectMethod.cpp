// FUNCTION: BF2 0x753a00
extern "C" void* fn_74eef0(void*);
typedef void* (*vfn1)(void*);
extern "C" void* pad1_753a00(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_74eef0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad2_753a00(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    fn_74eef0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" void* pad3_753a00(void* self) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(int*)((char*)self + 0xc) = 1;
    fn_74eef0((char*)self + 0x110);
    return (char*)self + 0x110;
}
extern "C" int target_753a00(void* self, void* a, void* b, void* c, void* d)
{
    void* x;
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0;
    x = fn_74eef0(self);
    ((vfn1*)*(void***)x)[0xf8/8](x);
ret0:
    return 0;
}
