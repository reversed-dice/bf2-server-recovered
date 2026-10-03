// FUNCTION: BF2 0x4c5940
namespace dice { namespace hfe {

extern "C" void* SquadManager_getTeam_int(int);
extern "C" void Team_resignCommander(void*);
void fn_0x4c5940(int team) {
    void* r = SquadManager_getTeam_int(team);
    if (r) Team_resignCommander(r);
}

} }
// REVERSED_FUNCTION: dice_hfe_SquadManager_resignCommander_int (0x4c5940)
