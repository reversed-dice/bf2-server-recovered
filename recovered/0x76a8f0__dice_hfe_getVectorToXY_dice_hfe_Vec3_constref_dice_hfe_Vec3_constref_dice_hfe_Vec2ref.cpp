// FUNCTION: BF2 0x76a8f0
namespace dice { namespace hfe {

void* fn_0x76a8f0(void* a, void* b, void* out) {
    *(float*)out = *(float*)b - *(float*)a;
    *(float*)((char*)out+4) = *(float*)((char*)b+4) - *(float*)((char*)a+4);
    return out;
}

} }
// REVERSED_FUNCTION: dice_hfe_getVectorToXY_dice_hfe_Vec3_constref_dice_hfe_Vec3_constref_dice_hfe_Vec2ref (0x76a8f0)
