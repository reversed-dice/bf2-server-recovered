// FUNCTION: BF2 0x5ea5c0
namespace dice { namespace hfe { namespace world {
void set_0x5ea5c0(void* p, float v) {
    *(float*)((char*)p + 0x14) = v;
    *(int*)((char*)p + 0x18) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoCompTemplate_setReloadTime_float (0x5ea5c0)
