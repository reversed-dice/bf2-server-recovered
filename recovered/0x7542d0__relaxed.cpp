// FUNCTION: BF2 0x7542d0
typedef void* (*vfn3)(void*, float, int);
extern "C" void* g_010b8c08;
extern "C" int target_87c7c0(void* self)
{
    if (*(int*)((char*)self + 0x30) == 2) {
        void* p = *(void**)((char*)self + 0x38);
        int i = *(int*)p;
        void* q = *(void**)((char*)self + 0x40);
        float v = *(float*)q;
        *(char*)((char*)self + 0x108) = 0;
        void* g = g_010b8c08;
        ((vfn3*)*(void***)g)[0x160/8](g, v, i);
    }
    return 0;
}
