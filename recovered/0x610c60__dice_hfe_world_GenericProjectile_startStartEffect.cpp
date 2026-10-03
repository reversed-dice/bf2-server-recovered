// FUNCTION: BF2 0x610c60
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, int, int, int);

extern "C" void startStartEffect_610c60(void* self)
{
    void* p = ((vfn1)(*(void***)self)[0x1e0/8])(self);
    while (p) {
        ((vfn2)(*(void***)p)[0x208/8])(p, 0x44, 0, 0);
        ((vfn2)(*(void***)p)[0x208/8])(p, 0, 0, 0);
        p = *(void**)((char*)p + 0x58);
    }
}
