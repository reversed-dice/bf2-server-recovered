extern "C" void* g_mgr_10c5420;
extern "C" int g_idx_c76024;
extern "C" void* g_112ee38;

typedef void* (*vfn18)(void*, int);
typedef void* (*vfn40)(void*, int);
typedef void (*vfn568)(void*, float, float, float);

extern "C" int executeServer_42be10(void* self, int x)
{
    void* m = ((vfn18)(*(void***)g_mgr_10c5420)[0x18/8])(g_mgr_10c5420, g_idx_c76024);
    if (m) {
        void* t = ((vfn40)(*(void***)g_112ee38)[0x40/8])(g_112ee38, *(int*)((char*)self + 0x10));
        if (t) {
            ((vfn568)(*(void***)t)[0x568/8])(t,
                *(float*)((char*)self + 0x14),
                *(float*)((char*)self + 0x18),
                *(float*)((char*)self + 0x1c));
            return 1;
        }
    }
    return 0;
}
