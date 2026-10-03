// FUNCTION: BF2 0x78c620
extern "C" void fn_78c620(void* self)
{
    *(void**)self = (void*)0xba50f0;
    void* p = *(void**)((char*)self + 0x30);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    p = *(void**)((char*)self + 0x38);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    p = *(void**)((char*)self + 0x40);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    p = *(void**)((char*)self + 0x48);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    p = *(void**)((char*)self + 0x50);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    p = *(void**)((char*)self + 0x58);
    if (p) {
        void** vt = *(void***)p;
        ((void (*)(void*))vt[1])(p);
    }
    *(void**)self = (void*)0xba53b0;
}
