// FUNCTION: BF2 0x4ef850

extern "C" float f_4ef850(long param_1)
{
  return (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x20);
}
// REVERSED_FUNCTION: dice_hfe_DemoConfig_getAspect_const (0x4ef850)
