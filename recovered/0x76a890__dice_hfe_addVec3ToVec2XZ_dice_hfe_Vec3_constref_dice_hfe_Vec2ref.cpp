// FUNCTION: BF2 0x76a890
namespace dice { namespace hfe {
void* fn_0x76a890(void* in, void* out) {
    float a = *(float*)out + *(float*)in;
    *(float*)out = a;
    float b = *(float*)((char*)out+4) + *(float*)((char*)in+8);
    *(float*)((char*)out+4) = b;
    return out;
}
} }
// REVERSED_FUNCTION: dice_hfe_addVec3ToVec2XZ_dice_hfe_Vec3_constref_dice_hfe_Vec2ref (0x76a890)
