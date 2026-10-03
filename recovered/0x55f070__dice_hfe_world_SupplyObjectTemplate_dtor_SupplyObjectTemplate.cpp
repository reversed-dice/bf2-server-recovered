// FUNCTION: BF2 0x55f070
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);

// SupplyObjectTemplate dtor D0 variant
extern "C" void dtor_SupplyObjectTemplate(long* p) {
    p[0] = 0xb50cb0;
    p[2] = 0xb50f40;
    p[0xd] = 0xb50f78;
    p[0x39] = 0xb50ff8;

    void** vec_ptr = (void**)&p[0x45];
    long start = (long)*vec_ptr;
    long end = (long)*(vec_ptr + 1);
    while (start != end) { start += 4; }
    if (__builtin_expect(*vec_ptr != 0, 1)) {
        _ZdlPv(*vec_ptr);
    }
    _ZdlPv(p);
}
