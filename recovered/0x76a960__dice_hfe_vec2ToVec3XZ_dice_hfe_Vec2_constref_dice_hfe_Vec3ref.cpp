// FUNCTION: BF2 0x76a960
namespace dice { namespace hfe {

void* fn_0x76a960(void* in, void* out) {
    int x = *(int*)in;
    *(int*)((char*)out+4) = 0;
    *(int*)out = x;
    int y = *(int*)((char*)in+4);
    *(int*)((char*)out+8) = y;
    return out;
}

} }
// REVERSED_FUNCTION: dice_hfe_vec2ToVec3XZ_dice_hfe_Vec2_constref_dice_hfe_Vec3ref (0x76a960)
