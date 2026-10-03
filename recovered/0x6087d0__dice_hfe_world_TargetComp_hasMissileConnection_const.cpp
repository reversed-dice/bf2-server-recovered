// FUNCTION: BF2 0x6087d0

extern "C" unsigned long long f_6087d0(long param_1)
{
  if ((*(char *)(param_1 + 0x50) != '\0') &&
     ((*(char *)(param_1 + 0x70) != '\0' || (*(char *)(*(long *)(param_1 + 0x78) + 0x48) == '\0'))))
  {
    return 1;
  }
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_hasMissileConnection_const (0x6087d0)
