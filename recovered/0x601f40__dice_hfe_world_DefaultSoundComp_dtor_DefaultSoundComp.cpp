// FUNCTION: BF2 0x601f40
extern "C" void operator delete(void* p);

extern "C" void fn_601f40(void* self)
{
    *(void**)self = (void*)0xb75fb0;
    *(void**)((char*)self + 0x20) = (void*)0xb76118;
    char* p = (char*)self;
    int n = 0xb;
    do {
        void* q = *(void**)(p + 0x40);
        if (q) {
            void** vt = *(void***)q;
            ((void (*)(void*))vt[1])(q);
        }
        p += 8;
    } while (--n != 0);
    operator delete(*(void**)((char*)self + 0x98));
    *(void**)((char*)self + 0x20) = (void*)0xb76330;
    *(void**)self = (void*)0xb70110;
}
