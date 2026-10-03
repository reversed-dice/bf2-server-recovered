// FUNCTION: BF2 0x59d5e0
namespace dice { namespace hfe {
extern "C" void dice_hfe_world_GroundEffectBundle_calculateCurrentDistanceAndEffectPosition();
void cb_0x59d5e0(void* param_1, int param_2, void* param_3, char param_4) {
    if (param_4 != 0) return;
    if (param_2 != 0) return;
    dice_hfe_world_GroundEffectBundle_calculateCurrentDistanceAndEffectPosition();
}
} }
