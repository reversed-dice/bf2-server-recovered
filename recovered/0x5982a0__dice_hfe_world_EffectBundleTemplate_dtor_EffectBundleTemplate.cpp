// FUNCTION: BF2 0x5982a0
// BF2_FLAGS: -fno-strict-aliasing
#include <cstdlib>

extern "C" void _ZdlPv(void*);
extern "C" void dice_hfe_world_BundleTemplate_dtor_BundleTemplate(void* self);
extern "C" void dice_hfe_world_EffectProperties_dtor_EffectProperties(void* self);

void dtor_func(void* pp) {
    long* p = (long*)pp;
    p[0] = 0xb5ea10;
    p[2] = 0xb5ecb0;
    p[0xd] = 0xb5ece8;
    p[0x39] = 0xb5ed68;
    p[0x3f] = 0xb5edd0;
    
    // Clear vector at 0x77 (stride 0x40)
    void** vp77 = (void**)&p[0x77];
    long start = (long)*vp77;
    long end = (long)*(vp77 + 1);
    while (start != end) { start += 0x40; }
    if (__builtin_expect(*vp77 != 0, 1)) { _ZdlPv(*vp77); }
    
    // Delete pointer at 0x74
    if (__builtin_expect(p[0x74] != 0, 1)) { _ZdlPv((void*)p[0x74]); }
    
    // Call EffectProperties dtor
    dice_hfe_world_EffectProperties_dtor_EffectProperties(p + 0x3f);
    
    dice_hfe_world_BundleTemplate_dtor_BundleTemplate(pp);
    _ZdlPv(pp);
}
