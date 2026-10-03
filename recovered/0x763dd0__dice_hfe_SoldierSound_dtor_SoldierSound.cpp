// FUNCTION: BF2 0x763dd0
extern "C" void operator delete(void* p);

extern "C" void fn_763dd0(void* self)
{
    *(void**)self = (void*)0xba0950;
    char* p = (char*)self;
    int n = 0;
    do {
        void* q = *(void**)(p + 0x10);
        if (q) {
            void** vt = *(void***)q;
            ((void (*)(void*))vt[12])(q);
            q = *(void**)(p + 0x10);
            vt = *(void***)q;
            ((void (*)(void*))vt[1])(q);
        }
        n++;
        p += 8;
    } while (n != 9);
    operator delete(self);
}
