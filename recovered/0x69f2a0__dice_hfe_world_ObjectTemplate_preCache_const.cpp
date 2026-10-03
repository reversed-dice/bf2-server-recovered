// FUNCTION: BF2 0x69f2a0
typedef unsigned int (*vfn1)(void*);
typedef void* (*vfn2)(void*);
typedef void (*vfn3)(void*);

extern "C" void preCache_69f2a0(void* self)
{
    if ((((vfn1)(*(void***)self)[0x90/8])(self) & 0x20) == 0) {
        void* p = ((vfn2)(*(void***)self)[0xa8/8])(self);
        if (p) {
            ((vfn3)(*(void***)p)[0x40/8])(p);
            ((vfn3)(*(void***)p)[0x70/8])(p);
        }
    }
}
