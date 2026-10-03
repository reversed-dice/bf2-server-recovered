// FUNCTION: BF2 0x8d7720
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_IID_IWeaponFireCompTemplate;
extern "C" unsigned dice_hfe_world_CID_ThrownFireCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);

long cb_0x8d7720(long param_1) {
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IWeaponFireCompTemplate, dice_hfe_world_CID_ThrownFireCompTemplate);
        *(int*)(param_1+0x10c) = *(int*)(comp+0xb0);
        return param_1 + 0x10c;
    }
    if (*(int*)(param_1+0x30) == 1) {
        unsigned cid = dice_hfe_world_CID_ThrownFireCompTemplate;
        int val = **(int**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IWeaponFireCompTemplate, cid);
        *(int*)(comp+0xb0) = val;
        return 0;
    }
    return 0;
}
} }
