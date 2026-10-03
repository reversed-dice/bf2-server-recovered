// FUNCTION: BF2 0x5f5470
namespace dice { namespace hfe { namespace world {
void set_0x5f5470(void* p, float v) {
    *(float*)((char*)p + 0x28) = v;
    *(int*)((char*)p + 0x2c) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FireCompTemplate_setFireLaunchDelay_float (0x5f5470)
