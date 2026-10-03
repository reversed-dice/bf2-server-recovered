// FUNCTION: BF2 0x6825f0

extern "C" long f_6825f0(long param_1)
{
  unsigned long long *puVar1;
  long lVar2;
  
  lVar2 = 0;
  for (puVar1 = *(unsigned long long **)(param_1 + 0x18); (unsigned long long *)(param_1 + 0x18) != puVar1;
      puVar1 = (unsigned long long *)*puVar1) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}
// REVERSED_FUNCTION: dice_hfe_world_PlayerManager_getNumberOfPlayers_const (0x6825f0)
