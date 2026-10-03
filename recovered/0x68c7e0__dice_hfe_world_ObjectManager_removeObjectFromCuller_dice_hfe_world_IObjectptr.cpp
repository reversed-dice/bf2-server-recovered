// FUNCTION: BF2 0x68c7e0
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*);
typedef void (*vfn3)(void*, int);

extern "C" void removeObjectFromCuller_68c7e0(void* self, void* obj)
{
    *(unsigned char*)((char*)obj + 0xf1) = 0;
    void* p = ((vfn1)(*(void***)obj)[0xa8/8])(obj);
    if (p) {
        ((vfn2)(*(void***)p)[0x10/8])(p);
        ((vfn3)(*(void***)obj)[0xa0/8])(obj, 0);
    }
    void* q = ((vfn1)(*(void***)obj)[0x98/8])(obj);
    if (q) {
        ((vfn2)(*(void***)q)[0x10/8])(q);
        ((vfn3)(*(void***)obj)[0x90/8])(obj, 0);
    }
}
