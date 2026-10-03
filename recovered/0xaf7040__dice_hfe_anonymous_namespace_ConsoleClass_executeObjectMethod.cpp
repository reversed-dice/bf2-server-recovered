// FUNCTION: BF2 0xaf7040
typedef void* (*vfn2)(void*, float);
extern "C" void* g_010a4328;
extern "C" int target_af7040(void* self)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        void* p = *(void**)((char*)self + 0x38);
        float v = *(float*)p;
        *(char*)((char*)self + 0x108) = 0;
        void* g = g_010a4328;
        ((vfn2*)*(void***)g)[0xc0/8](g, v);
    }
    return 0;
}
