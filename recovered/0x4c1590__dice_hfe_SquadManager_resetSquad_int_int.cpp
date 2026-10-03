// FUNCTION: BF2 0x4c1590
namespace dice { namespace hfe {

extern "C" void* dice_hfe_SquadManager_getSquad_int_int(void*, int, int);
extern "C" void dice_hfe_Squad_reset_bool(void*, bool);
void fn_0x4c1590(void* self, int a, int b) {
    void* r = dice_hfe_SquadManager_getSquad_int_int(self, a, b);
    if (r != 0) {
        dice_hfe_Squad_reset_bool(r, true);
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_resetSquad_int_int (0x4c1590)
