// FUNCTION: BF2 0x621f90
namespace dice { namespace hfe { namespace world {
void set_0x621f90(void* p, float v) {
    *(float*)((char*)p + 0x20) = v;
    *(int*)((char*)p + 0x24) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_SeekClosestTargetCompTemplate_setTrackingDelay_float (0x621f90)
