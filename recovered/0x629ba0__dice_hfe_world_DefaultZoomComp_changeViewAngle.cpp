// FUNCTION: BF2 0x629ba0
extern "C" char fn_629540(void*);
extern "C" void fn_629990(void*, int, int);
extern "C" void* pad1(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    int t = (int)(long)a + (int)(long)b;
    fn_629540((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void* pad2(void* self, void* a, void* b, void* c) {
    if (*(int*)((char*)self + 0x8)) return 0;
    int t = (int)(long)a + (int)(long)b;
    fn_629540((char*)self + t);
    return (char*)self + 0x110 + t;
}
extern "C" void target_629ba0(void* self, void* a, void* b, void* c, void* d, void* e, void* f)
{
    if (*(int*)((char*)self + 0x34)) {
        if (!fn_629540(self)) {
            fn_629990(self, 0, 0);
        }
    }
}

