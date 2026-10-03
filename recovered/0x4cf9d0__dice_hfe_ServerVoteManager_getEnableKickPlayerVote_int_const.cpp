// FUNCTION: BF2 0x4cf9d0
namespace dice { namespace hfe {
unsigned char fn_0x4cf9d0(void* self, int idx) {
    unsigned t = (unsigned)(idx-1);
    if (t >= 2) idx = 1;
    return *(unsigned char*)((char*)self + ((long)idx<<7) + 0x91);
}
} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getEnableKickPlayerVote_int_const (0x4cf9d0)
