// FUNCTION: BF2 0x62bc30
typedef void* (*vfn1)(void*);
typedef int (*vfn2)(void*);
typedef int (*vfn3)(void*);

extern "C" unsigned int g_cid_62bc30;

extern "C" int canZoom_62bc30(void* self)
{
    if (__builtin_expect(*(char*)((char*)*(void**)((char*)self + 0x28) + 0x14) == 0, 1)) {
        return 1;
    }
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 0x18))[0x380/8])(*(void**)((char*)self + 0x18));
    if (p == 0) {
        return 0;
    }
    p = ((vfn1)(*(void***)p)[0x90/8])(p);
    if (p == 0) {
        return 0;
    }
    if (((vfn2)(*(void***)*(void**)((char*)p + 0x28))[0x20/8])(*(void**)((char*)p + 0x28)) != g_cid_62bc30) {
        return 0;
    }
    if (((vfn3)(*(void***)p)[0x4f0/8])(p) != 2) {
        return 0;
    }
    return 1;
}
