// FUNCTION: BF2 0x4cf980
namespace dice { namespace hfe {
extern "C" void dice_hfe_Vote_setMajority_float(void*, float);
void fn_0x4cf950(void* self, float value, int idx) {
    unsigned t = (unsigned)(idx-1);
    if (t >= 2) idx = 1;
    char* slot = (char*)self + ((long)idx<<7) + 0x90;
    dice_hfe_Vote_setMajority_float(slot, value);
}
} }
// REVERSED_FUNCTION: dice_hfe_ServerVoteManager_setVoteKickPlayerMajority_float_int (0x4cf950)
