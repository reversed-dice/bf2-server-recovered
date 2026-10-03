// FUNCTION: BF2 0x73fb30
extern "C" void operator delete(void* p);
extern "C" void fn_73fb30(void* p);

extern "C" void fn_73fb30(void* self)
{
    char* p = (char*)self;
    int n = 0x200;
    do {
        void* q = *(void**)(p + 0x78);
        if (q) {
            fn_73fb30(q);
            operator delete(q);
        }
        p += 8;
    } while (--n != 0);
}
