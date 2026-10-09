// FUNCTION: BF2 0x76b0b0
// BF2_FLAGS: -fno-optimize-sibling-calls
extern "C" {
    float dice_hfe_magnitudeXYSqr_dice_hfe_Vec3_constref(void const* v);
    float sqrtf(float x);
}

namespace dice { namespace hfe {

float magnitudeXY(void const* v) {
    return sqrtf(dice_hfe_magnitudeXYSqr_dice_hfe_Vec3_constref(v));
}

} }
