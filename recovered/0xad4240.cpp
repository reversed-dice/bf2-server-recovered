extern "C" void* g_mgr;
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*);

extern "C" void* getActiveCameraSpring_ad4240(void* self)
{
    void* r = ((vfn1)(*(void***)g_mgr)[0x48/8])(g_mgr);
    if (r) {
        return ((vfn2)(*(void***)r)[0x38/8])(r);
    }
    return 0;
}
