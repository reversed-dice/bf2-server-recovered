// FUNCTION: BF2 0x516900
extern "C" void fn_573ec0(void* self);

extern "C" void fn_516900(void* self)
{
    *(void**)self = (void*)0xb410d0;
    *(void**)((char*)self + 0x100) = (void*)0xb413e0;
    void* p = *(void**)((char*)self + 0x70);
    if (p) {
        void** vt = *(void***)p;
        void* r = ((void* (*)(void*))vt[0x34])(p);
        if (r) {
            void* p2 = *(void**)((char*)self + 0x70);
            void** vt2 = *(void***)p2;
            void* r2 = ((void* (*)(void*))vt2[0x34])(p2);
            void** vt3 = *(void***)r2;
            ((void (*)(void*))vt3[2])(r2);
            void* p3 = *(void**)((char*)self + 0x70);
            void** vt4 = *(void***)p3;
            ((void (*)(void*, int))vt4[0x33])(p3, 0);
        }
    }
    fn_573ec0(self);
}
