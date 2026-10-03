// FUNCTION: BF2 0x76aaf0
namespace dice { namespace hfe {
float fn_0x76aaf0(void* a, void* b) {
    float x = *(float*)a - *(float*)b;
    float y = *(float*)((char*)a+4) - *(float*)((char*)b+4);
    return x*x + y*y;
}
} }
// REVERSED_FUNCTION: dice_hfe_distXYSqr_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref (0x76aaf0)
