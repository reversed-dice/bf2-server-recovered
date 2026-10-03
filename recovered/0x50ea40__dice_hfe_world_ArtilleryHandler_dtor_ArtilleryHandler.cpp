// FUNCTION: BF2 0x50ea40
extern "C" void operator delete(void* p);
extern "C" void fn_5103e0(void* sub);

extern "C" void fn_50ea40(void* self)
{
    void* p = *(void**)((char*)self + 0x20);
    *(void**)self = (void*)0xb3e8d0;
    if (p) {
        void* q = *(void**)((char*)p + 8);
        if (q) {
            void* g = *(void**)0x10c5420;
            void** vt = *(void***)g;
            ((void (*)(void*, void*))vt[0x28])(g, q);
        }
    }
    int* p2 = *(int**)((char*)self + 0x20);
    if (p2 && --*p2 == 0)
        operator delete(p2);
    fn_5103e0((char*)self + 8);
}
