extern "C" int g_iid;
extern "C" void* g_fallback;
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, int);
typedef void* (*vfn3)(void*);

extern "C" void* getCameraTransformation_76c970(void* self)
{
    void* r = ((vfn1)(*(void***)(*(void**)((char*)self + 0x8)))[0x300/8])(*(void**)((char*)self + 0x8));
    if (r) {
        void* p = ((vfn2)(*(void***)r)[0x18/8])(r, g_iid);
        return ((vfn3)(*(void***)p)[0x108/8])(p);
    }
    return g_fallback;
}
