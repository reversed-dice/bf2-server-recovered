extern "C" void* g_10c5420;
extern "C" int g_idx_c76024;
typedef void* (*vfn18)(void*, int);

extern "C" int isServer_76f4d0(void* self)
{
    int r = 0;
    if (g_10c5420) {
        void* m = ((vfn18)(*(void***)g_10c5420)[0x18/8])(g_10c5420, g_idx_c76024);
        if (m) r = 1;
    }
    return r;
}
