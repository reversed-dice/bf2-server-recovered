extern "C" void* g_mgr_10c5420;
extern "C" void* g_112ee38;

typedef char (*vfn1c0)(void*);
typedef void* (*vfn60)(void*);
typedef void (*vfn4e8)(void*, int);

extern "C" int executeClient_435770(void* self, int x)
{
    if (((vfn1c0)(*(void***)g_mgr_10c5420)[0x1c0/8])(g_mgr_10c5420)) {
        return 1;
    }
    if (g_112ee38) {
        void* t = ((vfn60)(*(void***)g_112ee38)[0x60/8])(g_112ee38);
        if (t) {
            ((vfn4e8)(*(void***)t)[0x4e8/8])(t, *(unsigned short*)((char*)self + 0x10));
            return 1;
        }
    }
    return 0;
}
