// FUNCTION: BF2 0x60a8c0
namespace dice { namespace hfe { namespace world {
void set_0x60a8c0(void* p, float v) {
    *(float*)((char*)p + 0x1c) = v;
    *(int*)((char*)p + 0x20) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_setShiftDelay_float (0x60a8c0)

// re-trigger validate
