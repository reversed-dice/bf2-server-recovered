// FUNCTION: BF2 0x5e42a0
namespace dice { namespace hfe { namespace world {
void set_0x5ea540(void* p, float v) {
    *(float*)((char*)p + 0x224) = v;
    *(int*)((char*)p + 0x228) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoCompTemplate_setMinimumTimeToReload_float (0x5ea540)
