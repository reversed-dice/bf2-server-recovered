// FUNCTION: BF2 0x5f35f0
namespace dice { namespace hfe { namespace world {
void set_0x5e42a0(void* p, float v) {
    *(float*)((char*)p + 0x90) = v;
    *(int*)((char*)p + 0x94) = (int)(v * *(float*)0x00b2efc4);
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericFireArmTemplate_setDelayToUse_float (0x5e42a0)
