// FUNCTION: BF2 0x45e470

extern "C" void f_45e470(long param_1)
{
  if (*(char *)(param_1 + 0x31d) != '\0') {
    *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 1;
  }
  return;
}
// REVERSED_FUNCTION: dice_hfe_GameServer_clientAckedEndOfRoundGuard_int (0x45e470)
