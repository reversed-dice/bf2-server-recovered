// FUNCTION: BF2 0x5ea580
namespace dice { namespace hfe { namespace world {
void set_0x5e42a0(void* p, float v) {
    *(float*)((char*)p + 0x24) = v;
    *(int*)((char*)p + 0x28) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_setDelayToUse_float (0x5e42a0)
