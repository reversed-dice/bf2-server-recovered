// FUNCTION: BF2 0x630bb0
extern "C" void operator delete(void* p);
extern "C" void fn_5853b0(void* self);

extern "C" void fn_630bb0(void* self)
{
    *(void**)self = (void*)0xb81690;
    *(void**)((char*)self + 0x100) = (void*)0xb81a10;
    *(void**)((char*)self + 0x238) = (void*)0xb81a48;
    int* p = *(int**)((char*)self + 0x320);
    if (p && --*p == 0)
        operator delete(p);
    void* q = *(void**)((char*)self + 0x310);
    if (q) {
        void** vt = *(void***)q;
        ((void (*)(void*))vt[3])(q);
    }
    fn_5853b0(self);
    operator delete(self);
}
