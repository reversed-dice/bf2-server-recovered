// FUNCTION: BF2 0x8dd320
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_CID_SoldierBasedRecoilCompTemplate;
extern "C" unsigned dice_hfe_world_IID_IWeaponRecoilCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);
extern "C" void dice_hfe_world_SoldierBasedRecoilCompTemplate_setGoBackOnRecoil_bool(long, bool);

long cb(long param_1) {
    int sel = *(int*)(param_1 + 0x30);
    if (sel != 0) goto nz;
    {
        *(char*)(param_1 + 0x108) = 1;
        long c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponRecoilCompTemplate,
            dice_hfe_world_CID_SoldierBasedRecoilCompTemplate);
        *(char*)(param_1 + 0x10a) = *(char*)(c + 0x49);
        return param_1 + 0x10a;
    }
    nz:
    if (sel != 1) return 0;
    {
        unsigned cid = dice_hfe_world_CID_SoldierBasedRecoilCompTemplate;
        bool v = **(bool**)(param_1 + 0x38);
        *(char*)(param_1 + 0x108) = 0;
        long c = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(
            dice_hfe_world_IID_IWeaponRecoilCompTemplate, cid);
        dice_hfe_world_SoldierBasedRecoilCompTemplate_setGoBackOnRecoil_bool(c, v);
        return 0;
    }
}
} }
