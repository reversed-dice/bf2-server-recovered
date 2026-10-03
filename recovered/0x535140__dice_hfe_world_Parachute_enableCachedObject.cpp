// FUNCTION: BF2 0x535140
// dice_hfe_world_Parachute_enableCachedObject
// 11 instructions, 1 vtable call + 1 tail call, gcc40
extern "C" {
extern long dice_hfe_world_objectManager;
volatile extern float DAT_00b4a5d8;
extern void dice_hfe_world_PlayerControlObject_enableCachedObject(long);

void dice_hfe_world_Parachute_enableCachedObject(long param_1)
{
    long mgr = dice_hfe_world_objectManager;
    long vtable = *(long*)mgr;
    void (*fn)(long, long, float, int) = *(void(**)(long, long, float, int))(vtable + 0x1a0);
    fn(mgr, param_1, DAT_00b4a5d8, 0x20);
    dice_hfe_world_PlayerControlObject_enableCachedObject(param_1);
}

}
