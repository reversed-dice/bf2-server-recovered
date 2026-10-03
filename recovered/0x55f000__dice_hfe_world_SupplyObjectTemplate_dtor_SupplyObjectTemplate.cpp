// FUNCTION: BF2 0x55f000
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>
extern "C" void _ZdlPv(void*);
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void* self);
void dtor_SupplyObjectTemplate_D0(void* p) {
    long* lp = (long*)p;
    lp[0] = 0xb50cb0;
    lp[2] = 0xb50f40;
    lp[0xd] = 0xb50f78;
    lp[0x39] = 0xb50ff8;
    void** vec_ptr = (void**)&lp[0x45];
    long start = (long)*vec_ptr;
    long end = (long)*(vec_ptr + 1);
    while (start != end) { start += 4; }
    if (__builtin_expect(*vec_ptr != 0, 1)) { _ZdlPv(*vec_ptr); }
    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(p);
    _ZdlPv(p);
}
