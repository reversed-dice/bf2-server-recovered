// FUNCTION: BF2 0x8e8760
namespace dice { namespace hfe {
extern "C" unsigned dice_hfe_world_IID_IProjectileSeekCompTemplate;
extern "C" unsigned dice_hfe_world_CID_SeekClosestTargetCompTemplate;
extern "C" long dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(unsigned, unsigned);
extern "C" float dice_hfe_world_SeekClosestTargetCompTemplate_getMaxAngleLock_const(long);
extern "C" void dice_hfe_world_SeekClosestTargetCompTemplate_setMaxAngleLock_float(float, long);

long cb_0x8e8760(long param_1) {
    if (__builtin_expect(*(int*)(param_1+0x30) == 0, 1)) {
        *(char*)(param_1+0x108) = 1;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IProjectileSeekCompTemplate, dice_hfe_world_CID_SeekClosestTargetCompTemplate);
        float val = dice_hfe_world_SeekClosestTargetCompTemplate_getMaxAngleLock_const(comp);
        *(float*)(param_1+0x10c) = val;
        return param_1 + 0x10c;
    }
    if (*(int*)(param_1+0x30) == 1) {
        unsigned cid = dice_hfe_world_CID_SeekClosestTargetCompTemplate;
        float val = **(float**)(param_1+0x38);
        *(char*)(param_1+0x108) = 0;
        long comp = dice_hfe_world_getActiveTemplateComponent_unsigned_int_unsigned_int(dice_hfe_world_IID_IProjectileSeekCompTemplate, cid);
        dice_hfe_world_SeekClosestTargetCompTemplate_setMaxAngleLock_float(val, comp);
        return 0;
    }
    return 0;
}
} }
