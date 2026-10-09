// FUNCTION: BF2 0x76b0e0
// BF2_FLAGS: -fno-optimize-sibling-calls
extern "C" {
    float dice_hfe_magnitudeXZSqr_dice_hfe_Vec3_constref(void const* v);
    float sqrtf(float x);
}

namespace dice { namespace hfe {

float magnitudeXZ(void const* v) {
    return sqrtf(dice_hfe_magnitudeXZSqr_dice_hfe_Vec3_constref(v));
}

} }
