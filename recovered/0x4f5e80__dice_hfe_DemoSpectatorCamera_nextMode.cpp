// FUNCTION: BF2 0x4f5e80
extern "C" void fn_4f5d60(void*, int);
extern "C" void fn_4f5da0(void*, int);
extern "C" void* fn_4f4b00(void*);
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_4f5d60((char*)self + t, t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    *(char*)((char*)self + 0xc) = 1;
    int t = (int)(long)a + (int)(long)b;
    fn_4f5d60((char*)self + t, t);
    return (char*)self + 0x110 + t;
}
extern "C" void target_4f5e80(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    if (*(int*)((char*)self + 0x20)) goto tail;
    fn_4f5d60(self, 1);
    fn_4f5da0(self, 0);
    if (fn_4f4b00(self)) return;
tail:
    fn_4f5d60(self, 0);
}
