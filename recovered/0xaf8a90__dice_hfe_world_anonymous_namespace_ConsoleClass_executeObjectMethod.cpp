// FUNCTION: BF2 0xaf8a90
typedef void* (*vfn3)(void*, float, int);
extern "C" void* g_01140ad8;
extern "C" int target_af8a90(void* self)
{
    if (*(int*)((char*)self + 0x30) == 2) {
        void* p = *(void**)((char*)self + 0x38);
        int i = *(int*)p;
        void* q = *(void**)((char*)self + 0x40);
        float v = *(float*)q;
        *(char*)((char*)self + 0x108) = 0;
        void* g = g_01140ad8;
        ((vfn3*)*(void***)g)[0x128/8](g, v, i);
    }
    return 0;
}
