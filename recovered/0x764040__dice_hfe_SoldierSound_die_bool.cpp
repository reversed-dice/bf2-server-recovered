// FUNCTION: BF2 0x764040
typedef void* (*vfn1)(void*);
typedef char (*vfn2)(void*);
typedef void (*vfn3)(void*);

extern "C" void die_764040(void* self, unsigned char param2)
{
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 8))[0x300/8])(*(void**)((char*)self + 8));
    if (param2 != 0) {
        if (p == 0) {
            return;
        }
        if (((vfn2)(*(void***)p)[0x310/8])(p) == 0) {
            return;
        }
    }
    void* q = *(void**)((char*)self + 0x30);
    if (q) {
        ((vfn3)(*(void***)q)[0x20/8])(q);
    }
}
