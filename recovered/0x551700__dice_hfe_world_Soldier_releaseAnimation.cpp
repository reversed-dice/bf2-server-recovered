// FUNCTION: BF2 0x551700
extern "C" void fn_6bb180(void* p);
extern "C" void fn_6c5d30(void* p);
extern "C" void operator delete(void* p);

extern "C" void fn_551700(void* self)
{
    void* p = *(void**)((char*)self + 0x3f0);
    if (p) {
        fn_6bb180(p);
        operator delete(p);
        *(void**)((char*)self + 0x3f0) = 0;
    }
    char* b = (char*)self;
    int n = 2;
    do {
        void* q = *(void**)(b + 0x428);
        if (q) {
            fn_6c5d30(q);
            operator delete(q);
            *(void**)(b + 0x428) = 0;
        }
        void* r = *(void**)(b + 0x430);
        if (r) {
            void** vt = *(void***)r;
            ((void (*)(void*))vt[1])(r);
            *(void**)(b + 0x430) = 0;
        }
        b += 0x10;
    } while (--n != 0);
}
