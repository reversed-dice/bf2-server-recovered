// FUNCTION: BF2 0x76a940
namespace dice { namespace hfe {

void* fn_0x76a940(void* in, void* out) {
    int x = *(int*)in;
    *(int*)out = x;
    int y = *(int*)((char*)in+4);
    *(int*)((char*)out+8) = 0;
    *(int*)((char*)out+4) = y;
    return out;
}

} }
// REVERSED_FUNCTION: dice_hfe_vec2ToVec3XY_dice_hfe_Vec2_constref_dice_hfe_Vec3ref (0x76a940)
