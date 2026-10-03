// FUNCTION: BF2 0x76ab10
namespace dice { namespace hfe {
float fn_0x76ab10(void* a, void* b) {
    float y = *(float*)((char*)a+4) - *(float*)((char*)b+4);
    float z = *(float*)((char*)a+8) - *(float*)((char*)b+8);
    return y*y + z*z;
}
} }
// REVERSED_FUNCTION: dice_hfe_distYZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref (0x76ab10)
