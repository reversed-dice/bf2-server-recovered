// FUNCTION: BF2 0x517d80
// 0x517d80 v3 - DropVehicle_destroy (16 ins, 2 calls)
// Fix MOVSXD: use explicit int cast for the argument
namespace dice { namespace hfe { namespace world {
extern long commanderToolsManager_0108caa8;
extern void fn_0x474220(long, int);
extern void fn_0x589360(long, int);
void dice_hfe_world_DropVehicle_destroy_bool(long self, bool flag) {
    long mgr = commanderToolsManager_0108caa8;
    if (mgr != 0) {
        int val = *(int*)(self + 0x254);
        fn_0x474220(mgr, val);
    }
    fn_0x589360(self, (int)(flag & 0xff));
}
} } }

// REVERSED_FUNCTION: dice_hfe_world_DropVehicle_destroy_bool (0x517d80)
