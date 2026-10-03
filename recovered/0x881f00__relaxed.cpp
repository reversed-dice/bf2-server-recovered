// FUNCTION: BF2 0x881f00
namespace dice { namespace hfe {
extern "C" long dice_hfe_anonymous_namespace_getServerSquadManager();
extern "C" float dice_hfe_SquadManager_getFirstCommanderSelectDelay_const(long);
extern "C" void dice_hfe_SquadManager_setFirstCommanderSelectDelay_float(float, long);

long cb_0x881e60(long param_1) {
    long lVar2;
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long uVar1 = dice_hfe_anonymous_namespace_getServerSquadManager();
        float uVar3 = dice_hfe_SquadManager_getFirstCommanderSelectDelay_const(uVar1);
        lVar2 = param_1 + 0x10c;
        *(float*)(param_1+0x10c) = uVar3;
        return lVar2;
    }
    if (*(int*)(param_1+0x30) == 1) {
        float uVar3 = **(float**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long uVar1 = dice_hfe_anonymous_namespace_getServerSquadManager();
        dice_hfe_SquadManager_setFirstCommanderSelectDelay_float(uVar3, uVar1);
        return 0;
    }
    return 0;
}
} }
