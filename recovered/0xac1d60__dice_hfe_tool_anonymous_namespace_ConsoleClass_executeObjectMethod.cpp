// FUNCTION: BF2 0xac1d60
typedef void* (*vfn1)(void*);
extern "C" void fn_6a7110(int, void*);
extern "C" void* g_0112ee48;
extern "C" void* target_ac1d60(void* self)
{
    int m = *(int*)((char*)self + 0x30);
    if (m == 0) {
        *(char*)((char*)self + 0x108) = 1;
        void* g = g_0112ee48;
        void* r = ((vfn1*)*(void***)g)[0x120/8](g);
        *(void**)((char*)self + 0x110) = r;
        return (char*)self + 0x110;
    }
    if (m == 1) {
        void* p = *(void**)((char*)self + 0x38);
        void* s = *(void**)((char*)p + 0);
        *(char*)((char*)self + 0x108) = 0;
        fn_6a7110(0x1092d80, s);
    }
    return 0;
}
