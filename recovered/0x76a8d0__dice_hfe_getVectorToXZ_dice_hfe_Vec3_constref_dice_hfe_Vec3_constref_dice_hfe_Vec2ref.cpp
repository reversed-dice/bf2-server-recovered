// FUNCTION: BF2 0x76a8d0
namespace dice { namespace hfe {
void* fn_0x76a8d0(void* a, void* b, void* out) {
    float x = *(float*)b - *(float*)a;
    *(float*)out = x;
    float z = *(float*)((char*)b+8) - *(float*)((char*)a+8);
    *(float*)((char*)out+4) = z;
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_getVectorToXZ_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec2ref (0x76a8d0)
