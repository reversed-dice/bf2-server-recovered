// FUNCTION: BF2 0x4baf30
namespace dice { namespace hfe {

void fn_0x4baf30(void* self, int team) {
    if (*(unsigned char*)((char*)self+0x79) == 1) {
        *(int*)((char*)self+0x5c) = team;
    }
}

} }
// REVERSED_FUNCTION: dice_hfe_SpawnGroup_setTeam_int (0x4baf30)
