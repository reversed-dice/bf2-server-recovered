// FUNCTION: BF2 0x4688b0

extern "C" unsigned int f_4688b0(long param_1)
{
  unsigned int uVar1;
  
  uVar1 = 0x10;
  if (*(char *)(param_1 + 0x145) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x118);
  }
  return uVar1;
}
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getCoopBotCount_const (0x4688b0)
