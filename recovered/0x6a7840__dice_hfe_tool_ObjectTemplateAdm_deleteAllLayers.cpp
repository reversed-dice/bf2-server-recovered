// FUNCTION: BF2 0x6a7840
extern "C" void fn_407608(void* self, int a, void* b, int c);

extern "C" void fn_6a7840(void* self)
{
    char* p = (char*)self;
    int n = 0;
    do {
        void* obj = *(void**)(p + 8);
        fn_407608(p + 8, 0, *(void* volatile*)((char*)obj - 0x18), 0);
        n++;
        p += 0x10;
    } while (n != 0x80);
}
