// FUNCTION: BF2 0x606270
namespace dice { namespace hfe { namespace world {
void set_0x606270(void* p, float v) {
    *(float*)((char*)p + 0x68) = v;
    *(int*)((char*)p + 0x6c) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_MultiFireArmTargetCompTemplate_setLoseLockDelay_float (0x606270)
