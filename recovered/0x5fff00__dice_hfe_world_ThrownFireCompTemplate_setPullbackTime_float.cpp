// FUNCTION: BF2 0x5fff00
namespace dice { namespace hfe { namespace world {
void set_0x5fff00(void* p, float v) {
    *(float*)((char*)p + 0x98) = v;
    *(int*)((char*)p + 0x9c) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownFireCompTemplate_setPullbackTime_float (0x5fff00)
