// FUNCTION: BF2 0x524090
namespace dice { namespace hfe { namespace world {

void fn_0x524090(void* self, int team) {
    void* p = *(void**)((char*)self+0x28);
    if (*(unsigned char*)((char*)p+0x214) == 1) {
        *(int*)((char*)self+0x250) = team;
    }
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Item_setTeam_int (0x524090)
