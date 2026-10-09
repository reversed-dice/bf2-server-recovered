// FUNCTION: BF2 0x76b080
// BF2_FLAGS: -fno-optimize-sibling-calls
extern "C" {
    float dice_hfe_distYZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(void const* a, void const* b);
    float sqrtf(float x);
}

namespace dice { namespace hfe {

float distYZ(void const* a, void const* b) {
    return sqrtf(dice_hfe_distYZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(a, b));
}

} }
