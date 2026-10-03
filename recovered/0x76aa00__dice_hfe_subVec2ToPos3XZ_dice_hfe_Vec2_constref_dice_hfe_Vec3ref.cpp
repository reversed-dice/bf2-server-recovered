// FUNCTION: BF2 0x76aa00
namespace dice { namespace hfe {

void* fn_0x76aa00(void* delta, void* pos) {
    *(float*)pos -= *(float*)delta;
    *(float*)((char*)pos+8) -= *(float*)((char*)delta+4);
    return pos;
}

} }
// REVERSED_FUNCTION: dice_hfe_subVec2ToPos3XZ_dice_hfe_Vec2_constref_dice_hfe_Vec3ref (0x76aa00)
