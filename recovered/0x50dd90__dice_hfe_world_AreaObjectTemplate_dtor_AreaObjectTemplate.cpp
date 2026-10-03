// FUNCTION: BF2 0x50dd90
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void* self);

// param_1[0] = vtable1 (0x00)
// param_1[2] = vtable2 (0x10)
// param_1[0xd] = vtable3 (0x68)
// param_1[0x39] = vtable4 (0x1c8)
// param_1[0x3f] = vec_start (0x1f8)
// param_1[0x40] = vec_end (0x200)
extern "C" void dtor_AreaObjectTemplate(long* p) {
    p[0] = 0xb3e470;
    p[2] = 0xb3e700;
    p[0xd] = 0xb3e738;
    p[0x39] = 0xb3e7b8;

    // Clear vector at offset 0x3f (stride 8)
    void** vec_ptr = (void**)&p[0x3f];
    long start = (long)*vec_ptr;
    long end = (long)*(vec_ptr + 1);
    while (start != end) { start += 8; }
    if (__builtin_expect(*vec_ptr != 0, 1)) {
        _ZdlPv(*vec_ptr);
    }

    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(p);
    _ZdlPv(p);
}
