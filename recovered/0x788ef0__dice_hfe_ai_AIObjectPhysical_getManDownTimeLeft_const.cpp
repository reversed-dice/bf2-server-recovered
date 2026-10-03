// FUNCTION: BF2 0x788ef0
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void* (*vfn3)(void*);
typedef char (*vfn4)(void*);
typedef float (*vfn5)(void*);

extern "C" unsigned int g_iid_788ef0;

extern "C" float getManDownTimeLeft_788ef0(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    p = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_788ef0);
    if (p) {
        if (((vfn3)(*(void***)p)[0x20/8])(p)) {
            p = ((vfn3)(*(void***)p)[0x20/8])(p);
            if (((vfn4)(*(void***)p)[0x200/8])(p)) {
                return ((vfn5)(*(void***)p)[0x1f0/8])(p);
            }
        }
    }
    return 0.0f;
}
