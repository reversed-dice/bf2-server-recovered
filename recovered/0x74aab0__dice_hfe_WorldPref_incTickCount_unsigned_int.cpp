// FUNCTION: BF2 0x74aab0
namespace dice { namespace hfe {
extern "C" double dice_hfe_WorldPref_getTickTime();
extern "C" void dice_hfe_WorldPref_resetWorldTime_double(double);
void fn_0x74aab0(unsigned tick) {
    unsigned v = *(unsigned*)0x10aa1f8 + tick;
    *(unsigned*)0x10aa1f8 = v;
    double t = (double)v;
    double factor = dice_hfe_WorldPref_getTickTime();
    dice_hfe_WorldPref_resetWorldTime_double(factor * t);
}
} }
// REVERSED_FUNCTION: dice_hfe_WorldPref_incTickCount_unsigned_int (0x74aab0)
