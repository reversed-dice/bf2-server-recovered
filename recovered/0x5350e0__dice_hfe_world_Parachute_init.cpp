// FUNCTION: BF2 0x5350e0
// dice_hfe_world_Parachute_init
// 19 instructions, 2 vtable calls + 1 tail call, gcc34
extern "C" {
extern long dice_hfe_world_objectManager;
extern long dice_hfe_world_g_debugParachuteMode;
volatile extern float DAT_00b4a5d8;
extern void dice_hfe_world_PlayerControlObject_init(long);
extern void dice_hfe_turnPhysicsOff_dice_hfe_world_IObjectptr_bool(long, int);

void dice_hfe_world_Parachute_init(long param_1)
{
    long mgr = dice_hfe_world_objectManager;
    long vtable = *(long*)mgr;
    void (*fn)(float, long, long, int) = *(void(**)(float, long, long, int))(vtable + 0x1a0);
    fn(DAT_00b4a5d8, mgr, param_1, 0x20);
    dice_hfe_world_PlayerControlObject_init(param_1);
    long debug = dice_hfe_world_g_debugParachuteMode;
    if (*(int*)debug == 1) {
        dice_hfe_turnPhysicsOff_dice_hfe_world_IObjectptr_bool(param_1, 1);
    }
}

}
