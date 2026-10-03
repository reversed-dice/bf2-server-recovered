// FUNCTION: BF2 0x754090
extern "C" void* fn_0074eef0(void*);
typedef void* (*vfn1)(void*);
extern "C" void* pad0(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_0074eef0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_0074eef0((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" int target_0x754090(void* self, void* p0, void* p1, void* p2, void* p3, void* p4, void* p5)
{
    if (*(int*)((char*)self + 0x30)) goto ret0;
    *(char*)((char*)self + 0x108) = 0x0;
    void* x = fn_0074eef0(self);
    ((vfn1*)*(void***)x)[0x30](x);
ret0:
    return 0;
}
