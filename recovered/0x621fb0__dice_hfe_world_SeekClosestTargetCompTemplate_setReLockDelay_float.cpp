// FUNCTION: BF2 0x621fb0
namespace dice { namespace hfe { namespace world {
void set_0x621fb0(void* p, float v) {
    *(float*)((char*)p + 0x28) = v;
    *(int*)((char*)p + 0x2c) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetCompTemplate_setReLockDelay_float (0x621fb0)
