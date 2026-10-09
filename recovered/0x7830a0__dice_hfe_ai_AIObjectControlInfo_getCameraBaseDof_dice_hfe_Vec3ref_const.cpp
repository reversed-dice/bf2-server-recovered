// FUNCTION: BF2 0x7830a0
#include <math.h>

extern "C" void fn_7830a0(void* self, float* out) {
    void* a = *(void**)((char*)self + 0x8);
    typedef const float* (*Fn)(void*);
    const float* b = ((Fn*)(*(void***)a))[55](a);
    const float* m = (const float*)((char*)*(void**)((char*)self + 0x10) + 0xc4);
    const float* r0 = m;
    const float* r1 = m + 4;
    const float* r2 = m + 8;
    out[0] = b[8]*r0[0] + b[9]*r1[0] + b[10]*r2[0];
    out[1] = b[8]*r0[1] + b[9]*r1[1] + b[10]*r2[1];
    out[2] = b[8]*r0[2] + b[9]*r1[2] + b[10]*r2[2];
}
