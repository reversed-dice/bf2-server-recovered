// FUNCTION: BF2 0x4689b0

extern "C" void f_4689b0(long param_1,int param_2)
{
  if (param_2 < 0xb) {
    param_2 = 10;
  }
  *(int *)(param_1 + 0x8c) = param_2;
  return;
}
// REVERSED_FUNCTION: dice_hfe_ServerSettings_setEndDelay_int (0x4689b0)
