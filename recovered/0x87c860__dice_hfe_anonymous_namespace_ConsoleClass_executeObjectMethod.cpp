// FUNCTION: BF2 0x87c860
typedef void* (*vfn2)(void*, float);
extern "C" void* g_010b8c08;
extern "C" int target_87c860(void* self)
{
    if (*(int*)((char*)self + 0x30) == 1) {
        void* p = *(void**)((char*)self + 0x38);
        float v = *(float*)p;
        *(char*)((char*)self + 0x108) = 0;
        void* g = g_010b8c08;
        ((vfn2*)*(void***)g)[0x158/8](g, v);
    }
    return 0;
}
