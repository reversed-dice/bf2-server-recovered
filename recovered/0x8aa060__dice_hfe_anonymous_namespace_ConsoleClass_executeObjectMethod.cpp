// FUNCTION: BF2 0x8aa060
typedef void* (*vfn2)(void*, int*);
extern "C" void* fn_69de30(int);
extern "C" int g_0xc76048;
extern "C" int target_8aa060(void* self)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        void* p = *(void**)((char*)self + 0x38);
        int c = *(int*)((char*)p + 8);
        int b = *(int*)((char*)p + 4);
        int a = *(int*)p;
        int tmp[3];
        tmp[0] = a;
        tmp[1] = b;
        tmp[2] = c;
        *(char*)((char*)self + 0x108) = 0;
        void* x = fn_69de30(g_0xc76048);
        ((vfn2*)*(void***)x)[0x1d0/8](x, tmp);
    }
    return 0;
}
