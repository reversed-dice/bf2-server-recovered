// FUNCTION: BF2 0x539f00
// dice_hfe_world_PlayerControlObject_destroy_bool
// 18 instructions, 2 calls + 1 tail call, gcc34
extern "C" {
extern long dice_hfe_spawnManager;
extern void dice_hfe_world_PlayerControlObject_reset();
extern void dice_hfe_world_SimpleObject_destroy_bool(long, unsigned char);

void dice_hfe_world_PlayerControlObject_destroy_bool(long param_1, unsigned char param_2)
{
    dice_hfe_world_PlayerControlObject_reset();
    if (*(int*)(param_1 + 0x3c8) != -1) {
        long mgr = dice_hfe_spawnManager;
        long vtable = *(long*)mgr;
        void (*fn)(long, int) = *(void(**)(long, int))(vtable + 0x48);
        fn(mgr, *(int*)(param_1 + 0x3c8));
    }
    dice_hfe_world_SimpleObject_destroy_bool(param_1, param_2);
}

}
