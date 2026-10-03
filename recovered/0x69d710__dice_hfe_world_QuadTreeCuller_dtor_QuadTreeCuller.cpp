// FUNCTION: BF2 0x69d710
extern "C" void fn_69db50(void* self, void* arg);
extern "C" void fn_69d910(void* sub);
extern "C" void operator delete(void* p);

extern "C" void fn_69d680(void* self)
{
    void* arr = *(void**)((char*)self + 0xf8);
    *(void**)self = (void*)0xb8edb0;
    if (arr) {
        char* p = (char*)arr;
        int n = 0;
        do {
            fn_69db50(self, *(void**)(p + 0x10));
            p += 8;
            n++;
        } while (n != 4);
        fn_69d910((char*)arr + 0x40);
        operator delete(arr);
    }
}
