// FUNCTION: BF2 0x763d90
extern "C" void fn_763d50(void* self)
{
    *(void**)self = (void*)0xba0950;
    char* p = (char*)self;
    int n = 9;
    do {
        void* q = *(void**)(p + 0x10);
        if (q) {
            void** vt = *(void***)q;
            ((void (*)(void*))vt[12])(q);
            q = *(void**)(p + 0x10);
            vt = *(void***)q;
            ((void (*)(void*))vt[1])(q);
        }
        p += 8;
    } while (--n != 0);
}
