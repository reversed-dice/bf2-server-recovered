// FUNCTION: BF2 0x76a910
namespace dice { namespace hfe {

void* fn_0x76a910(void* a, void* b, void* out) {
    *(float*)out = *(float*)((char*)b+4) - *(float*)((char*)a+4);
    *(float*)((char*)out+4) = *(float*)((char*)b+8) - *(float*)((char*)a+8);
    return out;
}

} }
// REVERSED_FUNCTION: dice_hfe_getVectorToYZ_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec2ref (0x76a910)
