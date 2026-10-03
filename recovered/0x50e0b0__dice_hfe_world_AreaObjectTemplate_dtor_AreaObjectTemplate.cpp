// FUNCTION: BF2 0x50e0b0
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void* self);

// D1 variant: no delete this
extern "C" void dtor_AreaObjectTemplate_D1(long* p) {
    p[0] = 0xb3e470;
    p[2] = 0xb3e700;
    p[0xd] = 0xb3e738;
    p[0x39] = 0xb3e7b8;

    void** vec_ptr = (void**)&p[0x3f];
    long start = (long)*vec_ptr;
    long end = (long)*(vec_ptr + 1);
    while (start != end) { start += 8; }
    if (__builtin_expect(*vec_ptr != 0, 1)) {
        _ZdlPv(*vec_ptr);
    }

    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(p);
}
