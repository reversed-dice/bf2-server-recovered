// FUNCTION: BF2 0x5ea560
namespace dice { namespace hfe { namespace world {
void set_0x5ea560(void* p, float v) {
    *(float*)((char*)p + 0x1c) = v;
    *(int*)((char*)p + 0x20) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoCompTemplate_setExtraReloadTimeFirst_float (0x5ea560)
