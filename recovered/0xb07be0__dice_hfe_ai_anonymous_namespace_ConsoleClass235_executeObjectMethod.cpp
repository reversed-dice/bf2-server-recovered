// FUNCTION: BF2 0xb07be0
namespace dice { namespace hfe {
extern "C" long dice_hfe_ai_getActiveWeaponTemplate();
extern "C" bool dice_hfe_ai_WeaponTemplate_getIsThrown_const(long);
extern "C" void dice_hfe_ai_WeaponTemplate_setIsThrown_bool(long, bool);

long cb_0xb07be0(long param_1) {
    long lVar2;
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long uVar1 = dice_hfe_ai_getActiveWeaponTemplate();
        bool uVar3 = dice_hfe_ai_WeaponTemplate_getIsThrown_const(uVar1);
        lVar2 = param_1 + 0x10a;
        *(bool*)(param_1+0x10a) = uVar3;
        return lVar2;
    }
    if (*(int*)(param_1+0x30) == 1) {
        bool uVar3 = **(bool**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long uVar1 = dice_hfe_ai_getActiveWeaponTemplate();
        dice_hfe_ai_WeaponTemplate_setIsThrown_bool(uVar1, uVar3);
        return 0;
    }
    return 0;
}
} }
