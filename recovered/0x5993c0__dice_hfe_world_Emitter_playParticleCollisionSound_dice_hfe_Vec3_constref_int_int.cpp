// FUNCTION: BF2 0x5993c0
typedef void* (*vfn1)(void*, int, int, int, int);
typedef void (*vfn2)(void*, int);
typedef void (*vfn3)(void*, void*, int);

extern "C" void* g_materialManager_5993c0;

extern "C" void playParticleCollisionSound_5993c0(void* self, void* vec, int p3, int p4)
{
    void* m = g_materialManager_5993c0;
    void* p = ((vfn1)(*(void***)m)[0xd0/8])(m, p3, p4, 0, 1);
    if (p) {
        ((vfn2)(*(void***)p)[0x10/8])(p, 1);
        ((vfn3)(*(void***)p)[0x38/8])(p, vec, 1);
    }
}
