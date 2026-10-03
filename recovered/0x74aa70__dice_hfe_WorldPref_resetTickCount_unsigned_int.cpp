// FUNCTION: BF2 0x74aa70
namespace dice { namespace hfe {
extern "C" double dice_hfe_WorldPref_getTickTime();
extern "C" void dice_hfe_WorldPref_resetWorldTime_double(double);
void fn_0x74aa70(unsigned tick) {
    *(unsigned*)0x10aa1f8 = tick;
    double t = (double)tick;
    double factor = dice_hfe_WorldPref_getTickTime();
    dice_hfe_WorldPref_resetWorldTime_double(factor * t);
}
} }
// REVERSED_FUNCTION: dice_hfe_WorldPref_resetTickCount_unsigned_int (0x74aa70)
