// FUNCTION: BF2 0x468850

extern "C" unsigned int f_468850(long param_1)
{
  unsigned int uVar1;
  
  uVar1 = 100;
  if (*(char *)(param_1 + 0x145) == '\0') {
    uVar1 = *(unsigned int *)(param_1 + 0x98);
  }
  return uVar1;
}
// REVERSED_FUNCTION: dice_hfe_ServerSettings_getTicketRatio_const (0x468850)
