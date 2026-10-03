// FUNCTION: BF2 0x43deb0

extern "C" void f_43deb0(long param_1,char param_2)
{
  *(unsigned char *)(param_1 + 0x14) = 1;
  if ((param_2 != '\0') && (*(char *)(param_1 + 0x16) == '\0')) {
    *(unsigned char *)(param_1 + 0x14) = 0;
  }
  return;
}
// REVERSED_FUNCTION: dice_hfe_SprintState_handleTMSprint_bool (0x43deb0)
