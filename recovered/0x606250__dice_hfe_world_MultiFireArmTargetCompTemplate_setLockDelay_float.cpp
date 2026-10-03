// FUNCTION: BF2 0x606250
namespace dice { namespace hfe { namespace world {
void set_0x606250(void* p, float v) {
    *(float*)((char*)p + 0x60) = v;
    *(int*)((char*)p + 0x64) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireArmTargetCompTemplate_setLockDelay_float (0x606250)
