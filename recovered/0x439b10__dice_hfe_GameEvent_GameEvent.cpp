// FUNCTION: BF2 0x439b10

extern "C" void f_439b10(unsigned long long *param_1)
{
  *param_1 = 0xb2f0b0;
  *(unsigned int *)(param_1 + 1) = 1;
  *(unsigned int *)((long)param_1 + 0xc) = 0xffffffff;
  return;
}
// REVERSED_FUNCTION: dice_hfe_GameEvent_GameEvent (0x439b10)
