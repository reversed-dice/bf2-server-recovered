// FUNCTION: BF2 0x76aad0
namespace dice { namespace hfe {
float fn_0x76aad0(void* a, void* b) {
    float x = *(float*)a - *(float*)b;
    float z = *(float*)((char*)a+8) - *(float*)((char*)b+8);
    return x*x + z*z;
}
} }
// REVERSED_FUNCTION: dice_hfe_distXZSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref (0x76aad0)
