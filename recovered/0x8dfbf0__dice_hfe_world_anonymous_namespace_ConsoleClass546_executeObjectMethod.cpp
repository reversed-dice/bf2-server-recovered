// FUNCTION: BF2 0x8dfbf0
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_IID_IWeaponTargetCompTemplate;
extern "C" unsigned dice_hfe_world_CID_SimpleTargetCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);

long cb_0x8dfbf0(long param_1) {
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IWeaponTargetCompTemplate, dice_hfe_world_CID_SimpleTargetCompTemplate);
        *(char*)(param_1+0x10a) = *(char*)(comp+0x5c);
        return param_1 + 0x10a;
    }
    if (*(int*)(param_1+0x30) == 1) {
        unsigned cid = dice_hfe_world_CID_SimpleTargetCompTemplate;
        char val = **(char**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IWeaponTargetCompTemplate, cid);
        *(char*)(comp+0x5c) = val;
        return 0;
    }
    return 0;
}
} }
