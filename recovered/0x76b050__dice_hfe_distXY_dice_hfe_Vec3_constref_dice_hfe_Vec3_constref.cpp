// FUNCTION: BF2 0x76b050
// BF2_FLAGS: -fno-optimize-sibling-calls
extern "C" {
    float dice_hfe_distXYSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(void const* a, void const* b);
    float sqrtf(float x);
}

namespace dice { namespace hfe {

float distXY(void const* a, void const* b) {
    return sqrtf(dice_hfe_distXYSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref(a, b));
}

} }
