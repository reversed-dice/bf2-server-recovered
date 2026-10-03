// FUNCTION: BF2 0x4c5520
namespace dice { namespace hfe {

extern "C" bool CommanderManager_setCommander_int_Teamptr_int(void*, int, void*, int);
bool fn_0x4c5520(void* self, int team, void* commanderTeam) {
    return CommanderManager_setCommander_int_Teamptr_int(self, -1, commanderTeam, team);
}

} }
// REVERSED_FUNCTION: dice_hfe_CommanderManager_setCommander_int_dice_hfe_Teamptr (0x4c5520)
