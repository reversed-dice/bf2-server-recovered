// FUNCTION: BF2 0x515040
// dice_hfe_world_DestroyableObject_enableCachedObject
// 19 ins, 3 calls, gcc34
extern "C" {
extern void dice_hfe_world_SimpleObject_aiObjectCreate();
extern void dice_hfe_world_Bundle_enableCachedObject(long);
extern void dice_hfe_enableObject_dice_hfe_world_IObjectptr_bool(long, int);

void dice_hfe_world_DestroyableObject_enableCachedObject(long param_1)
{
    dice_hfe_world_SimpleObject_aiObjectCreate();
    long cached = *(long*)(param_1 + 0x68);
    dice_hfe_world_Bundle_enableCachedObject(param_1);
    if (cached != 0) {
        long vtable = *(long*)cached;
        void (*fn)(long) = *(void(**)(long))(vtable + 0x90);
        fn(cached);
    }
    dice_hfe_enableObject_dice_hfe_world_IObjectptr_bool(param_1, 0);
}

}
