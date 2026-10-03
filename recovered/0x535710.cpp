extern "C" void* g_mgr_10c5420;
extern "C" int g_idx_c76024;
extern "C" void* g_112ee48;

typedef void* (*vfn18)(void*, int);
typedef void (*vfn150)(void*, void*, int, int);
typedef void (*vfnC0)(void*, int, int);
typedef void (*vfn1a0)(void*, void*, int, float);

extern "C" void Parachute_disable_535710(void* self)
{
    void* m = ((vfn18)(*(void***)g_mgr_10c5420)[0x18/8])(g_mgr_10c5420, g_idx_c76024);
    if (m) {
        void* r = *(void**)((char*)self + 0x268);
        if (r && *(void**)((char*)r + 0x8)) {
            ((vfn150)(*(void***)g_mgr_10c5420)[0x150/8])(g_mgr_10c5420, *(void**)((char*)r + 0x8), 1, 1);
        }
        ((vfnC0)(*(void***)self)[0xc0/8])(self, 0, 0x102);
        ((vfn1a0)(*(void***)g_112ee48)[0x1a0/8])(g_112ee48, self, 0x21, *(float*)0xb317dc);
    }
}
