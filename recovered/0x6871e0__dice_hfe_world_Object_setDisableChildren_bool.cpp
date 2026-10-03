// FUNCTION: BF2 0x6871e0
typedef void* (*vfn1)(void*);
typedef void (*vfn2)(void*, int, int);

extern "C" void setDisableChildren_6871e0(void* self, unsigned char param2)
{
    *(unsigned char*)((char*)self + 0x211) = param2;
    void* p = ((vfn1)(*(void***)self)[0x1e0/8])(self);
    while (p) {
        if (param2 != 0) {
            ((vfn2)(*(void***)p)[0xc0/8])(p, 1, 0);
        } else {
            ((vfn2)(*(void***)p)[0xc0/8])(p, 0, 1);
        }
        p = *(void**)((char*)p + 0x58);
    }
}
