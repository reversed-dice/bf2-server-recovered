// FUNCTION: BF2 0x60ffa0
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, int, int, int);

extern "C" void stopEffects_60ffa0(void* self)
{
    void* p = ((vfn1)(*(void***)self)[0x1e0/8])(self);
    while (p) {
        ((vfn2)(*(void***)p)[0x208/8])(p, 1, 0, 0);
        ((vfn2)(*(void***)p)[0x208/8])(p, 0x45, 0, 0);
        p = *(void**)((char*)p + 0x58);
    }
}
