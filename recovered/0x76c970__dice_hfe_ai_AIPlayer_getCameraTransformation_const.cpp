// FUNCTION: BF2 0x76c970
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void* (*vfn3)(void*);

extern "C" unsigned int g_iid_object_76c970;
extern "C" void* g_identityMatrix_76c970;

extern "C" void* getCameraTransformation_76c970(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x300/8])(*(void**)((char*)self + 8));
    if (p) {
        void* q = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_object_76c970);
        return ((vfn3)(*(void***)q)[0x108/8])(q);
    }
    return g_identityMatrix_76c970;
}
