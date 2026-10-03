// FUNCTION: BF2 0x608580

extern "C" unsigned long long f_608580(long param_1)
{
  if ((*(int *)(*(long *)(param_1 + 0x78) + 0x54) == 3) && (*(char *)(param_1 + 0x50) != '\0')) {
    return 1;
  }
  return 0;
}
// REVERSED_FUNCTION: dice_hfe_world_TargetComp_getWeaponState_const (0x608580)
