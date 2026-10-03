// FUNCTION: BF2 0x621250
namespace dice { namespace hfe { namespace world {
void set_0x621250(void* p, float v) {
    *(float*)((char*)p + 0x18) = v;
    *(int*)((char*)p + 0x1c) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetCompTemplate_setTrackingDelay_float (0x621250)

// re-trigger validate
