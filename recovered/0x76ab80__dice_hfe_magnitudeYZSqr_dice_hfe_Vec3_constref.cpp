// FUNCTION: BF2 0x76ab80
namespace dice { namespace hfe {
float fn_0x76ab80(void* self) {
    float y = *(float*)((char*)self+4);
    float z = *(float*)((char*)self+8);
    return y*y + z*z;
}
} }
// REVERSED_FUNCTION: dice_hfe_magnitudeYZSqr_dice_hfe_Vec3_constref (0x76ab80)
