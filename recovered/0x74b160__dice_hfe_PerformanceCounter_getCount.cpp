// FUNCTION: BF2 0x74b160
namespace dice { namespace hfe {
extern "C" int gettimeofday(void*, void*);
long fn_0x74b160() {
    struct { long sec, usec; } tv = {0, 0};
    gettimeofday(&tv, 0);
    return tv.sec * 1000000L + tv.usec;
}
} }
// REVERSED_FUNCTION: dice_hfe_PerformanceCounter_getCount (0x74b160)
