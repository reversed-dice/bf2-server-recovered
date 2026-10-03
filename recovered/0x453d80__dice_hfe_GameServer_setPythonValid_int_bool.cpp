// FUNCTION: BF2 0x453d80

extern "C" void f_453d80(long param_1,int param_2,unsigned char param_3)
{
  *(unsigned char *)((long)param_2 + 0x330 + param_1) = param_3;
  return;
}
// REVERSED_FUNCTION: dice_hfe_GameServer_setPythonValid_int_bool (0x453d80)
