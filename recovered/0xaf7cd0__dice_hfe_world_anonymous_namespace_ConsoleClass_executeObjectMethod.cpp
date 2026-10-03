// FUNCTION: BF2 0xaf7cd0
typedef void* (*vfn2)(void*, float);
extern "C" void* g_01140ad8;
extern "C" int target_af7cd0(void* self)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        void* p = *(void**)((char*)self + 0x38);
        float v = *(float*)p;
        *(char*)((char*)self + 0x108) = 0;
        void* g = g_01140ad8;
        ((vfn2*)*(void***)g)[0x90/8](g, v);
    }
    return 0;
}
