// FUNCTION: BF2 0x9006e0
extern "C" void* fn_69de30(int);
extern "C" void fn_50d440(void*, int*);
extern "C" int g_0xc7cf20;
extern "C" int target_9006e0(void* self)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        void* p = *(void**)((char*)self + 0x38);
        int e1 = *(int*)((char*)p + 4);
        int e2 = *(int*)p;
        int tmp[2];
        tmp[0] = e2;
        tmp[1] = e1;
        *(char*)((char*)self + 0x108) = 0;
        void* x = fn_69de30(g_0xc7cf20);
        fn_50d440(x, tmp);
    }
    return 0;
}
