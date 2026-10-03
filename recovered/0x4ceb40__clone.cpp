// FUNCTION: BF2 0x4ceb40
namespace dice { namespace hfe {

unsigned char fn_0x4cd960(void* self) {
    void* g = *(void**)0x108a340;
    if (!g) return 1;
    return *(unsigned char*)((char*)g+0x48);
}

} }
// REVERSED_FUNCTION: dice_hfe_ClientVoteManager_getTeamVoteOnly_const (0x4cd960)
