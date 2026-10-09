// FUNCTION: BF2 0x782dc0
#include <math.h>

extern "C" void fn_782dc0(void* self, float* out) {
    void* a = *(void**)((char*)self + 0x8);
    typedef const float* (*Fn)(void*);
    const float* b = ((Fn*)(*(void***)a))[55](a);
    const float* m = (const float*)((char*)*(void**)((char*)self + 0x10) + 0xc4);
    const float* r0 = m;
    const float* r1 = m + 4;
    const float* r2 = m + 8;
    const float* tr = m + 12;
    out[0] = b[12]*r0[0] + b[13]*r1[0] + b[14]*r2[0] + tr[0];
    out[1] = b[12]*r0[1] + b[13]*r1[1] + b[14]*r2[1] + tr[1];
    out[2] = b[12]*r0[2] + b[13]*r1[2] + b[14]*r2[2] + tr[2];
}
