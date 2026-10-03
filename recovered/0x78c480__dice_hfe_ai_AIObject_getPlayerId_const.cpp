// FUNCTION: BF2 0x78c480
typedef void* (*vfn1)(void*, unsigned int);
typedef void* (*vfn2)(void*);
typedef int (*vfn3)(void*);

extern "C" unsigned int g_iid_78c480;

extern "C" int getPlayerId_78c480(void* self)
{
    void* p = *(void**)((char*)self + 0x20);
    void* q;
    while (true) {
        if (p == 0) {
            return -1;
        }
        q = ((vfn1)(*(void***)p)[0x18/8])(p, g_iid_78c480);
        if (q) {
            break;
        }
        p = *(void**)((char*)p + 0x50);
    }
    void* r = ((vfn2)(*(void***)q)[0x20/8])(q);
    if (r == 0) {
        return -1;
    }
    return ((vfn3)(*(void***)r)[0xa8/8])(r);
}
