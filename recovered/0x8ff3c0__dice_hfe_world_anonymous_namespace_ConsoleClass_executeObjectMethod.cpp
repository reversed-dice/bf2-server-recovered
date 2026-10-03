// FUNCTION: BF2 0x8ff3c0
extern "C" void* fn_69de30(int);
extern "C" void fn_558120(void*, int, int*);
extern "C" int g_0xc7d03c;
extern "C" int target_8ff3c0(void* self)
{
    if (*(int*)((char*)self + 0x30) == 2) {
        void* p = *(void**)((char*)self + 0x38);
        int b = *(int*)p;
        void* q = *(void**)((char*)self + 0x40);
        int c = *(int*)((char*)q + 8);
        int d = *(int*)((char*)q + 4);
        int e = *(int*)q;
        int tmp[3];
        tmp[0] = e;
        tmp[1] = d;
        tmp[2] = c;
        *(char*)((char*)self + 0x108) = 0;
        void* x = fn_69de30(g_0xc7d03c);
        fn_558120(x, b, tmp);
    }
    return 0;
}
