// FUNCTION: BF2 0x786ec0
typedef void* (*vfn1)(void*);
typedef void* (*vfn2)(void*, unsigned int);
typedef void* (*vfn3)(void*);
typedef int (*vfn4)(void*);

extern "C" unsigned int g_iid_786ec0;

extern "C" int getOccupyingPlayerId_786ec0(void* self)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x40/8])(*(void**)((char*)self + 8));
    void* q;
    for (; p; p = *(void**)((char*)p + 0x50)) {
        q = ((vfn2)(*(void***)p)[0x18/8])(p, g_iid_786ec0);
        if (q) {
            goto found;
        }
    }
    q = 0;
found:
    void* r = ((vfn3)(*(void***)q)[0x20/8])(q);
    if (r) {
        return ((vfn4)(*(void***)r)[0xa8/8])(r);
    }
    return -1;
}
