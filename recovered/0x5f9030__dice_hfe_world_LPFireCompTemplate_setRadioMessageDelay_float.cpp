// FUNCTION: BF2 0x5f9030
namespace dice { namespace hfe { namespace world {
void set_0x5f9030(void* p, float v) {
    *(float*)((char*)p + 0x90) = v;
    *(int*)((char*)p + 0x94) = (int)((long long)(v * *(float*)0x00b2efc4));
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_LPFireCompTemplate_setRadioMessageDelay_float (0x5f9030)
