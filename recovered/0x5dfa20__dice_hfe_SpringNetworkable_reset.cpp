// FUNCTION: BF2 0x5dfa20
typedef void* (*vfn1)(void*);
typedef char (*vfn2)(void*);
typedef unsigned int (*vfn3)(void*);

extern "C" void reset_5dfa20(void* self)
{
    *(unsigned char*)((char*)self + 0x74) = 0;
    void* p = ((vfn1)(*(void***)*(void**)((char*)self + 0x60))[0x300/8])(*(void**)((char*)self + 0x60));
    if (p) {
        if (__builtin_expect(((vfn2)(*(void***)p)[0x358/8])(p) < 0, 1)) {
            void* q = *(void**)((char*)*(void**)((char*)self + 0x60) + 0x90);
            if (q) {
                if ((((vfn3)(*(void***)q)[0x100/8])(q) & 8) != 0) {
                    *(unsigned char*)((char*)self + 0x74) = 1;
                }
            }
        }
    }
}
