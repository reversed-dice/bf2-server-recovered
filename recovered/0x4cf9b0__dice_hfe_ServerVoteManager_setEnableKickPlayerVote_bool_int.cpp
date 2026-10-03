// FUNCTION: BF2 0x4cf9b0
namespace dice { namespace hfe {
void fn_0x4cf9b0(void* self, bool val, int idx) {
    unsigned t = (unsigned)(idx-1);
    if (t >= 2) idx = 1;
    *((char*)self + ((long)idx<<7) + 0x91) = val;
}
} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_setEnableKickPlayerVote_bool_int (0x4cf9b0)
