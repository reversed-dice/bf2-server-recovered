// FUNCTION: BF2 0x74ab30
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_Timer_reset_double
// 14 instructions, 2 calls (getCount + tail call to update), gcc34
extern "C" {
extern long long dice_hfe_PerformanceCounter_getCount();
extern void dice_hfe_Timer_update(long);

void dice_hfe_Timer_reset_double(long param_1, double param_2)
{
    *(long long*)(param_1 + 8) = dice_hfe_PerformanceCounter_getCount();
    *(long*)(param_1 + 0x10) = (long)(param_2 / *(double*)(param_1 + 0x28));
    dice_hfe_Timer_update(param_1);
}

}
