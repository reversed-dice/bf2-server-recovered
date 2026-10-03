// FUNCTION: BF2 0x76a9e0
namespace dice { namespace hfe {

void* fn_0x76a9e0(void* delta, void* pos) {
    *(float*)pos += *(float*)delta;
    *(float*)((char*)pos+8) += *(float*)((char*)delta+4);
    return pos;
}

} }
// REVERSED_FUNCTION: dice_hfe_addVec2ToPos3XZ_dice_hfe_Vec2_constref_dice_hfe_Vec3ref (0x76a9e0)
