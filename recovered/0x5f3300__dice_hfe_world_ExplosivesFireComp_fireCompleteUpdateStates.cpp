// FUNCTION: BF2 0x5f3300
namespace dice { namespace hfe {
extern "C" void dice_hfe_world_ExplosivesFireComp_toggleWeaponState(long, int);
void cb_0x5f3300(long param_1) {
    *(char*)(param_1 + 0x16c) = 0;
    *(int*)(param_1 + 0x164) = 0;
    if (*(char*)(param_1 + 0x1ac) == 0) {
        return;
    }
    *(char*)(param_1 + 0x1ac) = 0;
    dice_hfe_world_ExplosivesFireComp_toggleWeaponState(param_1, 2);
}
} }
