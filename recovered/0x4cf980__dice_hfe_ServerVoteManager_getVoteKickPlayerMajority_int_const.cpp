// FUNCTION: BF2 0x4cf980
namespace dice { namespace hfe {
extern "C" float dice_hfe_Vote_getMajority_const(void*);
float fn_0x4cf980(void* self, int idx) {
    unsigned t = (unsigned)(idx-1);
    if (t >= 2) idx = 1;
    char* slot = (char*)self + ((long)idx<<7) + 0x90;
    return dice_hfe_Vote_getMajority_const(slot);
}
} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_getVoteKickPlayerMajority_int_const (0x4cf980)
