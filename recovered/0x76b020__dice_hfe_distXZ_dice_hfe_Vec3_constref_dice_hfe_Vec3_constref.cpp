// FUNCTION: BF2 0x76b020
// BF2_FLAGS: -fno-optimize-sibling-calls
extern "C" {
    float dice_hfe_distXZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(void const* a, void const* b);
    float sqrtf(float x);
}

namespace dice { namespace hfe {

float distXZ(void const* a, void const* b) {
    return sqrtf(dice_hfe_distXZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(a, b));
}

} }
