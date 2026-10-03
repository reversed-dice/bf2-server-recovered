// FUNCTION: BF2 0x687310
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, unsigned int, unsigned int);

extern "C" void childrenHelper_687310(void* self, unsigned int param2, unsigned int param3)
{
    void* p = ((vfn1)(*(void***)self)[0x1e0/8])(self);
    while (p) {
        ((vfn2)(*(void***)p)[0xc0/8])(p, param2, param3);
        p = *(void**)((char*)p + 0x58);
    }
}
