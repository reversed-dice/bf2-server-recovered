// FUNCTION: BF2 0x7640d0
typedef void* (*vfn1)(void*, int, int, int, int);
typedef void* (*vfn2)(void*);
typedef void (*vfn3)(void*, void*);

extern "C" void* g_materialManager_7640d0;

extern "C" void dieHit_7640d0(void* self, unsigned int param2)
{
    void* m = g_materialManager_7640d0;
    void* p = ((vfn1)(*(void***)m)[0xd0/8])(m, 0x157c, param2, 4, 0);
    if (p) {
        vfn3 pc = (vfn3)(*(void***)p)[0x30/8];
        void* u = ((vfn2)(*(void***)*(void**)((char*)self + 8))[0xd8/8])(*(void**)((char*)self + 8));
        pc(p, u);
    }
}
