// FUNCTION: BF2 0x5fff20
namespace dice { namespace hfe { namespace world {
void fn_0x5fff20(void* self, float speed) {
    *(float*)((char*)self+0x90) = speed;
    *(float*)((char*)self+0x94) = *(float*)0xb2f3bc / (speed * *(float*)0xb2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireCompTemplate_setTimeToReachMaxStrengthSlow_float (0x5fff20)
