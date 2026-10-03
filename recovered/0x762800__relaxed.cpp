// FUNCTION: BF2 0x762800
extern "C" void fn_7627c0(void* self)
{
    *(void**)self = (void*)0xba06d0;
    char* p = (char*)self;
    int n = 4;
    do {
        void* q = *(void**)(p + 0x10);
        if (q) {
            void** vt = *(void***)q;
            ((void (*)(void*))vt[1])(q);
        }
        p += 8;
    } while (--n != 0);
}
