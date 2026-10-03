// FUNCTION: BF2 0x762840
extern "C" void operator delete(void* p);

extern "C" void fn_762840(void* self)
{
    *(void**)self = (void*)0xba06d0;
    char* p = (char*)self;
    int n = 0;
    do {
        void* q = *(void**)(p + 0x10);
        if (q) {
            void** vt = *(void***)q;
            ((void (*)(void*))vt[1])(q);
        }
        n++;
        p += 8;
    } while (n != 4);
    operator delete(self);
}
