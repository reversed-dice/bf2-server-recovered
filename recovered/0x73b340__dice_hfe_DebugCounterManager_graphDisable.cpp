// FUNCTION: BF2 0x73b340
extern "C" void fn_408228(void* a, int b, int c);

extern "C" void fn_73b340(void* self, unsigned char arg)
{
    fn_408228((char*)self + 0x28, 0xbb25f1, 0);
    void* q = *(void**)((char*)self + 0x30);
    if (q) {
        void* obj = *(void**)((char*)self + 0x38);
        void** vt = *(void***)obj;
        ((void (*)(void*, void*))vt[5])(obj, q);
    }
}
