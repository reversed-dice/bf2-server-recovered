// FUNCTION: BF2 0x603920
namespace dice { namespace hfe { namespace world {
void set_0x603920(void* p, float v) {
    *(float*)((char*)p + 0x70) = v;
    *(int*)((char*)p + 0x74) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPTargetCompTemplate_setUpdateInterval_float (0x603920)
