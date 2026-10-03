// FUNCTION: BF2 0xaab940

extern "C" {
extern void* dice_hfe_world_objectManager;
extern unsigned int dice_hfe_world_anonymous_namespace_LocalActiveObject_mFlag;
extern void dice_hfe_world_updateFlagsRecursive_dice_hfe_world_IObjectptr_unsigned_int_unsigned_int(void*, unsigned int, unsigned int);
}
typedef void* (*vfn)(void*);
extern "C" long eom_aab940(char* param_1) {
    if (*(int*)(param_1 + 0x30) != 1) {
        return 0;
    }
    char cVar1 = **(char**)(param_1 + 0x38);
    *(unsigned char*)(param_1 + 0x108) = 0;
    dice_hfe_world_anonymous_namespace_LocalActiveObject_mFlag = 0x10000;
    ((vfn)(*(void***)dice_hfe_world_objectManager)[0x120/8])(dice_hfe_world_objectManager);
    if (cVar1 == 0) {
        unsigned int flag = dice_hfe_world_anonymous_namespace_LocalActiveObject_mFlag;
        void* obj = ((vfn)(*(void***)dice_hfe_world_objectManager)[0x120/8])(dice_hfe_world_objectManager);
        dice_hfe_world_updateFlagsRecursive_dice_hfe_world_IObjectptr_unsigned_int_unsigned_int(obj, 0, flag);
        return 0;
    }
    unsigned int flag = dice_hfe_world_anonymous_namespace_LocalActiveObject_mFlag;
    void* obj = ((vfn)(*(void***)dice_hfe_world_objectManager)[0x120/8])(dice_hfe_world_objectManager);
    dice_hfe_world_updateFlagsRecursive_dice_hfe_world_IObjectptr_unsigned_int_unsigned_int(obj, flag, 0);
    return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_anonymous_namespace_ConsoleClass277_executeObjectMethod (0xaab940)
