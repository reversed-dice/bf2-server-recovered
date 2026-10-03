// FUNCTION: BF2 0x76a980
namespace dice { namespace hfe {
void* fn_0x76a980(void* in, void* out) {
    *(int*)out = 0;
    *(int*)((char*)out+4) = *(int*)in;
    *(int*)((char*)out+8) = *(int*)((char*)in+4);
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_vec2ToVec3YZ_dice_hfe_Vec2_constref_dice_hfe_Vec3ref (0x76a980)
