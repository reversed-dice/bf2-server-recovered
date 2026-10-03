// FUNCTION: BF2 0x7ceb30
extern "C" void* real_0x7c3db0();
extern "C" long fn_0x7ceb30() {
    return *(long*)((char*)real_0x7c3db0() + 0x28);
}
// REVERSED_FUNCTION: dice_hfe_io_getStatsSize (0x7ceb30)
